/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on March 20, 2018, 11:50 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int fn, fnm1,fnm2;
    
    //Input or initialize values Here
    fnm2=0;
    fnm1=1;
    
    //Print out the first 2 in the sequence
    cout<<"Fibonacci Sequence"<<endl;
    cout<<"{"<<fnm2<<","<<fnm1;
    
    //Calculate the 3rd element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    
    //Calculate the 4th element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    
    //Calculate the 5th element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    
    //Calculate the 6th element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    
    //Calculate the 7th element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    
    //Calculate the 8th element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    
    //Calculate the 9th element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn<<"}"<<endl;
    
    
    //Process/Calculations Here
    
    
    //Output Located Here
    
    
    //Exit
    return 0;
}

