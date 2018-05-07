
/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on April 13, 2018, 11:27 AM
 * Purpose: CPP Template
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C

//Function Prototypes
float kEnrgy(float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float KE,    //Kinetic energy in joules
            mass,//Mass in kg
            velo;//Velocity in m/s
    
    //Initial Variables
    cout<<"This program can calculate the kinetic energy of an object given "
            "it's mass and velocity."<<endl;
    cout<<"Input the mass in kilograms and the velocity in meters per second"<<
            endl;
    cin>>mass>>velo;
    KE = kEnrgy(mass,velo);//Pass mass and velocity into function
    
    //Display Outputs
    cout<<"Kinetic energy of the object = "<<KE<<"J"<<endl;
    
    //Exit Program!
    return 0;
}
float kEnrgy(float mass,float velo){
    return mass*velo*velo*.5;
}

