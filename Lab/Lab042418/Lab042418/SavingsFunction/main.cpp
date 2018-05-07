/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on April 24th, 2018, 11:27 AM
 * Purpose:  Initial Savings Function
 */

//System Libraries Here
#include <iostream>//I/O library
#include <cmath>   //Math library
#include <iomanip> //Formatting Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

const float CNVPERC=1e2;//100

//Function Prototypes Here
float fval1(float,float,int);//Future Value Function
float fval2(float,float,int);//Future Value Function
float fval3(float,float,int);//Future Value Function
float fval4(float,float,int);//Future Value Function


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float presVal,//Present Value in Dollars
          intRate;//Interest rate %
    int   numCmp; //Number of compounding periods in years
    
    //Input or initialize values Here
    cout<<"This program can calculate the future value of your "
            "saving account based on the monthly interest rate, "
            "the present value of the account, and how many months "
            "you wish to calculate for."<<endl;
    cout<<"Please input the monthly interest rate."<<endl;
    cin>>intRate;
    cout<<"Please input the present value of the account."<<endl;
    cin>>presVal;
    cout<<
    
    //By the rule of 72
    numCmp=72/intRate;
    
    //Output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present value = $"<<presVal<<endl;
    cout<<"Interest rate = "<<intRate<<endl;
    cout<<"Number of compounding periods = "<<numCmp<<" years"<<endl;
    cout<<"Savings FV -> Power     = $"<<
            fval1(presVal,intRate/CNVPERC,numCmp)<<endl;
    cout<<"Savings FV -> Log/Exp   = $"<<
            fval2(presVal,intRate/CNVPERC,numCmp)<<endl;
    cout<<"Savings FV -> For-loop  = $"<<
            fval3(presVal,intRate/CNVPERC,numCmp)<<endl;
    cout<<"Savings FV -> Recursion = $"<<
            fval4(presVal,intRate/CNVPERC,numCmp)<<endl;
    
    //Exit
    return 0;
}
//000000000011111111112222222222333333333344444444445555555555666666666777777777
//123456789012345678901234567890123456789012345678901234567890123456789012345678
//                          Future Value Functions
//Inputs:
//  pv -> present value in $s
//  ir -> interest rate in decimal value
//  n  -> number of compounding periods (years)
//Outputs:
//  fv -> future value in $s
//000000000011111111112222222222333333333344444444445555555555666666666777777777
//123456789012345678901234567890123456789012345678901234567890123456789012345678
float fval1(float pv,float ir,int n){
    return pv*pow((1+ir),n);
}
float fval2(float pv,float ir,int n){
    return pv*exp(n*log(1+ir));
}
float fval3(float pv,float ir,int n){
    for(int i=1;i<=n;i++){
        pv*=(1+ir);
        
    }
    return pv;
}
float fval4(float pv,float ir,int n){
    if(n<=0)return pv;{
    return fval4(pv,ir,n-1)*(1+ir);
    }
}

