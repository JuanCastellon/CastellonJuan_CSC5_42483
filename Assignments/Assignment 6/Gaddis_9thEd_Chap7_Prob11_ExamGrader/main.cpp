
/* 
 * File:   main.cpp
 * Author: Juan Castellon
 * Created on May 26, 2018, 12:00 PM
 * Purpose: Exam Grading Program
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
#include <fstream>  //Input/Output to files
#include <iomanip>  //Formatting Library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C

//Function Prototypes
void rdFile(ifstream &,char [],int &);
void wrtFile(ofstream &,char [],char [],int);
int  score(char [],char [],int);
void grade(char [], char [], int);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int NQSTNS=50;//Number of questions
    int nqstns;         //Number of questions from file
    char key[NQSTNS],answers[NQSTNS];//Answers and Key
    char keyFlNm[]="key.dat";
    string ansFlNm="answer.dat";
    char scrFlNm[]="score.dat";
    ifstream keyFl,ansFl;
    ofstream scrFl;
 
    //Initial Variables
    keyFl.open(keyFlNm);
    ansFl.open(ansFlNm.c_str());
    scrFl.open(scrFlNm);
 
    //Map/Process Inputs to Outputs
    rdFile(keyFl,key,nqstns);
    rdFile(ansFl,answers,nqstns);
    wrtFile(scrFl,key,answers,nqstns);
    grade(answers,key,nqstns);
    int scrs=score(answers,key,nqstns);
    
    //Output the results
    cout<<"The Score Received = "<<100.0f*scrs/nqstns<<"%"<<endl;
    if((scrs*100.0f/nqstns)<70){
        cout<<"You have failed the exam."<<endl;
    }else{
        cout<<"You have passed the exam."<<endl;
    }
    
    //Close files
    keyFl.close();
    ansFl.close();
    scrFl.close();
    
    //Exit program!
    return 0;
}

void rdFile(ifstream & in,char keyAns[],int &cnt){
    cnt=0;
    char kyAnsVl;
    while(in>>kyAnsVl){
        keyAns[cnt++]=kyAnsVl;
    }
}

void wrtFile(ofstream & out,char key[],char ans[],int size){
    for(int i=0;i<size;i++){
        if(key[i]==ans[i])out<<i<<". Correct"<<endl;
        else out<<i<<". Incorrect"<<endl;
    }
}
int  score(char ans[],char key[],int size){
    int correct=0;
    for(int i=0;i<size;i++){
        if(key[i]==ans[i])correct++;
    }
    return correct; 
}
void grade(char ans[],char key[], int size){
    int correct=0;
    for(int i=0;i<size;i++){
        if(key[i]==ans[i]){
            correct++;
        }else{
            cout<<"You missed #"<<i<<" || ";
            cout<<"Your Answer: "<<ans[i]<<endl;
            cout<<"Correct Answer: "<<key[i]<<endl;
        }
    }

    cout<<"You answered "<<size-correct<<" questions incorrectly."<<endl;
}
