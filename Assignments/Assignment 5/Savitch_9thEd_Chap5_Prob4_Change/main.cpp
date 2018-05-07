    /* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on April 24th, 2018, 12:20 PM
 * Purpose:  Calculates change
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int DOL2PEN=100;//Conversion to dollars from pennies
const int PENNY=1;
const int NICKEL=5;
const int DIME=10;
const int QUARTER=25;

//Function Prototypes Here
int numCoins(int,int);//Calculate the number of coins
int rmnder(int,int);  //Remainder after subtracting coins

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float price, amtTndr;
    int pennies,n25,n10,n5,n1;
        
    //Input or initialize values Here
    price=9.14f;   //Price is $9.14
    amtTndr=20.00f;//Amount paid
    
    //Output initial conditions
    pennies=(amtTndr-price+.005)*DOL2PEN;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Item price = $"<<price<<endl;
    cout<<"Amount tendered = $"<<amtTndr<<endl;
    cout<<"Change returned "<<pennies<<" cents"<<endl;

    
    //Calculate minimum amount of change
    n25=numCoins(pennies,QUARTER);
    pennies=rmnder(pennies,QUARTER);
    n10=numCoins(pennies,DIME);
    pennies=rmnder(pennies,DIME);
    n5=numCoins(pennies,NICKEL);
    pennies=rmnder(pennies,NICKEL);
    n1=numCoins(pennies,n1);
    pennies=rmnder(pennies,PENNY);
    
    
    //Output data

    cout<<"Number of quarters = "<<n25<<endl;
    cout<<"Number of dimes = "<<n10<<endl;
    cout<<"Number of nickels = "<<n5<<endl;
    cout<<"Number of pennies = "<<n1<<endl;
    
    
    //Exit
    return 0;
}

int rmnder(int pennies, int denom){
    return pennies-numCoins(pennies,denom)*denom;
}

int numCoins(int pennies, int denom){
    return pennies/denom;
}
