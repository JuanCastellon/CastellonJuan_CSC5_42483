
/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on April 13, 2018, 11:27 AM
 * Purpose: Falling Distance
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C
const float G=9.8;//Gravity constant

//Function Prototypes
float falling(float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float dist;  //Distance object fell in meters
    
    //Display outputs
    cout<<"This program calculates the distance an object falls from 1 to 10 "
            "seconds."<<endl;
    
    for(float time=1;time<=10;time++){
        dist = falling(time);
        cout<<"The object fell "<<dist<<" meters in "<<time<<" seconds."<<endl;
    }
    return 0;
}
float falling(float time){
    return .5*G*time*time;
}
