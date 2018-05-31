
/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on May 20, 2018, 12:00 PM
 * Purpose:
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <fstream>  //
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=10;
    int lotto[SIZE];  //Lottery array sized to 10, filled with user's number
    int winNum[SIZE]; //Winning Numbers Array
    int luckNum;      //User inputted lotto number
    fstream winNmFl;
    
    //Open Winning Numbers File/Initialize Winning Number Array
    winNmFl.open("winning_numbers.dat");
    for(int count=0;count<SIZE;count++){
        winNmFl>>winNum[count];
    }
    
    
    //Initial Variables
    cout<<"This program will determine if you are the winner of the "
            "lottery."<<endl;
    cout<<"Please input your lucky 5 digit number."<<endl;
    cin>>luckNum;
    
    //Initializes lotto array to lucky number
    for(int count=0;count<SIZE;count++){
        lotto[count]=luckNum;
    }
    
    //Map/Process Inputs to Outputs
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(lotto[i]==winNum[j]){
                cout<<"You're a winner!"<<endl;
            }
        }
    }
    
    
    //Display Outputs
    
    
    //Exit Program!
    return 0;
}
