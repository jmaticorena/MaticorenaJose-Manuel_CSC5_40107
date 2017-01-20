

/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on January 19, 2017, 8:09 PM
  Purpose: Calculate the temperature in Fahrenheit. Use a Loop to display a table.
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
   
    //Process by mapping inputs to outputs
    cout<<"Celsius            Fahrenheit"<<endl;
    for(tempC=0;tempC<=20;tempC++){
      cout<<setprecision(2)<<fixed;
      tempF=9*tempC/5+32;  
      cout<<tempC<<"                 "<<tempF<<endl;
      
    }
    //Output values
    //Exit Stage right!
    return 0;
}

