
/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on May 21, 2018, 5:00 PM
 * Purpose: Larger than N program
 * Notice: This problem didn't specify on the contents of the array so I just
 * randomly filled it.
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <cstdlib>  //Random Function
#include <ctime>    //Time library

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C

//Function Prototypes
void fill(int [], int);       //Fills array with random numbers
void print(int [], int);      //Prints the array
void larger(int [], int, int);//Larger than N function

//Execution Begins Here!
int main(int argc, char** argv) {
    //Setting the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=10;
    int array[SIZE];//Array of size 10
    int n;//User selected number
    
    //Initial Variables
    cout<<"This program will determine if a number you choose is less than "
            "the value in an array of size 10."<<endl;
    cout<<"The array is randomly filled with numbers ranging from 1-10"<<endl;
    cout<<"Input a number from 1-10"<<endl;
    cin>>n;
    
    //Map/Process Inputs to Outputs
    fill(array,SIZE);
    larger(array,SIZE,n);
    
    //Display Outputs
    print(array,SIZE);
    
    //Exit Program!
    return 0;
}
void fill(int array[], int size){
    for(int count=0;count<size;count++){
        array[count]=rand()%10+1;//[1,10]
    }
}
void larger(int array[], int size, int n){
    for(int count=0;count<size;count++){
        if(n>array[count]){
            cout<<n<<" is greater than "<<array[count]<<endl;
        }
    }
}
void print(int array[], int size){
    cout<<"============================"<<endl;
    cout<<"The contents of the array are : "<<endl;
    for(int count=0;count<size;count++){
        cout<<array[count]<<endl;
    }
}