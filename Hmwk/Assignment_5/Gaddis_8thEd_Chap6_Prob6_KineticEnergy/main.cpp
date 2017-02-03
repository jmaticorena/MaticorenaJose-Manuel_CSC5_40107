/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on February 2, 2017, 9:15 PM
  Purpose: Calculate the Kinetic Energy
 */
//System Libraries
#include <iostream>
using namespace std;

//user Libraries

//Global Constants
//Such as Pi, speed of light -> Math/science values
//as well as conversions from system of units to another

//Function Prototypes
float kntcNRG(float,float);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //declare variables
    float Energy, //Kinetic Energy of the function in Joules
          mass,   //Mass of the object in Kilograms
          velocty;//Velocity in m/s
    
    //Input Values
    cout<<"This program calculates the kinetic energy of a moving object."<<endl;
    cout<<"Enter the objects mass in kg."<<endl;
    cin>>mass;
    cout<<"Enter the objects velocity in m/s"<<endl;
    cin>>velocty;
    //Process by mapping inputs to outputs
    Energy=kntcNRG(mass,velocty);
    //Output values
    cout<<"The objects mass is "<<mass<<" kg."<<endl;
    cout<<"The objects velocity is "<<velocty<<" m/s"<<endl;
    cout<<"The objects kinetic energy is "<<Energy<<" J"<<endl;
    //Exit Stage right!
    return 0;
}

float kntcNRG(float m,float v){
    float nrg;
   return nrg=.5*m*v*v;  
}