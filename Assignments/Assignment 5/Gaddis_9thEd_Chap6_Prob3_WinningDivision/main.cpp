
/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on April 13, 2018, 11:27 AM
 * Purpose: CPP Template
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <iomanip>  //Formatting Library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C

//Function Prototypes
//Book said to use a double for the data type, but I went with a float
float gtSale(string);
void highest(float, float, float, float);//Highest value amongst branches

//Execution Begins Here!
int main(int argc, char** argv) {
    //Decimal Precision
    cout<<fixed<<setprecision(2)<<showpoint;
    
    //Declare Variables
    float nEast,sEast,nWest,sWest;//Branches of the company
    string division;
    //Initialize variables
    nEast=sEast=nWest=sWest=0;
    
    //Map/Process Inputs to Outputs
    cout<<"This program will determine the highest grossing division of the "
            "company."<<endl;
    cout<<"Please input the 1st division (Northeast, Northwest, Southeast, "
            "Southwest)."<<endl;
    cin>>division;
    nEast = gtSale(division);
    
    //Display Outputs
    
    
    //Exit Program!
    return 0;
}
float gtSale(string division){
    if(division=="Northwest"){
        
    }
    
}


void higest(float nEast, float sEast, float nWest, float sWest){
    //Outputting the revenues of each division
    cout<<"Northeast Revenue = $"<<nEast<<endl;
    cout<<"Southeast Revenue = $"<<sEast<<endl;
    cout<<"Northwest Revenue = $"<<nWest<<endl;
    cout<<"Southwest Revenue = $"<<sWest<<endl;
    
    //If Northeast division is the highest
    if(nEast>(sEast&&nWest&&sWest)){
        cout<<"Northeast had the highest sales, with a quarterly revenue "
                "of $"<<nEast<<endl;
    }
    
    //If Southeast division is the highest
    if(sEast>(nEast&&nWest&&sWest)){
        cout<<"Northeast had the highest sales, with a quarterly revenue "
                "of $"<<sEast<<endl;
    }
    
    //If Northwest division is the highest
    if(nWest>(sEast&&nEast&&sWest)){
        cout<<"Northeast had the highest sales, with a quarterly revenue "
                "of $"<<nWest<<endl;
    }
    
    //If Southwest division is the highest
    if(sWest>(sEast&&nWest&&nEast)){
        cout<<"Northeast had the highest sales, with a quarterly revenue "
                "of $"<<sWest<<endl;
    }
}
