
/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on May 21, 2018, 12:00 PM
 * Purpose: Chips and Salsa Program
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C

//Function Prototypes
void input(int [], int);
void total(int [], int);//Displays total salsa sales
void highLow(string [], int, int [], int);//Displays highest/lowest selling sals
void sales(string [], int, int [], int);  //Displays sales of all salsas

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int NAMES=5,
            JARS=5;
    
    //Salsa Name Array, Sized to 5
    string salsa[NAMES]={"Mild","Medium","Sweet","Hot","Zesty"};
    //Number of Jars Sold Array, Size to 5
    int sold[JARS];
    
    
    //Initial Variables
    cout<<"This program keeps track of the number of jars sold for 5 types of"
            " salsa."<<endl;
    cout<<"Please input the number of jars sold for: "
            "Mild, Medium, Sweet, Hot, and Zesty."<<endl;
    
    input(sold, JARS);
    
    //Map/Process Inputs to Outputs/Display Outputs
    sales(salsa, NAMES, sold, JARS);
    total(sold, JARS);
    highLow(salsa, NAMES, sold, JARS);
    
    
    //Exit Program!
    return 0;
}
void input(int sold[], int jars){
    for(int count=0;count<jars;count++){
        do{
            cin>>sold[count];
            
        }while(sold[count]<0);//Input Validation Loop
    }
}
void total(int sold[], int jars){
    int total=0;
    for(int count=0;count<jars;count++){
        total+=sold[count];
    }
    cout<<"Total sales = "<<total<<" jars"<<endl;
}
void sales(string salsa[], int names, int sold[], int jars){
    for(int count=0;count<names;count++){
        cout<<salsa[count]<<" jars sold = "<<sold[count]<<endl;
    }
}
void highLow(string salsa[], int names, int sold[], int jars){
    string nameLo,nameHi;//Name placeholder
    int lo,hi;           //Highest/Lowest variable for salsa
    lo=hi=sold[0];
    nameLo=nameHi=salsa[0];
    
    //Loop for determining highest selling
    for(int count=0;count<names;count++){
        if(sold[count]>hi){
            hi=sold[count];
            nameHi=salsa[count];
        }
    }
    
    //Loop for determining lowest selling
    for(int count=0;count<names;count++){
        if(sold[count]<lo){
            lo=sold[count];
            nameLo=salsa[count];
        }
    }
    
    cout<<"Highest selling salsa is "<<nameHi<<" with "<<hi<<" number of jars "
            "sold."<<endl;
    cout<<"Lowest selling salsa is "<<nameLo<<" with "<<lo<<" number of jars "
            "sold."<<endl;
}