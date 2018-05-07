
/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on April 13, 2018, 11:27 AM
 * Purpose: CPP Template
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <iomanip>  //Formatting library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C

//Function Prototypes
float retail(float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Setting precision of decimal point
    cout<<showpoint<<setprecision(2)<<fixed;
    
    //Declare Variables
    float cost, markup;//Wholesale cost and markup percentage
    
    //Initial Variables
    cout<<"This program calculates the retail value of an item "
            "based on the original wholesale cost and the markup "
            "percentage."<<endl;
    cout<<"Please input the wholesale cost."<<endl;
    cin>>cost;
    
    //Input Validation for the cost
    if(cost<=0){
        cout<<"Invalid input, please reinput the cost."<<endl;
        cin>>cost;
    }
    cout<<"Please input the markup percentage."<<endl;
    cin>>markup;
    
    //Input validation for the percentage
    if(markup<0){
        cout<<"Invalid input, please reinput the markup percentage."<<endl;
        cin>>markup;
    }
    
    //Map/Process Inputs to Outputs
    cout<<"============================================="<<endl;
    cout<<"The retail value of the item is $"<<retail(cost,markup)<<endl;
    
    //Display Outputs
    
    
    //Exit Program!
    return 0;
}
float retail(float cost, float markup){
    return cost+(cost*(markup/100));
}
