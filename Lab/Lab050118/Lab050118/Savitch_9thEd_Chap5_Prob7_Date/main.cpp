/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
unsigned char cnvDay(string);
unsigned char cnvMnth(string);
bool isLpYr(unsigned short);
char gtCntVl(unsigned int);
char gtYrVl(unsigned int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string sMonth,sDay;
    unsigned short year;//2 byte integer value
    unsigned char day,month;//1 byte integer value
    
    //Input or initialize values Here
    cout<<"This program outputs the day of the week "
            "given the date."<<endl;
    cout<<"Input the date i.e. July 4, 2008"<<endl;
    cin>>sMonth>>sDay>>year;
    
    //Process/Calculations Here
    day=cnvDay(sDay);
    month=cnvMnth(sMonth);
    int cntLpYr;
    cout<<static_cast<int>(gtYrVl(year))<<endl;
    
    //Output Located Here
    cout<<"The date is "<<static_cast<int>(month)<<"/"
            <<static_cast<int>(day)<<"/"<<year<<endl;

    //Exit
    return 0;
}
unsigned char cnvDay(string sDay){
    char day=sDay[0]-48;
    if(sDay[1]==',')return day;
    day*=10;
    day+=sDay[1]-48;
    return day;
}
unsigned char cnvMnth(string sMonth){
    if(sMonth=="January")  return 1;
    if(sMonth=="February") return 2;
    if(sMonth=="March")    return 3;
    if(sMonth=="April")    return 4;
    if(sMonth=="May")      return 5;
    if(sMonth=="June")     return 6;
    if(sMonth=="July")     return 7;
    if(sMonth=="August")   return 8;
    if(sMonth=="September")return 9;
    if(sMonth=="October")  return 10;
    if(sMonth=="November") return 11;
    if(sMonth=="December") return 12;
    
    
    
}
bool isLpYr(unsigned short year){
    return ((year%400==0)||(year%4==0)&&(!(year%100==0)));
}
char gtCntVl(unsigned int year){
    year/=100;
    return 2*(3-year%4);
}
char gtYrVl(unsigned int year){
    return year%100+(year%100)/4;
}
