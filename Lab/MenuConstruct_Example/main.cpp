/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on March 15, 2018, 10:42 AM
 * Purpose:  Menu with construct example
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
    
    //Display menu
    cout<<"Choose from the following menus"<<endl;
    cout<<"Type 1 for Independent-if example"<<endl;
    cout<<"Type 2 for the dependent-if example"<<endl;
    cout<<"Type 3 for the ternary operator example"<<endl;
    cout<<"Type 4 for the switch case"<<endl;
    cin>>choice;
    
    
    //Process/Calculations Here
    if(choice>='1' && choice<='4'){
        switch(choice){
            case '1':{
                cout<<"Independent if example"<<endl;
                //Declare Variables
                float hrsWrkd,payRate,payChk;
                //Initialize Variables
                cout<<"This program calculates your paycheck"<<endl;
                cout<<"Input the hours you worked for the week"
                        "and your pay rate in $s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your paycheck
                payChk=hrsWrkd*payRate;
                //If you worked over time >40 hours
                if (hrsWrkd>40)payChk+=((hrsWrkd-40)*payRate);
                //Output all conditions
                cout<<"Hours worked : "<<hrsWrkd<<endl;
                cout<<"Pay rate per hour : "<<payRate<<endl;
                cout<<"Paycheck : $"<<payChk<<endl;
                break;
            }
            case '2':{
                cout<<"Dependent-if example"<<endl;
                //Declare Variables
                float hrsWrkd,payRate,payChk;
                //Initialize Variables
                cout<<"This program calculates your paycheck"<<endl;
                cout<<"Input the hours you worked for the week"
                        "and your pay rate in $s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                break;
            }
            case '3':{
                cout<<"Ternary operator example"<<endl;
                //Declare Variables
                float hrsWrkd,payRate,payChk;
                //Initialize Variables
                cout<<"This program calculates your paycheck"<<endl;
                cout<<"Input the hours you worked for the week"
                        "and your pay rate in $s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your paycheck
                payChk=(hrsWrkd>=0&&hrsWrkd<=40)?
                    hrsWrkd*payRate:
                    hrsWrkd*payRate+(hrsWrkd-40)*payRate;
                //If you worked over time >40 hours
                if (hrsWrkd>40)payChk+=((hrsWrkd-40)*payRate);
                //Output all conditions
                cout<<"Hours worked : "<<hrsWrkd<<endl;
                cout<<"Pay rate per hour : "<<payRate<<endl;
                cout<<"Paycheck : $"<<payChk<<endl;
                break;
            }
            case '4':{
                cout<<"Switch case"<<endl;
                //Declare Variables
                float hrsWrkd,payRate,payChk;
                //Initialize Variables
                cout<<"This program calculates your paycheck"<<endl;
                cout<<"Input the hours you worked for the week"
                        "and your pay rate in $s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your paycheck
                switch(hrsWrkd>=0&&hrsWrkd<=40){
                    case true:{
                    hrsWrkd*payRate;
                    break;
                    }
                    default:{
                    hrsWrkd*payRate+(hrsWrkd-40)*payRate;
                    }
                }
                //If you worked over time >40 hours
                if (hrsWrkd>40)payChk+=((hrsWrkd-40)*payRate);
                //Output all conditions
                cout<<"Hours worked : "<<hrsWrkd<<endl;
                cout<<"Pay rate per hour : "<<payRate<<endl;
                cout<<"Paycheck : $"<<payChk<<endl;
                break;
            }
        }
    }
    else{
        cout<<"Exiting menu..."<<endl;
    }
    
    //Output Located Here
    
    
    //Exit
    return 0;
}

