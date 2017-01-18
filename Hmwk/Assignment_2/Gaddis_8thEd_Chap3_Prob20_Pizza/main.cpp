

/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on January 12, 2017, 7:11 PM
  Purpose: Calculate the amount of pizza slices
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//user Libraries

//Global Constants
//Such as Pi, speed of light -> Math/science values
//as well as conversions from system of units to another
const float pi=3.14159;
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //declare variables
    float dmeter,         //diameter of the pizza in inches
          areapz,         //area of the pizza in inches^2
          slices,         //number of slices the pizza can have
          areaslc=14.125; //minimum area of pizza slice in inches^2
    //Input Values
    cout<<"This program calculates the number of slices"<<endl;
    cout<<"a pizza of any size can be divided into."<<endl;
    cout<<"Enter the diameter of your pizza in inches."<<endl;
    cin>>dmeter;
    //Process by mapping inputs to outputs
    areapz=(dmeter/2)*(dmeter/2)*pi;
    cout<<setprecision(1)<<fixed;
    slices=areapz/areaslc;
    //Output values
    cout<<"The number of slices your pizza can be divided into is "<<endl;
    cout<<slices<<" slices."<<endl;
    //Exit Stage right!
    return 0;
}

