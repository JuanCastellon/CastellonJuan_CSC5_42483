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
#include <cstring>   //String library

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array C
const int COLMAX=80;

//Function Prototypes
int  read(char [][COLMAX],int &);//Outputs row and columns detected from input
void sort(char [][COLMAX],int,int);//Sort by row
void print(const char [][COLMAX],int,int);//Print the sorted 2-D array


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=30;             //Only 20 required
    char array[ROW][COLMAX];      //Bigger than necessary 
    int colIn,colDet,rowIn,rowDet;//Row, Col input and detected
    
    //Input the size of the array you are sorting
    cout<<"Read in a 2 dimensional array of characters and sort by Row"<<endl;
    cout<<"Input the number of rows <= 20"<<endl;
    cin>>rowIn;
    cout<<"Input the maximum number of columns <=20"<<endl;
    cin>>colIn;
    
    //Now read in the array of characters and determine it's size
    rowDet=rowIn;
    cout<<"Now input the array."<<endl;
    colDet=read(array,rowDet);
    
    
    
    
    //Compare the size input vs. size detected and sort if same
    //Else output different size
    if(rowDet==rowIn&&colDet==colIn){
        sort(array,rowIn,colIn);
        cout<<"The Sorted Array"<<endl;
        print(array,rowIn,colIn);
    }else{
        if(rowDet!=rowIn)
        cout<<(rowDet<rowIn?"Row Input size less than specified.":
            "Row Input size greater than specified.")<<endl;
        if(colDet!=colIn)
        cout<<(colDet<colIn?"Column Input size less than specified.":
            "Column Input size greater than specified.")<<endl;
    }
    
    //Exit
    return 0;
}
int  read(char array[][COLMAX],int &rowIn){
    int check,index;
    check=0;
    for(int count=0;count<rowIn;count++){
        cin>>array[count];
    }
    for(int count=0;count<rowIn;count++){
        if(check!=0){
            index=count;
        }
        for(int cntr=count+1;cntr<rowIn;cntr++){
            check=strcmp(array[count],array[cntr]);
                
            }
        }
    return strlen(array[index]);
}

void sort(char a[][COLMAX],int rowIn,int colIn){
    int check=0;
    for(int count=0;count<rowIn;count++){
        for(int cntr=count+1;cntr<rowIn;cntr++){
            check=strcmp(a[count],a[cntr]);
            if(check==0){
                if(a[count]>a[cntr]){
                    swap(a[cntr],a[count]);
                }
            }
            else if((strlen(a[count]))<(strlen(a[cntr]))){
                swap(a[count],a[cntr]);   
            }
        }   
    }
    
    
    
    
    
    
    /*bool swap;
    int temp;
    do{
        swap=false;
        for(int i=0; i<rowIn-1; i++){
            if (array[i][0] > array[i+1][0]){
                for(int j=0; j<colIn; j++){
                    temp = array[i][j];
                    array[i][j] = array[i+1][j];
                    array[i+1][j] = temp;
                }
                swap = true;
            }
        }
    }while(swap);
    */
}

void print(const char array[][COLMAX],int rowIn ,int colIn){
    for (int x=0;x<rowIn; x++){
        cout << array[x]<<endl;
    }
}