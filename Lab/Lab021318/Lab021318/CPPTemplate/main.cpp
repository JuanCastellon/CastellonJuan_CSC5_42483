/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on May 20, 2018, 12:00 PM
 * Purpose:
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <ctime>    //Time library
#include <cstdlib>  //Random Number
#include <fstream>  //Input/Output to files
#include <string>   //String library

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C
const int GAMES=6;//Number of columns, or how many games played

//Function Prototypes
void fillAry(int [],int);//Will randomly fill the roll array
void initial(int [][GAMES],int);



//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed 
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=5;//Constant for representing dice being thrown
    const int 
    int roll[SIZE];  //Array sized to 5, representing 5 dice
    int play1[SIZE][GAMES]={};
    int play2[SIZE][GAMES]={};
    
    //Initial Variables/Arrays
    fillAry(roll,SIZE);
    
    
    //Map/Process Inputs to Outputs
    
    
    //Display Outputs
    
    
    //Exit Program!
    return 0;
}
void fillAry(int roll[], int size){
    //Fill Array
    for(int count=0;count<size;count++){
        roll[count]=rand()%6+1;//Random Number [1-6]
    }
    
}
