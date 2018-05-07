/* 
 * File:   main.cpp
 * Author: Michelangelo Lopez
 * Created on April 26th, 2018, 12:09 AM
 * Purpose: Creating a shooter game
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

//Function Prototypes Here
float frand();//Probability from 0 to 1
bool shoot(float);
void shoot(bool, float ,bool &,bool &);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    bool aLive, bLive, cLive;
    char remain;
    float aPk,bPk,cPk;
    //Input or initialize values Here
    aLive=bLive=cLive=true;
    aPk=1.0f/3.0f;
    bPk=1.0f/2.0f;
    cPk=1.0f;      
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
    return 0;
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

