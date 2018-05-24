
/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on May 20, 2018, 1:00 PM
 * Purpose: Rainfall program
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C

//Function Prototypes
void input(float [],int); //Array input function
void total(float [],int); //Total rainfall in year function
void avg(float [],int);   //Average rainfall function
void maxMin(float [],int);//Max/Min rainfall of the year function

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int MONTHS=12; //12 months in a year
    float rain[MONTHS];//Array of size 12 for rainfall
    
    //Input rainfall values
    cout<<"This program calculates the average and total rainfall in a year"
            " and determines the months with the"
            " highest and lowest rainfall."<<endl;
    cout<<"Please input the rainfall (in inches) for all 12 months."<<endl;
    input(rain,MONTHS);
    
    //Total rainfall
    total(rain,MONTHS);
    
    //Average rainfall
    avg(rain,MONTHS);
    
    //Min/Max months
    maxMin(rain,MONTHS);
    
    //Exit Program!
    return 0;
}
void input(float rain[],int months){
    for(int count=0;count<months;count++){
        do{
            cin>>rain[count];
        }while(rain[count]<0);
    }
}
void total(float rain[],int months){
    float total=0;
    
    //Summing rainfall of every months
    for(int count=0;count<months;count++){
        total+=rain[count];
    }
    cout<<"Total rain in the year = "<<total<<" inches"<<endl;
}
void avg(float rain[],int months){
    float avg=0;
    
    //Summing rainfall of every months
    for(int count=0;count<months;count++){
        avg+=rain[count];//Adding each month's rainfall
        
    }
    avg/=months;
    cout<<"Average rainfall per month = "<<avg<<" inches"<<endl;
}
void maxMin(float rain[],int months){
    float highest,lowest;
    highest=lowest=rain[0];
    for(int count=1;count<months;count++){
        if(rain[count]>highest){
            highest=rain[count];
        }
    }
    for(int count=1;count<months;count++){
        if(rain[count]<lowest){
            lowest=rain[count];
        }
    }
    
    cout<<"Highest month = "<<highest<<" inches"<<endl;
    cout<<"Lowest month = "<<lowest<<" inches"<<endl;
}
