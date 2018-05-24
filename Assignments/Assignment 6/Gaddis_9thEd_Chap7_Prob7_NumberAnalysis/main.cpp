
/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on May 20, 2018, 12:00 PM
 * Purpose:
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <fstream>  //Input/Output to files
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C

//Function Prototypes
void fill(int [], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Setting the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=10;
    string name;//Name of the file
    int array[SIZE]="list.dat";
    
    //Initial Variables
    cout<<"This program creates a file you name and fills it with random "
            "numbers and then displays the highest/lowest values, the total "
            "of all values, and the average."<<endl;
    cout<<"Please input a name for the file."<<endl;
    cin>>name;
    
    ifstream list;
    list.open();
    
    
    
    //Map/Process Inputs to Outputs
    
    
    //Display Outputs
    
    
    //Exit Program!
    return 0;
}

