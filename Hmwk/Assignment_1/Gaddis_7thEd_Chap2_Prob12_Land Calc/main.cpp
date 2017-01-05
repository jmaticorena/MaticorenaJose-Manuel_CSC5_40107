

/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on January 4, 2017, 1:15 PM
  Purpose: Calculating acres of land to feet.
 */
//System Libraries
#include <iostream>
using namespace std;

//user Libraries

//Global Constants
//Such as Pi, speed of light -> Math/science values
//as well as conversions from system of units to another
const int CNVACFT=43560;//Conversion Acres to feet
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //declare variables
    int nAcres,nFt2;
    
    //Input Values
    cout<<"This is a conversion program"<<endl;
    cout<<"from number of Acres to Feet squared"<<endl;
    cout<<"Input number of Acres"<<endl;
    cin>>nAcres;
    //Process by mapping inputs to outputs
    nFt2=nAcres*CNVACFT;
    //Output values
    cout<<"The number of acre input = "<<nAcres<<endl;
    cout<<"Equivalent to "<<nFt2<<" ft^2"<<endl;
    //Exit Stage right!
    return 0;
}

