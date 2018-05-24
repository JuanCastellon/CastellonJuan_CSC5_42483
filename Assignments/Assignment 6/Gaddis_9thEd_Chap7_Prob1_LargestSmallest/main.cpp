
/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on May 20, 2018, 12:00 PM
 * Purpose: Problem 1 Chapter 6 Largest to Smallest
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
using namespace std;//namespace I/O stream library created

//User Libraries


//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C

//Function Prototypes
void sort(int [], int);
void input(int [], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=10;//constant for sizing the array
    int array[SIZE];  //An array of size 10
    
    //Map/Process Inputs to Outputs
    cout<<"This program will detect the smallest and largest values "
            "in an array with 10 elements."<<endl;
    cout<<"Please input 10 values."<<endl;
    
    //Inputting values
    input(array,SIZE);
    
    //Choosing values
    sort(array,SIZE);
    
    //Display Outputs
    cout<<"Largest value  = "<<array[0]<<endl;//Sort function place large @ 1st
    cout<<"Smallest value = "<<array[9]<<endl;//Sort function place small @ 10th
    
    //Exit Program!
    return 0;
}
void input(int array [],int size){
    for(int count=0;count<size;count++){
        cin>>array[count];
    }
}
void sort(int array[],int size){
    for(int count=0;count<size-1;count++){
        for(int pos=count+1;pos<size;pos++){
            int temp=array[count];
            array[count]=array[pos];
            array[pos]=temp;
        }
    }
}