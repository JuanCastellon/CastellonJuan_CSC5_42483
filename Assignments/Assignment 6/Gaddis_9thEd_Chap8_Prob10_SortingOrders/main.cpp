
/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on May 27, 2018, 5:00 PM
 * Purpose: Selection/Bubble Sort Methods
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C

//Function Prototypes
void fill(int [], int);
void disBub(int [], int);
void disSel(int [], int);
void bubSort(int [], int);
void selSort(int [], int);

//Execution Begins Here!
int main(int argc, char** argv) { 
    //Declare Variables
    const int SIZE=8;
    int array1[SIZE];//Two
    int array2[SIZE];//Identical Arrays
    
    
    //Initial Variables
    fill(array1,SIZE);
    fill(array2,SIZE);
    
    //Map/Process Inputs to Outputs
    bubSort(array1,SIZE);
    cout<<"End of Bubble Sort"<<endl;
    selSort(array2,SIZE);
    cout<<"End of Selection Sort"<<endl;
    
    //Display Outputs
    
    
    //Exit Program!
    return 0;
}
void fill(int array[],int size){
    for(int count=0;count<size;count++){
        array[count]=count;
    }
}
void bubSort(int array1[],int size){
    for(int count=0;count<size-1;count++){
        for(int place=count+1;place<size;place++){
            if(array1[count]>array1[place]){
                int temp=array1[count];
                array1[count]=array1[place];
                array1[place]=temp;
            }
            disBub(array1,size);
        }
    }
}
void selSort(int array2[],int size){
    int minDex,minVal;
    for(int start=0;start<(size-1);start++){
        minDex=start;
        minVal=array2[start];
        for(int index=start+1;index<size;index++){
            if(array2[index]<minVal){
                minVal=array2[index];
                minDex=index;
            }
        }
        disSel(array2,size);
    }
}
void disBub(int array1[], int size){
    for(int count=0;count<size;count++){
        cout<<"Bubble Sort Run #"<<count+1<<endl;
        for(int cntr=0;cntr<size;cntr++){
            cout<<array1[cntr]<<endl;
        }
    }
}
void disSel(int array2[],int size){
    for(int count=0;count<size;count++){
        cout<<"Selection Sort Run #"<<count+1<<endl;
        for(int cntr=0;cntr<size;cntr++){
            cout<<array2[cntr]<<endl;
        }
    }
}