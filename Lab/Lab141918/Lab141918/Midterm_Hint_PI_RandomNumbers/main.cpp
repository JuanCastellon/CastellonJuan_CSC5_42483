/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PI=4*atan(1);//Definition of PI

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int nTerms;   //Number of terms used in the sequence
    float apprxPI;//Approximate value of PI given # terms in sequence
    
    //Input or initialize values Here
    apprxPI=0;
    nTerms=1000;
    
    //Process/Calculations Here
    for(int sign=-1, term=1,cntr=1;cntr<=nTerms;cntr+=2,term++){
        sign*=-1;
        apprxPI+=(static_cast<float>(sign)/cntr);//atan(1)
    }
    apprxPI*=4;//Approximates PI
    
    //Output Located Here
    cout<<"After "<<nTerms<<" the approximate value of PI = "<<apprxPI<<endl;
    cout<<"PI = "<<PI<<endl;
    cout<<"The difference = "<<(PI-apprxPI)/PI*100<<"%"<<endl;

    //Exit
    return 0;
}

