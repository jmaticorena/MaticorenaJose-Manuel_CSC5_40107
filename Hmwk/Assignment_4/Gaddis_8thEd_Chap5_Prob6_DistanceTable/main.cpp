/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on January 19, 2017, 10:15 PM
  Purpose: Hours and distance table
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
    float hours, //Hours Traveled
          mph;          //Speed Traveled
    //Input Values
    cout<<"This program calculates and displays the distance traveled"<<endl;
    cout<<"for every hour traveled."<<endl;
    cout<<"Please enter the number of hours traveled."<<endl;
    cin>>hours;
    cout<<"Please enter the speed traveled in miles per hour."<<endl;
    cin>>mph;
    //Process by mapping inputs to outputs
    cout<<"Hour           Distance Traveled"<<endl;
    cout<<"--------------------------------"<<endl;
    for(int loop=1;loop<=hours;loop++){
        float distnce=loop*mph;
        cout<<loop<<"                      "<<distnce<<endl;
    }
    //Output values
    
    //Exit Stage right!
    return 0;
}

