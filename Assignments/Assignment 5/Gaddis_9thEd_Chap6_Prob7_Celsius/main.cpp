
/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on May 6, 2018, 5:30 PM
 * Purpose: Celsius Converter
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <iomanip>  //Formatting Library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C

//Function Prototypes
float celsius(float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float cels=0;
    
    //Display Outputs
    cout<<"This program will calculate the temperature in degrees Celsius "
            "from 0-20 degrees Fahrenheit"<<endl;
    cout<<"Fahrenheit    Celsius"<<endl;
    
    //Loop for displaying conversion
    for(float fahren=0;fahren<=20;fahren++){
        cels = celsius(fahren);
        cout<<setw(5)<<fahren<<setw(16)<<cels<<endl;
    }
    
    //Exit Program!
    return 0;
}
float celsius(float fahren){
    return 5*(fahren-32)/9;
}
