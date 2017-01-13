

/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on January 12, 2017, 8:09 PM
  Purpose: Calculate the temperature in Fahrenheit.
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//user Libraries

//Global Constants
//Such as Pi, speed of light -> Math/science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //declare variables
    float tempC, //temperature in Celsius to be converted
          tempF; //temperature in Fahrenheit
    //Input Values
    cout<<"This program will convert any temperature given in Celsius "<<endl;
    cout<<"and convert it to degrees Fahrenheit."<<endl;
    cout<<"Please enter a temperature in degrees Celsius. "<<endl;
    cin>>tempC;
    //Process by mapping inputs to outputs
    tempF=9*tempC/5+32;
    //Output values
    cout<<setprecision(2)<<fixed;
    cout<<tempC<<" degrees Celsius is equivalent to "<<tempF<<" degrees Fahrenheit "<<endl;
    //Exit Stage right!
    return 0;
}

