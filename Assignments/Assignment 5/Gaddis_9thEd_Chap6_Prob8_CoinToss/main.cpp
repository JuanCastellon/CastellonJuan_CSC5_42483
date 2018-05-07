
/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on May 6th, 2018, 9:00 AM
 * Purpose: Coin Toss Simulator
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <ctime>    //Time library
#include <cstdlib>  //Random Library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C

//Function Prototypes
void coinTss();
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<int>(time(0)));
    //Declare Variables
    int tosses;//Amount of times tosses based on user input
    
    //Initialization of Tosses
    cout<<"This program simulates a coin toss."<<endl;
    cout<<"Please input amount of time you want to coin toss."<<endl;
    cin>>tosses;
    
    //Map/Process Inputs to Outputs
    for(int i=1;i<=tosses;i++){
        cout<<"Toss "<<i<<" is ";
        coinTss();
        
    }
    
    //Display Outputs
    
    
    //Exit Program!
    return 0;
}
void coinTss(){
    int result;
    result=rand()%2+1;
    if(result==1){
        cout<<"Heads"<<endl;
    }else{
        cout<<"Tails"<<endl;
    }
}

