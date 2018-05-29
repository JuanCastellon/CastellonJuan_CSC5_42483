
/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on May 20, 2018, 12:00 PM
 * Purpose:
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <fstream>  //Input/Output files
#include <iomanip>  //Formatting Library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C

//Function Prototypes
void valid(int [], int, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=18;//Size of account number database is 18
    int number;       //User inputted account number
    int acctNum[SIZE];
    ifstream acctFl;
    
    //Initial Variables
    acctFl.open("account_number.dat");
    for(int count=0;count<SIZE;count++){
        acctFl>>acctNum[count];
    }
    
    
    //Map/Process Inputs to Outputs
    cout<<"This program will validate the account number you input."<<endl;
    cout<<"Please input your 7 digit account number."<<endl;
    cin>>number;
    
    //Display Outputs
    valid(acctNum,SIZE,number);
    
    //Close File
    acctFl.close();
    
    //Exit Program!
    return 0;
}
void valid(int acctNum[],int size, int input){
    bool invalid=false;//Variable incase account # is false
    for(int count=0;count==size;count++){
        if(acctNum[count]==input){
            cout<<"Account number valid."<<endl;
            invalid=true;
        }
    }
    if(invalid==false){
        cout<<"Account number invalid."<<endl;
    }
}
