/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PI=4*atan(1);//Definition of PI
const float MAXRND=pow(2,31)-1;//2^31-1
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    float apprxPI;//Approximate value of PI given number of terms in sequence 
    int nDarts;   //Number of darts in our dart game
    int inCrcl;   //Number of darts in the circle
    
    //Input or initialize values Here
    nDarts=1000;
    inCrcl=0;
    
    //Process/Calculations Here
    for(int dart=1;dart<=nDarts;dart++){
        float x=rand()/MAXRND;
        float y=rand()/MAXRND;
        if(x*x+y*y<=1)inCrcl++;
    }
    apprxPI=4.0f*inCrcl/nDarts;//Approximates PI
    
    //Output Located Here
    cout<<"After "<<nDarts
            <<" terms the Approximate value of PI = "<<apprxPI<<endl;
    cout<<"PI = "<<PI<<endl;
    cout<<"The difference = "<<(PI-apprxPI)/PI*100<<"%"<<endl;

    //Exit
    return 0;
}

