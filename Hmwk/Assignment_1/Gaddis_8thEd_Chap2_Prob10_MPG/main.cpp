

/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on January 9, 2017, 8:21 PM
  Purpose: Calculate the gas milage of a car.
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
    float miles,   //miles driven
                   gallons, //gallons of gasoline used
                   mpg;     //miles per gallon
    
    //Input Values
    cout<<"This program calculates your car's gas milage."<<endl;
    cout<<"Input the number of miles driven."<<endl;
    cin>>miles;
    cout<<"Input the number of gallons of gasoline used."<<endl;
    cin>>gallons;
    
    //Process by mapping inputs to outputs
    mpg=miles/gallons;
    //Output values
    cout<<"The gas milage of your car is "<<mpg<<" mpg."<<endl;
    //Exit Stage right!
    return 0;
}

