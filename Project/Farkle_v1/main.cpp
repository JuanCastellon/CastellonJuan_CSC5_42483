
/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on April 13, 2018, 11:27 AM
 * Purpose: Farkle Game
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <ctime>    //Time library
#include <cstdlib>  //Random Number
#include <iomanip>  //Formatting
#include <cmath>    //Math libraries
#include <fstream>  //Input/Output to files

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C

//Function Prototypes

//Execution begins Here!
int main(int argc, char** argv) {
    //Set the random number seed 
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int scre1,scre2,                        //The scores for player 1 and 2
        ini1,ini2,                          //Initial roll to see who goes 1st
        t1,t2,t3,t4,t5,t6,                  //Each time the dice is thrown
        w1,los1,w2,los2,                    //Win and loss for player 1 and 2
        games,                              //Number of user inputted games
        fark1,fark2;                        //Farkle Counter for player 1 and 2
    float ones,twos,threes,fours,fives,sixes;//Counting the numbers players got
    int plyr1,plyr2=1;                      //Determines which player goes 1st
    bool choice;                            //Choice for the menu
    char loop;                              //Character for continuing to play
    string name1,name2;                     //Name of the 2 players
    
    
    //Game menu
    do{
        cout<<"This program can play the dice game Farkle."<<endl;
        cout<<"Press 1 to play or 0 to exit"<<endl;
        cin>>choice;
        
        //Input Validation
        if(choice!=1&&choice!=0){
            cout<<"Invalid input, please select either 1 or 0."<<endl;
        }
    }while(choice!=1&&choice!=0);
    if(choice==0){
        cout<<"Exiting program..."<<endl;
        return 0;
    }
    
    
    //Do while loop for determining which player goes first
    cout<<"Both players will now roll the dice"
            " to determine who will go first"<<endl;
    do{
        cout<<"Player 1, press 1 to roll the dice"<<endl;
        cin>>ini1;//Placeholder variable until roll
        ini1=rand()%6+1;
        cout<<"You rolled a "<<ini1<<endl;
        
        cout<<"Player 2, press 1 to roll the dice"<<endl;
        cin>>ini2;//Placeholder variable until roll
        ini2=rand()%6+1;
        cout<<"You rolled a "<<ini2<<endl;
        
        if(ini1==ini2){
            cout<<"========================================="<<endl;
            cout<<"You both got the same number, roll again."<<endl;
            cout<<"========================================="<<endl;
        }
    }while(ini1==ini2);
    
    if(ini1>ini2){
        plyr1++;
    }else{
        plyr2--;
    }
    
    if(plyr1>plyr2){
        cout<<"=============================="<<endl;
        cout<<"It is Player 1's turn!"<<endl;
        cout<<"Rolling dice..."<<endl;
        t1=rand()%6+1;
        t2=rand()%6+1;
        t3=rand()%6+1;
        t4=rand()%6+1;
        t5=rand()%6+1;
        t6=rand()%6+1;//The rolls
        cout<<"Player 1's rolls are "<<t1<<        
                " "<<t2<<
                " "<<t3<<
                " "<<t4<<
                " "<<t5<<
                " "<<t6<<endl;
        
        //Scoring Player 1's rolls
        
        //If you get 6 of a kind
        if(t1==1,t2==1,t3==1,t4==1,t5==1,t6==1){//If all are 1s
            scre1+=1000;
        }
        if(t1==2,t2==2,t3==2,t4==2,t5==2,t6==2){//If all are 2s
            scre1+=1200;
        }
        if(t1==3,t2==3,t3==3,t4==3,t5==3,t6==3){//If all are 3s
            scre1+=1400;
        }
        if(t1==4,t2==4,t3==4,t4==4,t5==4,t6==4){//If all are 4s
            scre1+=1600;
        }
        if(t1==5,t2==5,t3==5,t4==5,t5==5,t6==5){//If all are 5s
            scre1+=1800;
        }
        if(t1==6,t2==6,t3==6,t4==6,t5==6,t6==6){//If all are 6s
            scre1+=2000;
        }
        //If you get 5 of a kind
        
    }else{
        cout<<"=============================="<<endl;
        cout<<"It is Player 2's turn!"<<endl;
        cout<<"Rolling dice..."<<endl;
        t1=rand()%6+1;
        t2=rand()%6+1;
        t3=rand()%6+1;
        t4=rand()%6+1;
        t5=rand()%6+1;
        t6=rand()%6+1;//The rolls
        cout<<"Player 2's rolls are "<<t1<<        
                " "<<t2<<
                " "<<t3<<
                " "<<t4<<
                " "<<t5<<
                " "<<t6<<endl;
    }
    
    //Display Outputs
    
    
    //Exit Program!
    return 0;
}

