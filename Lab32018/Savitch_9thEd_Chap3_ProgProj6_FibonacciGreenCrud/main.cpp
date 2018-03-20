/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on March 20, 2018, 11:50 AM
 * Purpose: Green Crud with Fibonacci
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int fn, fnm1,fnm2,intCrud,days;
    
    //Input or initialize values Here
    fnm2=0;
    fnm1=1;
    intCrud=10;
    days=0;
    
    //Print out the first 2 in the sequence
    cout<<"Fibonacci Sequence with Green Crud"<<endl;
    cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm2*intCrud
            <<" lbs of crud"<<endl;
    days+=5;
    
    
    
    //Calculate the 3rd element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    days+=5;
    cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm2*intCrud
            <<" lbs of crud"<<endl;
    days+=5;
    
    //Calculate the 4th element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm2*intCrud
            <<" lbs of crud"<<endl;
    days+=5;
    
    
    //Calculate the 5th element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm2*intCrud
            <<" lbs of crud"<<endl;
    days+=5;
    
    
    //Calculate the 6th element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm2*intCrud
            <<" lbs of crud"<<endl;
    days+=5;
    
    
    //Calculate the 7th element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm2*intCrud
            <<" lbs of crud"<<endl;
    days+=5;
    
    
    //Calculate the 8th element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm2*intCrud
            <<" lbs of crud"<<endl;
    days+=5;
    
    
    //Calculate the 9th element in the sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<"On day "<<setw(3)<<days
            <<" there is "<<setw(4)<<fnm2*intCrud
            <<" lbs of crud"<<endl;
    days+=5;
    
    //Process/Calculations Here
    
    
    //Output Located Here
    
    
    //Exit
    return 0;
}

