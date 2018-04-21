
/* 
 * File:   main.cpp
 * Author: Blake Ward, Angel Castaeda
 * Created on February 13, 2018, 11:27 AM
 * Purpose: Military Budget
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Colu
const float TRLLN=1.0e12f;//Trillion
const float BLLN=1.0e09f; //Billion
const int   PRCNT=100;    //Conversion for percent

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float milBdgt,fedBdgt,pcntMil;
    
    //Initial Variables
    milBdgt=639*BLLN;
    fedBdgt=4.1*TRLLN;
    
    //Map/Process Inputs to Outputs
    pcntMil=milBdgt/fedBdgt*PRCNT;
    
    //Display Outputs
   cout <<"Military Budget = $"<<milBdgt/BLLN<<" Billion"<<endl;
   cout <<"Federal Budget = $"<<fedBdgt/TRLLN<<" Trillion"<<endl;
   cout<<"Military Percentage = "<<pcntMil<<"%"<<endl;
    
    //Exit Program!
    return 0;
}

