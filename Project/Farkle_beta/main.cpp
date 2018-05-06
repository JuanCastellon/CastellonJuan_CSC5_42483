
/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on April 13, 2018, 11:27 AM
 * Purpose: CPP Template
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <ctime>    //Time library
#include <cstdlib>  //Random Number
#include <iomanip>  //Formatting
#include <cmath>    //Math libraries

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int scre1,scre2,                        //The scores for player 1 and 2
        roll1,roll2,roll3,roll4,roll5,roll6,//Each time the dice is thrown
        win1,loss1,win2,loss2,              //Win and loss for player 1 and 2
        games,                              //Number of user inputted games
        fark1,fark2;                        //Farkle Counter for player 1 and 2
            
    
    //Initial Variables
    scre1,scre2,roll1,roll2,roll3,roll4,roll5,roll6=0;//Set these values to 0
    win1,win2,loss1,loss2=0;                          //Set wins/losses to 0
    
    //Map/Process Inputs to Outputs
    cout<<"This program can play the dice game Farkle."<<endl;
    cout<<"Please input the number of games of Farkle you"
            " would like to play"<<endl;
    cin>>games;
    
    //Input Validation
    while(games<0){
        cout<<"The number of games must be greater than 0."<<endl;
        cout<<"Please input the number of games again"<<endl;
        cin>>games;
    }
    
    //Game loop
    for (int game=0;games>=game;game++){
        for(int cntr=-1,turn=0;scre1<10000;turn++,cntr*=-1){
            if(cntr==-1){        //Counter will 
                roll1=rand()%6+1;
                roll2=rand()%6+1;
                roll3=rand()%6+1;
                roll4=rand()%6+1;
                roll5=rand()%6+1;
                roll6=rand()%6+1;//The rolls
                cout<<"Player 1's rolls are "<<roll1<<
                        " "<<roll2<<
                        " "<<roll3<<
                        " "<<roll4<<
                        " "<<roll5<<
                        " "<<roll6<<endl;
                scre1+=10;
            }
        }
    }
    
    //Display Outputs
    
    
    //Exit Program!
    return 0;
}

