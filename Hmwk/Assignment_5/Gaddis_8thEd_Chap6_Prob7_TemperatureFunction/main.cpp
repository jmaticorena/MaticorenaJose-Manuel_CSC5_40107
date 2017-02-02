

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
float celsius(float);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //declare variables
    float tempC, //temperature in Celsius 
          tempF; //temperature in Fahrenheit to be converted
    //Input Values
   
    //Process by mapping inputs to outputs
    cout<<"Fahrenheit               Celsius"<<endl;
    for(tempF=0;tempF<=20;tempF++){
      tempC=celsius(tempF);
      cout<<setprecision(2)<<fixed;
      cout<<setw(7)<<tempF<<"                 "<<setw(7)<<tempC<<endl;
      
    }
    //Output values
    //Exit Stage right!
    return 0;
}

float celsius(float inTemp){
    float outTemp;
    return outTemp=(5/9.0)*(inTemp-32); 
}