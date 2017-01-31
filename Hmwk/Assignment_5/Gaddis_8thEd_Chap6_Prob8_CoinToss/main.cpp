/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 31, 2017, 12:54 PM
 * Purpose:  Coin Toss Program
 */

//System Libraries Here
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
string toss();
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random Number Generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    int nToss;//Number of Times Coin is to be tossed
    //Input or initialize values Here
    cout<<"This program tosses a coin."<<endl;
    cout<<"How many times would you like to toss it?"<<endl;
    cin>>nToss;
    //Process/Calculations Here
    for(int i=1;i<=nToss;i++){
      cout<<"Toss number "<<i<<" is "<<toss()<<endl;  
    }

    //Exit
    return 0;
}

string toss(){
    int toss=rand()%2+1;//Random Number Between 1 and 2
    string result;
    if(toss==1){
        result="HEADS";
    }
    
    if(toss==2){
        result="TAILS";
    }
    return result;
}