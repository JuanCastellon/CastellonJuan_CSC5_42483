
/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on May 27, 2018, 5:00 PM
 * Purpose: Selection/Bubble Sort Benchmark
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C

//Function Prototypes
void fill2(int [], int);
void exBub(int [], int);
void exSel(int [], int);
void bubSort2(int [], int);
void selSort2(int [], int);

//Execution Begins Here!
int main(int argc, char** argv) { 
    //Declare Variables
    const int SIZE=8;
    int array1[SIZE];//Two
    int array2[SIZE];//Identical Arrays
    
    
    //Initial Variables
    fill2(array1,SIZE);
    fill2(array2,SIZE);
    
    //Map/Process Inputs to Outputs
    bubSort2(array1,SIZE);
    for(int count=0;count<SIZE;count++){
        cout<<array1[count]<<" ";
    }
    cout<<endl;
    
    selSort2(array2,SIZE);
    for(int count=0;count<SIZE;count++){
        cout<<array1[count]<<" ";
    }
    cout<<endl;

    
    //Display Outputs
    
    
    //Exit Program!
    return 0;
}
void fill2(int array[],int size){
    for(int count=0;count<size;count++){
        array[count]=count;
    }
}
void bubSort2(int array1[],int size){
    int exchange=0;//Keeps track of exchanges
    for(int count=0;count<size-1;count++){
        for(int place=count+1;place<size;place++){
            if(array1[count]>array1[place]){
                int temp=array1[count];
                array1[count]=array1[place];
                array1[place]=temp;
            }
            exchange++;
        }
    }
    cout<<"Bubble Sort Exchanges: "<<exchange<<endl;
}
void selSort2(int array2[],int size){
    int minDex,minVal;
    int exchange=0;//Keeps track of exchanges
    for(int start=0;start<(size-1);start++){
        minDex=start;
        minVal=array2[start];
        for(int index=start+1;index<size;index++){
            if(array2[index]<minVal){
                minVal=array2[index];
                minDex=index;
            }
        }
        exchange++;
    }
    cout<<"Selection Sort Exchanges: "<<exchange<<endl;
}

