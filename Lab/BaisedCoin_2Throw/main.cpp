/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 24, 2017, 12:24 PM
 * Purpose:  Baised Coin Throw
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const unsigned int MAXRAND=pow(2,31)-1;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    float pTails, pHeads;
    unsigned int nTT=0, nTH=0,nHT=0, nHH=0, nCoins;
    
    //Input or initialize values Here
    cout<<"Coin Flipping Problem"<<endl;
    cout<<"Input the probability of Tails"<<endl;
    cin>>pTails;
    cout<<"Input the number of coin flips"<<endl;
    cin>>nCoins;
    
    //Process/Calculations Here
    pHeads=1-pTails;
    for(unsigned int flip=1;flip<=nCoins;flip++){
       float prob1=rand()/static_cast<float>(MAXRAND);
       float prob2=rand()/static_cast<float>(MAXRAND);
       if(prob1<=pTails&&prob2<=pTails)nTT++;
       else if(prob1<=pTails&&prob2>pTails)nTH++;
       else if(prob1>pTails&&prob2>pTails)nHH++;
       else nHT++;
    }
    
    //Output Located Here
    cout<<setprecision(4)<<fixed<<showpoint;
    cout<<"Percentage input for Prob of Tails = "<<pTails<<endl;
    cout<<"Percentage input for Prob of Heads = "<<pHeads<<endl;
    cout<<"Percentage output for 2 Tails = "
            <<static_cast<float>(nTT)/nCoins<<endl;
    cout<<"Percentage output for 1 Head and 1 Tail = "
            <<static_cast<float>(nHT)/nCoins<<endl;
    cout<<"Percentage output for 1 Tail and 1 Head = "
            <<static_cast<float>(nTH)/nCoins<<endl;
    cout<<"Percentage output for 2 Heads = "
            <<static_cast<float>(nHH)/nCoins<<endl;
    //Exit
    return 0;
}

