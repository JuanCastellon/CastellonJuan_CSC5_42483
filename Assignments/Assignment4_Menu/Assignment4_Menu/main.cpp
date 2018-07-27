
/*
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on April 3, 2018, 11:00 PM
 * Purpose: Menu for all Assignment 4 projects 
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants


//Math, Physics, Science, Conversions, 2-D Array C

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;      //Choice within the menu
    bool loop; //Whether or not deciding to repeat the menu
            
    do{
    //Initial Variables
    cout<<"This is a menu for accessing all Assignment 3 projects."<<endl;
    cout<<"Press 1 for Chapter 5 Problem 1"<<endl;
    cout<<"Press 2 for Chapter 5 Problem 3"<<endl;
    cout<<"Press 3 for Chapter 5 Problem 4"<<endl;
    cout<<"Press 4 for Chapter 5 Problem 5"<<endl;
    cout<<"Press 5 for Chapter 5 Problem 6"<<endl;
    cout<<"Press 6 for Chapter 5 Problem 7"<<endl;
    cout<<"Press 7 for Chapter 5 Problem 10"<<endl;
    cout<<"Press 8 for Chapter 5 Problem 12"<<endl;
    cout<<"Press 9 for Chapter 4 Problem 7"<<endl;
    cout<<"Press any other number to exit." <<endl;
    cout<<"Selections 1-8 are from Gaddis 9th Edition."<<endl;
    cout<<"Selection 9 is from Savitch 8th Edition."<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    cin>>choice;
    
    switch (choice)
    {
        case 1:{
    //Declare all Variables Here
    int x,//User inputted positive integer
        sum;
    
    //Input or initialize values Here
    cout<<"Please input a positive integer"<<endl;
    cin>>x;
    while(x<=0){
        cout<<"Invalid user input, please input a positive integer."<<endl;
        cin>>x;
    }
    //Process/Calculations Here
    for(sum=0;sum<=x;sum++){
        cout<<"Sum = "<<sum<<endl;
    }

    break;

        }
            
        case 2:{
    //Declare Variables
    float rate=3.6f,//Number of calories burned per minute
            minutes,
            total;  //Total number of calories burned  
    
    //Map/Process Inputs to Outputs
    total=0;
    for(minutes=0;minutes<=30;minutes+=5){
        total=minutes*rate;
        cout<<"You have burned "<<total<<" calories in "<<minutes<<" minutes"
                <<endl;

    }
    
    break;

        }
            
        case 3:{
    //Declare Variables
    float rate=0.04f, //The 4% per year increase
            fee=2500,//The yearly fee
            inc,      //The increase after the 4% is applied
            total,    //Total with the 4% increase
            years;    //Number of years gone by
           
    //Display Outputs
    inc=total=0;
    
    cout<<"The base membership fee for year 1 is $2500."<<endl; 
    cout<<"-------------------------------------------------------------"<<endl;
    
    cout<<fixed<<setprecision(2)<<showpoint;
    
    for(years=1;years<=6;years++){
        inc=(fee*rate);
        fee=inc+fee;
        cout<<years<<" years have passed."<<endl;
        cout<<"The membership now has increased by "<<inc<<" and now costs "
                <<fee<<endl;
        cout<<"-------------------------------------------------------------"
                <<endl;
        
    }
    
    break;

        }
            
        case 4:{
    //Declare Variables
    float distanc,//Distance traveled
            hours,//Hours inputted by user
            mph;  //miles per hour traveled by the car

    //Initial Variables
    cout<<"This programs calculates the distance traveled by your car"
            " every hour."<<endl;
    cout<<"Please input how many hours you traveled."<<endl;
    cin>>hours;
    cout<<"Please input how fast your car went in miles per hour."<<endl;
    cin>>mph;
    
    //Map/Process Inputs to Outputs
    cout<<"Hour         Distance Traveled "<<endl;
    for(int i=1;i<=hours;i++){
        distanc=i*mph;
        cout<<i<<setw(21)<<distanc<<endl;
        
    }
    
    break;

        }
            
        case 5:{
    //Declare all Variables Here
    unsigned int totPay, pyPrDay;//Pennies of pay
    char numDays=31;
    
    //Input or initialize values Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Day       Pay          Total"<<endl;
    totPay=0; //Total amount
    pyPrDay=1;//1 penny on the first day
    
    for(int day=1;day<=numDays;day++){
        cout<<setw(2)<<day
            <<setw(12)<<pyPrDay/100.0f
            <<setw(14)<<totPay/100.0f<<endl;
        pyPrDay*=2;
        totPay+=pyPrDay;
    }
    
    break;

        }
            
        case 6:{
    //Declare Variables
    int years,
            months=12,
            totMon=0,//Sum of the amount of months that have passed
            monRai=0,//Amount of rain that month
            totRai=0,//Total rain
            avgRai=0;//Average rain per month
            

    //Map/Process Inputs to Outputs
    cout<<"This program calculates the average rainfall over a given number "
          "of years."<<endl;
    cout<<"Please input how many years you will be inputting data for."<<endl;
    do{
        cin>>years;
        if (years<1){
            cout<<"Invalid input, please enter 1 or more years."<<endl;
        }
    }while(years<1);
        
    for(int i=1;i<=years;i++){
        cout<<"Year : "<<i<<endl;
        cout<<"-----------------"<<endl;
        for(int j=1;j<=months;j++){
            cout<<"Month : "<<j<<endl;
            cout<<"-----------------"<<endl;
            cout<<"How many inches of rain fell this month?"<<endl;
            do{
                cin>>monRai;
            }while(monRai<0);
            totRai+=monRai;
        }
    }
    totMon=years*months;
    avgRai=totRai/totMon;
    //Display Outputs
    cout<<"Total amount of months elapsed          : "<<totMon<<endl;
    cout<<"Total inches of rainfall                : "<<totRai<<endl;
    cout<<"Average rainfall in inches over "<<years<<" years : "<<avgRai<<endl;
            
        break;
    }

        
        case 7:{
    //Declare Variables
    float f,  //Degrees Fahrenheit
          c;  //Degrees Celsius

    //Conversion
    cout<<"This program calculates Celsius to degrees Fahrenheit from "
            "0-20 degrees Celsius."<<endl;
    cout<<"Fahrenheit           Celsius"<<endl;

    for(c=20;c>=0;c--){
        f=9*c/5+32;
        cout<<setw(5)<<f<<setw(20)<<c<<endl;
    }
            
        break;
        }
            
        case 8:{
    //Declare Variables
    float f,  //Degrees Fahrenheit
        c;//Degrees Celsius

    //Conversion
    cout<<"This program calculates Celsius to degrees Fahrenheit from "
            "0-20 degrees Celsius."<<endl;
    cout<<"Fahrenheit           Celsius"<<endl;

    for(c=20;c>=0;c--){
        f=9*c/5+32;
        cout<<setw(5)<<f<<setw(20)<<c<<endl;
    }
     
        break;
        }        
        
        case 9:{
    //Constants
    const float GRAVITY=6.673e-8;//cm^3/g/sec^2
    const float CMMTRS=0.01f;    //centimeters to meters
    const float SLGGRMS=14593.0f;//Slugs to grams
    const float MTRSFT=3.281f;    //Meters to feet
    const float LBSLUG=32.174f;  //Number of pounds per slug
    
    //Declare all Variables Here
    float myMass, msEarth, rEarth,myWt,myWtCnv;
    
    //Input or initialize values Here
    myMass=6;             //6 slugs
    myWtCnv=myMass*LBSLUG;//Your weight*conversion
    msEarth=5.972e27f;    //Grams
    rEarth=6.371e6f;      //Meters
    
    //Process/Calculations Here
    myWt=(GRAVITY*CMMTRS*CMMTRS*CMMTRS*
          myMass*msEarth*MTRSFT)/(rEarth*rEarth);
    
    //Output Located Here
    cout<<fixed<<setprecision(0);
    cout<<myMass<<" slugs = "<<myWt<<" lbs"<<endl;
    cout<<myMass<<" slugs = "<<myWtCnv<< " lbs"<<endl;
            
            break;
            
        }       
        default:{ 
            cout<<"Invalid input, press 1 to repeat the menu, 0 to quit."<<endl;
            cin>>loop;
        }
    }cout<<"Do you want to repeat the menu? Press 1 to repeat "
            "and 0 to quit."<<endl;
     cin>>loop;
    
    }while(loop==true);
    //Exit Program!
    return 0;
}

