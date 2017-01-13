

/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on January 12, 2017, 8:31 PM
  Purpose: Calculate the number of widgets in a pallet.
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
    const float widget=12.5; //weight of each widget in pounds
    float wghtpal,           //weight of the pallet without widgets
          wghttot,           //weight of the pallet with widgets
          numwdgt;           //number of widgets
    
    //Input Values
    cout<<"This program calculates the number of widget on a pallet based on weight."<<endl;
    cout<<"Please enter the weight of the pallet itself without any widgets"<<endl;
    cin>>wghtpal;
    cout<<"Please enter the total weight of the pallet with the widgets"<<endl;
    cin>>wghttot;
    //Process by mapping inputs to outputs
    numwdgt=(wghttot-wghtpal)/widget;
    //Output values
    cout<<"The number of widgets on the pallet is "<<numwdgt<<endl;
    //Exit Stage right!
    return 0;
}

