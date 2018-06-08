/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on May 31, 2018, 11:00 AM
 * Purpose:  Yahtzee Game
 */

//System Libraries Here
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int GAME=1;//Number of games as columns

//123412341234123412341234123412341234123412341234123412341234123412341234123412
//Function Prototypes Here
//123412341234123412341234123412341234123412341234123412341234123412341234123412

//Starting the game
int pTotal(int [],int);
bool first(int [],int,string &,string &);

//Essentials for playing the game
int turn(int [],int,string);
void rolDice(int [],int);

//Parallel Tracking
bool diceTrk(bool [],int);
bool upTrak(bool [],int);
bool loTrack(bool [],int);

//Scoring
int upScre(int [][GAME],int);
int lwScre(int [][GAME],int);

//Sorting
void bubSort(int [],int);
void selSort(int [],int);

//123412341234123412341234123412341234123412341234123412341234123412341234123412
//End of Function Prototypes
//123412341234123412341234123412341234123412341234123412341234123412341234123412

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //12341234123412341234123412341234123412341234123412341234123412341234123412
    //Declare all Variables Here
    //12341234123412341234123412341234123412341234123412341234123412341234123412
    
    //Array sizing constants
    const int UPSCRE=6;//Number of rows in upper score sheet
    const int LWSCRE=8;//Number of rows in the lower score sheet
    const int DICE=5;  //Number of dice thrown
    
    //Player Names
    string name1,name2,//Input names of the players
           ply1,ply2;  //Determines who goes 
    
    
    //Boolean Variables for checking things
    bool prime=false; //Determines who goes first
    bool parUpp[UPSCRE][GAME]={};//Parallel Array for score sheet
    bool parLow[LWSCRE][GAME]={};//Parallel Array for score sheet
    bool paraRoll[DICE]={};           //Parallel Array for the dice
    
    //Scoring and other game-related stuff
    int upper[UPSCRE][GAME]={};//Scoring for the upper section
    int lower[LWSCRE][GAME]={};//Scoring for the lower section
    int roll[DICE]={};
    int p1Up,p2Up,p1Low,p2Low,  //Scores for upper and lower for both players
        p1Tot,p2Tot;            //Total score for that game
    
    //12341234123412341234123412341234123412341234123412341234123412341234123412
    //End of Variable Declaring
    //12341234123412341234123412341234123412341234123412341234123412341234123412
    
    //Initialize
    p1Up=p2Up=p1Low=p2Low=0;
    
    //Introduction
    cout<<"This program can play Yahtzee with 2 people."<<endl;
    cout<<"Please input player 1's name."<<endl;
    getline(cin,name1);
    cout<<"Please input player 2's name."<<endl;
    getline(cin,name2);
    
    
    //Roll to determine who goes first
    prime=first(roll,DICE,name1,name2);
    
    //Determines which player goes first
    if(prime==true){
        name1=ply1;
        name2=ply2;
        
    }else if(prime==false){
        name2=ply1;
        name1=ply2;
        
    }
    
    
    //Turns
    
    do{
        p1Tot=turn(roll,DICE,ply1);
        p2Tot=turn(roll,DICE,ply2);
        
    }while(game<5);

    //Exit
    return 0;
}

//First Player Function
bool first(int roll[],int dice,string &name1,string &name2){
    int p1Tot,p2Tot;//Roll totals for each player
    p1Tot=p2Tot=0;
    
    do{
        //Player 1 Roll and Total
        cout<<name1<<" now rolling..."<<endl;
        p1Tot=pTotal(roll,dice);
        
        cout<<"======================="<<endl;

        //Player 2 Roll and Total
        cout<<name2<<" now rolling..."<<endl;
        p2Tot=pTotal(roll,dice);
        
        cout<<"======================="<<endl;
    
    }while(p1Tot==p2Tot);
    
    if(p1Tot>p2Tot){
        return true;
    }else{
        return false;
    }
    
}

//Player Total Roll Function
int pTotal(int roll[],int dice){
    int tot=0;
    rolDice(roll,dice);
    for(int count=0;count<dice;count++){
        tot+=roll[count];
    }
    cout<<"Total = "<<tot<<endl;
    return tot;
}

//Dice Roll Function
void rolDice(int roll[],int dice){
    for(int count=0;count<dice;count++){
        roll[count]=rand()%6+1;
    }
    cout<<"Your roll is: ";
    for(int count=0;count<dice;count++){
        cout<<roll[count]<<" ";
    }
    cout<<endl;
}

//Turn Function For Playing The Game
int turn(int roll[],int dice,string current){
    int choice,score;
    cout<<current<<"'s turn"<<endl;
    cout<<"Rolling dice..."<<endl;
    rolDice(roll,dice);
    cout<<"Keep dice?"
            "1/2"<<endl;
    
    //Input Validation
    do{
    cin>>choice;
    }while(choice!=1&&choice!=2);
    
    if(choice==1){
        cout<<"Which upper category would you like to score?"<<endl;
        cin>>choice;
        
    }
    if(choice==2){
        cout<<"Which dice would you like to reroll?"<<endl;

    }
            
    
    cout<<"================"<<endl;
    
    return score;
    
}

//Dice tracking function
bool diceTrk(bool paraRoll[],int dice){
    
    
}

//Upper section parallel array tracking
bool upTrak(bool parUpp[][GAME],int dice){
    
}

//Lower Section parallel array tracking
bool loTrak(bool parLow[][GAME], int dice){
    
}
int upScre(int upper[][GAME],int rows){
    
}



