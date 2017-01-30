/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on January 23, 2017, 7:15 PM
  Purpose: Black Jack Project
 * 
 * All rules and regulation on the card game of blackjack
 * were taken from the official Bicycle Cards website
 * http://www.bicyclecards.com/how-to-play/blackjack/
 */
//System Libraries
#include <iostream> //Input and Output
#include <cstdlib>  //Random Number Generator
#include <ctime>    //Random Number Seed
#include <string>   //String Library
using namespace std;

//user Libraries

//Global Constants
//Such as Pi, speed of light -> Math/science values
//as well as conversions from system of units to another

//Function Prototypes
int Deck();
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number Generator
    srand(static_cast<unsigned int>(time(0)));
    //declare variables
    int PlrCrd1,//First Card Delt
        PlrCrd2,
        PlrCrd;//Value of the Player Card
    int sum=0;//Sum of the value of the player Cards
    //Input Values
    do {
    //Dealing the Card
    PlrCrd=Deck();
    
    switch(PlrCrd){
        case 1:
            PlrCrd=65;
            cout<<static_cast<char>(PlrCrd);
            break;
        case 11:
            PlrCrd=74;
            cout<<static_cast<char>(PlrCrd);
            break;
        case 12:
            PlrCrd=81;
            cout<<static_cast<char>(PlrCrd);
            break;
        case 13:
            PlyrCrd=75;
            cout<<static_cast<char>(PlrCrd);
            break;
        default:
            cout<<PlrCrd;
    }
    }while(sum<=21);
    
    //Output values
    
    //Exit Stage right!
    return 0;
}

int Deck(){
    int deck;
    deck=rand()%12+1;
    return deck;
}