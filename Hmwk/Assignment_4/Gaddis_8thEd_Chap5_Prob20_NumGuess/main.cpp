/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 18, 2017, 12:17 PM
 * Purpose:  Number Guessing Game
 */

//System Libraries Here
#include <iostream> //Input and outputs
#include <cstdlib>  //Random number generator and seed
#include <ctime>    //Set time as seed
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    unsigned int num=rand()%99+1; //Random number
    unsigned int guess;           //User Guess
    //Input or initialize values Here
    cout<<"This program generates a number at random from 1-100."<<endl;
    cout<<"Try and guess the number."<<endl;
    cout<<"Enter your guess."<<endl;
    //Process/Calculations Here
    do {
        cin>>guess;
        if (num>guess){
            cout<<"Your number is too low. Try again."<<endl;
        }
        else if (num<guess){
            cout<<"Your number is too high. Try again."<<endl;
        }
    } while(guess!=num);
    //Output Located Here
    cout<<"Congratulations! You guessed the number! "<<endl;
    cout<<"The number was "<<num<<endl;
    cout<<"Your guess was "<<guess<<endl;

    //Exit
    return 0;
}

