/* 
 * File:   main.cpp
 * Author: Juan
 * Created on May 27th, 2018, 11:30 PM
 * Purpose: Assignment 6 Menu
 */

//System Libraries Here
#include <iostream>//I/O 
#include <iomanip>// Format
#include <cstdlib>// Random Library
#include <ctime>//   Time Library
#include <cmath>//   Power
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void sort(int [], int);
void input1(int [], int);
void input2(float [],int);//Array input function
void total(float [],int);//Total rainfall in year function
void avg(float [],int);//Average rainfall function
void maxMin(float [],int);//Max/Min rainfall of the year function
void input3(int [], int);//Input to array
void total(int [], int);//Displays total salsa sales
void highLow(string [], int, int [], int);//Displays highest/lowest selling sals
void sales(string [], int, int [], int);  //Displays sales of all salsas
void fill(int [], int);//Fills array with random numbers
void print(int [], int);//Prints the array
void larger(int [], int, int);//Larger than N function
void rdFile(ifstream &,char [],int &);//Reads in File
void wrtFile(ofstream &,char [],char [],int);//Writes to file
int  score(char [],char [],int);//Writes scores to file
void grade(char [], char [], int);//Grades exams
void rdFile2(ifstream &,char [],int &);//Reads in File
void wrtFile2(ofstream &,char [],char [],int);//Writes to File
int  score2(char [],char [],int);//Writes scores to file
void grade2(char [], char [], int);//Grades exams
void valid(int [], int, int);//Finds if account number is valid
void fill1(int [], int);//Fills array
void disBub1(int [], int);//Display bubble sort
void disSel1(int [], int);//Display selection sort
void bubSort1(int [], int);//Bubble sort
void selSort1(int [], int);//Selection sort
void fill2(int [], int);//Fills array
void exBub(int [], int);//Tracks exchanges in bubble sort
void exSel(int [], int);//Tracks exchanges in selection sort
void bubSort2(int [], int);//Bubble sort
void selSort2(int [], int);//Selection sort

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int choice;
    do{
    cout<<"This is a menu for accessing all Assignment 3 projects."<<endl;
    cout<<"Press 1 for Gaddis Chapter 7 Problem 1"<<endl;
    cout<<"Press 2 for Gaddis Chapter 7 Problem 2"<<endl;
    cout<<"Press 3 for Gaddis Chapter 7 Problem 3"<<endl;
    cout<<"Press 4 for Gaddis Chapter 7 Problem 4"<<endl;
    cout<<"Press 5 for Gaddis Chapter 7 Problem 10"<<endl;
    cout<<"Press 6 for Gaddis Chapter 7 Problem 11"<<endl;
    cout<<"Press 7 for Gaddis Chapter 8 Problem 1"<<endl;
    cout<<"Press 8 for Gaddis Chapter 8 Problem 2"<<endl;
    cout<<"Press 9 for Gaddis Chapter 8 Problem 10"<<endl;
    cout<<"Press 10 for Gaddis Chapter 8 Problem 11"<<endl;
    cout<<"---------------------------------------------------------"<<endl;
 
    cin>>choice;
    //Input or initialize values Here
    
    if (choice>=1 && choice<=10){
        switch(choice){
            case 1:{
                //Declare Variables
                const int SIZE=10;//constant for sizing the array
                int array[SIZE];  //An array of size 10

                //Map/Process Inputs to Outputs
                cout<<"This program will detect the smallest and largest values "
                        "in an array with 10 elements."<<endl;
                cout<<"Please input 10 values."<<endl;

                //Inputting values
                input1(array,SIZE);

                //Choosing values
                sort(array,SIZE);

                //Display Outputs
                cout<<"Largest value  = "<<array[0]<<endl;//Sort function place large @ 1st
                cout<<"Smallest value = "<<array[9]<<endl;//Sort function place small @ 10th

                //Exit Program!
                break;
            }
            case 2:{
                //Declare Variables
                const int MONTHS=12; //12 months in a year
                float rain[MONTHS];//Array of size 12 for rainfall

                //Input rainfall values
                cout<<"This program calculates the average and total rainfall in a year"
                        " and determines the months with the"
                        " highest and lowest rainfall."<<endl;
                cout<<"Please input the rainfall (in inches) for all 12 months."<<endl;
                input2(rain,MONTHS);

                //Total rainfall
                total(rain,MONTHS);

                //Average rainfall
                avg(rain,MONTHS);

                //Min/Max months
                maxMin(rain,MONTHS);

                //Exit Program!
                break;
            }
            case 3:{
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

                input3(sold, JARS);

                //Map/Process Inputs to Outputs/Display Outputs
                sales(salsa, NAMES, sold, JARS);
                total(sold, JARS);
                highLow(salsa, NAMES, sold, JARS);


                //Exit Program!
                break;
            }
            case 4:{
                //Setting the random number seed
                srand(static_cast<unsigned int>(time(0)));

                //Declare Variables
                const int SIZE=10;
                int array[SIZE];//Array of size 10
                int n;//User selected number

                //Initial Variables
                cout<<"This program will determine if a number you choose is less than "
                        "the value in an array of size 10."<<endl;
                cout<<"The array is randomly filled with numbers ranging from 1-10"<<endl;
                cout<<"Input a number from 1-10"<<endl;
                cin>>n;

                //Map/Process Inputs to Outputs
                fill(array,SIZE);
                larger(array,SIZE,n);

                //Display Outputs
                print(array,SIZE);

                //Exit Program!
                break;
            }
            case 5:{
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
                if((scrs*100.0f/nqstns)<75){
                    cout<<"You have failed the exam."<<endl;
                }else{
                    cout<<"You have passed the exam."<<endl;
                }

                //Close files
                keyFl.close();
                ansFl.close();
                scrFl.close();

                //Exit program!
                break;
            }
            case 6:{
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
                rdFile2(keyFl,key,nqstns);
                rdFile2(ansFl,answers,nqstns);
                wrtFile2(scrFl,key,answers,nqstns);
                grade2(answers,key,nqstns);
                int scrs=score2(answers,key,nqstns);

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
            case 7:{
                //Declare Variables
                const int SIZE=18;//Size of account number database is 18
                int number;       //User inputted account number
                int acctNum[SIZE];
                ifstream acctFl;

                //Initial Variables
                acctFl.open("account_number.dat");
                for(int count=0;count<SIZE;count++){
                    acctFl>>acctNum[count];
                }


                //Map/Process Inputs to Outputs
                cout<<"This program will validate the account number you input."<<endl;
                cout<<"Please input your 7 digit account number."<<endl;
                cin>>number;

                //Display Outputs
                valid(acctNum,SIZE,number);

                //Close File
                acctFl.close();

                //Exit Program!
                break;
            }
            case 8:{
                //Declare Variables
                const int SIZE=10;
                int lotto[SIZE];  //Lottery array sized to 10, filled with user's number
                int winNum[SIZE]; //Winning Numbers Array
                int luckNum;      //User inputted lotto number
                fstream winNmFl;

                //Open Winning Numbers File/Initialize Winning Number Array
                winNmFl.open("winning_numbers.dat");
                for(int count=0;count<SIZE;count++){
                    winNmFl>>winNum[count];
                }


                //Initial Variables
                cout<<"This program will determine if you are the winner of the "
                        "lottery."<<endl;
                cout<<"Please input your lucky 5 digit number."<<endl;
                cin>>luckNum;

                //Initializes lotto array to lucky number
                for(int count=0;count<SIZE;count++){
                    lotto[count]=luckNum;
                }

                //Map/Process Inputs to Outputs
                for(int i=0;i<SIZE;i++){
                    for(int j=0;j<SIZE;j++){
                        if(lotto[i]==winNum[j]){
                            cout<<"You're a winner!"<<endl;
                        }
                    }
                }


                //Display Outputs


                //Exit Program!
                break;
            }
            case 9:{
                //Declare Variables
                const int SIZE=8;
                int array1[SIZE];//Two
                int array2[SIZE];//Identical Arrays


                //Initial Variables
                fill1(array1,SIZE);
                fill1(array2,SIZE);

                //Map/Process Inputs to Outputs
                bubSort1(array1,SIZE);
                cout<<"End of Bubble Sort"<<endl;
                selSort1(array2,SIZE);
                cout<<"End of Selection Sort"<<endl;

                //Display Outputs


                //Exit Program!
                break;
            }
            case 10:{
                //Declare Variables
                const int SIZE=8;
                int array1[SIZE];//Two
                int array2[SIZE];//Identical Arrays


                //Initial Variables
                fill2(array1,SIZE);
                fill2(array2,SIZE);

                //Map/Process Inputs to Outputs
                cout<<"This program finds the number of exchanges for "
                        "bubble and selection sorts when sorting identical"
                        " 8 integer arrays."<<endl;
                bubSort2(array1,SIZE);
                selSort2(array2,SIZE);


                //Display Outputs


                //Exit Program!
                break;
            }
        }
    }else{
        cout<<"Exiting menu"<<endl;
    }
    cout<<"Repeat menu? Press 0"<<endl;
    cin>>choice;
    }while(choice==0);
    //Process/Calculations Here

    //Output Located Here
  
    //Exit
    return 0;
}
void input1(int array [],int size){
    for(int count=0;count<size;count++){
        cin>>array[count];
    }
}
void sort(int array[],int size){
    for(int count=0;count<size-1;count++){
        for(int pos=count+1;pos<size;pos++){
            int temp=array[count];
            array[count]=array[pos];
            array[pos]=temp;
        }
    }
}
void input2(float rain[],int months){
    for(int count=0;count<months;count++){
        do{
            cin>>rain[count];
        }while(rain[count]<0);
    }
}
void total(float rain[],int months){
    float total=0;
    
    //Summing rainfall of every months
    for(int count=0;count<months;count++){
        total+=rain[count];
    }
    cout<<"Total rain in the year = "<<total<<" inches"<<endl;
}
void avg(float rain[],int months){
    float avg=0;
    
    //Summing rainfall of every months
    for(int count=0;count<months;count++){
        avg+=rain[count];//Adding each month's rainfall
        
    }
    avg/=months;
    cout<<"Average rainfall per month = "<<avg<<" inches"<<endl;
}
void maxMin(float rain[],int months){
    float highest,lowest;
    highest=lowest=rain[0];
    for(int count=1;count<months;count++){
        if(rain[count]>highest){
            highest=rain[count];
        }
    }
    for(int count=1;count<months;count++){
        if(rain[count]<lowest){
            lowest=rain[count];
        }
    }
    
    cout<<"Highest month = "<<highest<<" inches"<<endl;
    cout<<"Lowest month = "<<lowest<<" inches"<<endl;
}
void input3(int sold[], int jars){
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
void fill(int array[], int size){
    for(int count=0;count<size;count++){
        array[count]=rand()%10+1;//[1,10]
    }
}
void larger(int array[], int size, int n){
    for(int count=0;count<size;count++){
        if(n>array[count]){
            cout<<n<<" is greater than "<<array[count]<<endl;
        }
    }
}
void print(int array[], int size){
    cout<<"============================"<<endl;
    cout<<"The contents of the array are : "<<endl;
    for(int count=0;count<size;count++){
        cout<<array[count]<<endl;
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
            cout<<"You missed #"<<i<<endl;
        }
    }

    cout<<"You answered "<<size-correct<<" questions incorrectly."<<endl;
    cout<<"You answered "<<correct<<" questions correctly."<<endl;
}
void rdFile2(ifstream & in,char keyAns[],int &cnt){
    cnt=0;
    char kyAnsVl;
    while(in>>kyAnsVl){
        keyAns[cnt++]=kyAnsVl;
    }
}

void wrtFile2(ofstream & out,char key[],char ans[],int size){
    for(int i=0;i<size;i++){
        if(key[i]==ans[i])out<<i<<". Correct"<<endl;
        else out<<i<<". Incorrect"<<endl;
    }
}
int  score2(char ans[],char key[],int size){
    int correct=0;
    for(int i=0;i<size;i++){
        if(key[i]==ans[i])correct++;
    }
    return correct; 
}
void grade2(char ans[],char key[], int size){
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
void valid(int acctNum[],int size, int input){
    bool invalid=false;//Variable incase count # is false
    for(int count=0;count==size;count++){
        if(acctNum[count]==input){
            cout<<"Account number valid."<<endl;
            invalid=true;
        }
    }
    if(invalid==false){
        cout<<"Account number invalid."<<endl;
    }
}
void fill1(int array[],int size){
    for(int count=0;count<size;count++){
        array[count]=count;
    }
}
void bubSort1(int array1[],int size){
    for(int count=0;count<size-1;count++){
        for(int place=count+1;place<size;place++){
            if(array1[count]>array1[place]){
                int temp=array1[count];
                array1[count]=array1[place];
                array1[place]=temp;
            }
            disBub1(array1,size);
        }
    }
}
void selSort1(int array2[],int size){
    int minDex,minVal;
    for(int start=0;start<(size-1);start++){
        minDex=start;
        minVal=array2[start];
        for(int index=start+1;index<size;index++){
            if(array2[index]<minVal){
                minVal=array2[index];
                minDex=index;
            }
        }
        disSel1(array2,size);
    }
}
void disBub1(int array1[], int size){
    for(int count=0;count<size;count++){
        cout<<"Bubble Sort Run #"<<count+1<<endl;
        for(int cntr=0;cntr<size;cntr++){
            cout<<array1[cntr]<<endl;
        }
    }
}
void disSel1(int array2[],int size){
    for(int count=0;count<size;count++){
        cout<<"Selection Sort Run #"<<count+1<<endl;
        for(int cntr=0;cntr<size;cntr++){
            cout<<array2[cntr]<<endl;
        }
    }
}
void fill2(int array[],int size){
    for(int count=0;count<size;count++){
        array[count]=count;
    }
}
void bubSort2(int array1[],int size){
    int exchange=0;//Keeps track of exchanges
    for(int count=0;count<size-1;count++){
        for(int place=count+1;place<size;place++){
            if(array1[count]>array1[place]){
                int temp=array1[count];
                array1[count]=array1[place];
                array1[place]=temp;
            }
            exchange++;
        }
    }
    cout<<"Bubble Sort Exchanges: "<<exchange<<endl;
}
void selSort2(int array2[],int size){
    int minDex,minVal;
    int exchange=0;//Keeps track of exchanges
    for(int start=0;start<(size-1);start++){
        minDex=start;
        minVal=array2[start];
        for(int index=start+1;index<size;index++){
            if(array2[index]<minVal){
                minVal=array2[index];
                minDex=index;
            }
        }
        exchange++;
    }
    cout<<"Selection Sort Exchanges: "<<exchange<<endl;
}
