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
    int PlyrCrd;
   
    //Input Values
    
    //Process by mapping inputs to outputs
    PlyrCrd=Deck();
    switch(PlyrCrd){
        case 1:static_cast<char>(PlyrCrd);PlyrCrd='A';break;
        case 11:static_cast<char>(PlyrCrd);PlyrCrd='J';break;
        case 12:static_cast<char>(PlyrCrd);PlyrCrd='Q';break;
        case 13:static_cast<char>(PlyrCrd);PlyrCrd='K';break;       
    }
    cout<<PlyrCrd;
    //Output values
    
    //Exit Stage right!
    return 0;
}

int Deck(){
    int deck;
    deck=rand()%12+1;
    return deck;
}