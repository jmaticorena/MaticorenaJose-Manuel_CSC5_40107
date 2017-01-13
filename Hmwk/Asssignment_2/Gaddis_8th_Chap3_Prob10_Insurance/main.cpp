

/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on January 12, 2017, 9:13 PM
  Purpose: Calculate the insurance needed.
 */
//System Libraries
#include <iostream>
using namespace std;

//user Libraries

//Global Constants
//Such as Pi, speed of light -> Math/science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //declare variables
    const unsigned short perins=8; //Percent of value to be insured 
    float value, //value of home
          insur; //value of insurance
    //Input Values
    cout<<"Many financial experts advise that property owners should "<<endl;
    cout<<"insure their homes or buildings for at least 80 percent of "<<endl;
    cout<<"the amount it would cost to replace the structure."<<endl;
    cout<<"This program calculates the amount of insurance advised."<<endl;
    cout<<"Please enter the value of your property."<<endl;
    cin>>value;
    //Process by mapping inputs to outputs
    insur=value*perins/10;
    //Output values
    cout<<"The amount of insurance needed on your building is $"<<insur<<endl;
    //Exit Stage right!
    return 0;
}

