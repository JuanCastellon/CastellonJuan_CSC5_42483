/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on March 22, 2018, 7;53 AM
 * Purpose: Menu with 9 problems from the gaddis book
 */

//System Libraries Here
#include <iostream>//I/O 
#include <iomanip>// Format
#include <cstdlib>//sRand
#include <ctime>//time
#include <cmath>//Power
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int DOLRSPN=100;//conversion from dollars to pennies
const int PENNY=1;
const int NICKEL=5;
const int DIME=10;
const int QUARTER=25;
const float GRAVITY=9.8f;
const float CNVPERC=1e2f;
//Function Prototypes Here
float calRetl(float, float);
float fallingDistance(float);
float kineticEnergy(float, float);
float convTab(float);
int coinToss(int);
float fval1(float, float, int);//Future value with power function
int numCoin(int, int);//Calculates number of coins
int rmndr(int, int);//Remainder after subtracting coins 
float frand();//Probability from 0 to 1
bool shoot(float);
void shoot(bool, float ,bool &,bool &);
unsigned char cnvDay(string);
unsigned char cnvMnth(string);
bool isLpYr(unsigned short);
char gtCntVl(unsigned int);
char gtYrVal(unsigned int);
char gtMnVal(unsigned char, unsigned int);
string dyOfWk(unsigned char, unsigned char, unsigned int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
    do{
    cout<<"Choose the project you want to view."<<endl;
    cout<<"type 1 for the first project"<<endl;
    cout<<"type 2 for the second project"<<endl;
    cout<<"type 3 for the third project"<<endl;       
    cout<<"type 4 for the forth project"<<endl;
    cout<<"type 5 for the fifth project"<<endl;
    cout<<"type 6 for the sixth project"<<endl;       
    cout<<"type 7 for the seventh project"<<endl;  
    cout<<"type 8 for the eighth project"<<endl;
    cout<<"type 9 for the ninth project"<<endl;       
 
    cin>>choice;
    //Input or initialize values Here
    
    if (choice>='1' && choice<='9'){
        switch(choice){
            case '1':{
            //Declare all Variables Here
            float whlsCst, mrkpPrc;
            //Input or initialize values Here
            cout<<"Input an Item's Wholesale Cost"<<endl;//In dollars
            cin>>whlsCst;
            cout<<"Input the Markup Percentage of the Item"<<endl;
            cin>>mrkpPrc;
            //Calculate the retail price

            //Output the retail price
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<"Wholesale cost    = $"<<whlsCst<<endl;
            cout<<"Markup Percentage =  "<<mrkpPrc<<"%"<<endl;
            cout<<"Retail Price      = $"<<calRetl(whlsCst, mrkpPrc)<<endl;
            //Exit      
                break;
            }
            case '2':{
            //Declare all Variables Here
            int time;
            //Input or initialize values Here
            time=1;
            //Output the time and a distance in meters
            cout<<fallingDistance(time)<<endl;
            //Exit     
                break;
            }
            case '3':{
            //Declare all Variables Here
            float mass, velocty;
            //Input or initialize values Here
            cout<<"Input a mass"<<endl;
            cin>>mass;
            cout<<"Input a velocity"<<endl;
            cin>>velocty;
            //Output the time and a distance in meters
            cout<<"The kinetic energy is of the object is "<<kineticEnergy(mass, velocty)<<" Joules"<<endl;
            //Exit                      
                break;
            }
            case '4':{
            //Declare all Variables Here
            float fahRen=0;
            //Input or initialize values Here

            //Output Table
            cout<<"Fahrenheit          Celsius"<<endl;
            for(int cnt=1;cnt<=20;cnt++){        
                cout<<fahRen<<"                  "<<convTab(fahRen)<<endl;
                fahRen++;
            }
            //Exit  

                break;
            }
            case '5':{
            //set the random number seed
            srand(static_cast<unsigned int>(time(0)));
            //Declare all Variables Here
            int coin, coins;
            //Input or initialize values Here
            cout<<"Input how many coins you want to flip"<<endl;
            cin>>coins;
            //Output the result
            for(int i=1;i<=coins;i++){
            cout<<coinToss(coin)<<endl;
            }
            //Exit  
                   
                break;
            }   
            case '6':{
            //Declare all Variables Here
            float presVal,//present value in $'s
                  intRate;//Interest rate in %
            int numCmp;//Number of compounding periods in years 

            //Input or initialize values Here
            cout<<"Input the amount you would like to deposit."<<endl;
            cin>>presVal;
            cout<<"Input the interest rate"<<endl;
            cin>>intRate;
            cout<<"Input the amount of years you will leave the deposit"<<endl;
            cin>>numCmp;
            //Process/Calculations Here

            //Output Located Here
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<"Deposit = "<<presVal<<endl;
            cout<<"\nInterest Rate = "<<intRate<<"%"<<endl;
            cout<<"\nNumber of years = "<<numCmp<<" years"<<endl;
            cout<<"Future Value                    = $"<<fval1(presVal, intRate/CNVPERC, numCmp)<<endl;
            //Exit 
   
                break;
            }
            case '7':{
            //Declare all Variables Here  
            float price, amtTndr;
            int pennies, n25, n10, n5, n1;
            //Input or initialize values Here
            price=9.14f;//Price is 9 dollars and 14 cents
            amtTndr=10.00f;//Amount paid
            //Output initial conditions
            pennies=(amtTndr-price+0.005f)*DOLRSPN;
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<"Item Price = $"<<price<<endl;
            cout<<"Amount Tendered = $"<<amtTndr<<endl;
            cout<<"Change returned "<<pennies<<endl;
            //Calculate minimum amount of change
            n25=numCoin(pennies, QUARTER);
            pennies=rmndr(pennies, QUARTER);
            n10=numCoin(pennies, DIME);
            pennies=rmndr(pennies, DIME);
            n5=numCoin(pennies, NICKEL);
            pennies=rmndr(pennies, NICKEL);
            n1=numCoin(pennies, PENNY);
            pennies=rmndr(pennies, PENNY);
            //Output Located Here
            cout<<"Number of Quarters = "<<n25<<endl;
            cout<<"Number of Dimes = "<<n10<<endl;
            cout<<"Number of Nickel = "<<n5<<endl;
            cout<<"Number of Pennies = "<<n1<<endl;
            //Exit   
    
                break;
            }
            case '8':{
            //Declare all Variables Here
            bool aLive, bLive, cLive;
            char remain;
            float aPk,bPk,cPk;
            //Input or initialize values Here
            aLive=bLive=cLive=true;
            aPk=1.0f/3.0f;
            bPk=1.0f/2.0f;
            cPk=1.0f;      
            //test the shoot function
            int count=0;
            for(int i=1;i<=1000;i++){
                if(shoot(cPk))count++;

            }
            cout<<"Count = "<<count<<endl;
            //Process/Calculations Here

            do{
                shoot(aLive,aPk,cLive,bLive);   
                shoot(bLive,bPk,cLive,aLive);
                shoot(cLive,cPk,bLive,aLive);
                remain=aLive+bLive+cLive;
            }while(remain>1);
            //Output Located Here
            cout<<"Aaron's PK = "<<aPk<<endl;
            cout<<"Bob's PK = "<<bPk<<endl;
            cout<<"Charlie's PK = "<<cPk<<endl;
            cout<<"Aaron is "<<(aLive?"Alive":"Deceased")<<endl;
            cout<<"Bob is "<<(bLive?"Alive":"Deceased")<<endl;
            cout<<"Charlie is "<<(cLive?"Alive":"Deceased")<<endl;

            //Exit                 
                break;
            }
            case '9':{
            //Declare all Variables Here
            string sMonth,sDay;
            unsigned short year;//2 byte integer value
            unsigned char day, month;//1 byte integer value
            //Input or initialize values Here
            cout<<"This program outputs the day of the week \ngiven the date"<<endl;
            cout<<"Input a date I.E. July 4, 2008"<<endl;
            cin>>sMonth>>sDay>>year;
            //Process/Calculations Here
            day=cnvDay(sDay);
            month=cnvMnth(sMonth);
            cout<<year<<" is Leap Year? ->"<<(isLpYr(year)?"True":"False")<<endl;
            cout<<"Century Value = "<<static_cast<int>(gtCntVl(year))<<endl;
            cout<<"Year Value = "<<static_cast<int>(gtYrVal(year))<<endl;
            cout<<"Month Value = "<<static_cast<int>(gtMnVal(month,year))<<endl;
            //Output Located Here
            cout<<"The date is "<<static_cast<int>(month)<<"/"<<static_cast<int>(day)<<"/"<<year<<endl;
            cout<<"The day of the week = "<<dyOfWk(month,day,year)<<endl;
            //Exit   
                break;
            }
        }
    }else{
        cout<<"Exiting menu"<<endl;
    }
    }while(choice==0);
    //Process/Calculations Here

    //Output Located Here
  
    //Exit
    return 0;
}
 
float calRetl(float whlsCst, float mrkpPrc){
    float rtlPrc;
    rtlPrc=whlsCst+(whlsCst*(mrkpPrc/CNVPERC));
    return rtlPrc;
}

float fallingDistance(float time){
    float distance;
    //Loop for times 1-10
    for(int cnt=1;cnt<=10;cnt++){        
        cout<<"When the time is     = "<<cnt<<" seconds"<<endl;//Time in seconds
        distance=0.5f*GRAVITY*(time*time);
        cout<<"The falling distance = "<<distance<<" meters"<<endl;
        time++;
    }

}

float kineticEnergy(float mass, float velocty){
    float kE;
    //Loop for times 1-10
    cout<<"The mass of the object is "<<mass<<" kilograms"<<endl;
    cout<<"The velocity of the object is "<<velocty<<" meters per second"<<endl;
    return kE=0.5f*mass*(velocty*velocty);   
}

float convTab(float fahRen){
    float celsius;
    return celsius=0.6f*(fahRen-32);
}

int coinToss(int coin){
    coin=rand()%2+1;
    if(coin==2){cout<<"Tails"<<endl;
    }else{
    cout<<"Heads"<<endl;
    }
    return coin;
}

float fval1(float pv, float ir, int n){//Future value with power function
    return pv*pow((1+ir),n);
}

int rmndr(int pennies, int denom){
    return pennies-numCoin(pennies,denom)*denom;//Number of coins of that denomination
}

int numCoin(int pennies, int denom){
    return pennies/denom;//Number of coins of that denomination
}

void shoot(bool aLive, float aPk,bool &cLive,bool &bLive){
if(aLive){
            if(cLive)cLive=shoot(aPk); 
            else if(bLive)bLive=shoot(aPk);
                 
        }
}

bool shoot(float pk){
    if(frand()>pk)return true;
    return false;

}
float frand(){
    static float MAXRAND=pow(2, 31)-1;
    return rand()/MAXRAND;
}

string dyOfWk(unsigned char month, unsigned char day, unsigned int year){
    int weekDay=(day+gtMnVal(month,year)+gtYrVal(year)+gtCntVl(year));
    weekDay%=7;
    switch(weekDay){
        case 0:return "Sunday";
        case 1:return "Monday";
        case 2:return "Tuesday";
        case 3:return "Wendsday";
        case 4:return "Thursday";
        case 5:return "Friday";
    }
    return "Saturday";
}

char gtMnVal(unsigned char month, unsigned int year){
    switch(month){
        case 1:{
            if(isLpYr(year)) return 6;
            return 0;
        }
        case 2: {
            if(isLpYr(year)) return 2;
            return 3;
        }
        case 3:case 11:{return 3;}
        case 4:case 7:{return 6;}
        case 5:{return 1;}
        case 6:{return 4;}
        case 8:{return 2;}
        case 9:case 12:{return 5;}
        case 10:{return 0;}
    }

}

char gtYrVal(unsigned int year){
    return year%100+(year%100)/4;
}

bool isLpYr(unsigned short year){
    return ((year%400==0)||((year%4==0)&&(!(year%100==0))));
}

unsigned char cnvMnth(string sMonth){
    if(sMonth=="January")return 1;
    if(sMonth=="February")return 2;     
    if(sMonth=="March")return 3;
    if(sMonth=="April")return 4;
    if(sMonth=="May")return 5;
    if(sMonth=="June")return 6;
    if(sMonth=="July")return 7;
    if(sMonth=="August")return 8;
    if(sMonth=="September")return 9;
    if(sMonth=="October")return 10;
    if(sMonth=="November")return 11;
    if(sMonth=="December")return 12;
}
char gtCntVl(unsigned int year){
    year/=100;
    return 2*(3-year%4);
}

unsigned char cnvDay(string sDay){
    char day=sDay[0]-48;
    if(sDay[1]==',')return day;
    day*=10;
    day+=sDay[1]-48;
    return day;

}
