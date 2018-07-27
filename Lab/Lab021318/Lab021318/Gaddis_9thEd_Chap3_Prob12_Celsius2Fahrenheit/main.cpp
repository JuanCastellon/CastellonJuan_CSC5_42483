/* 
 * File:   main.cpp
 * Author: 
 * Created on:
 * Purpose:
*/

//System Libraries Here
#include <iostream>//cin,cout
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float cel,fah;
    
    //Initialize Variables
    cout<<"This program can convert Celsius temperatures to Fahrenheit "
            "temperatures."<<endl;
    cout<<"Please input the temperature in Celsius."<<endl;
    cin>>cel;
    
    //Process Input/Output
    fah=((9.0f/5.0f)*cel)+32;
    
    //Display Results
    cout<<"Fahrenheit temperature = "<<fah<<endl;
    
    
    
    //Exit
    return 0;
}

