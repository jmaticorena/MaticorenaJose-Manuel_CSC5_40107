/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on January 19, 2017, 8:15 PM
  Purpose: Ascii Table
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
    int num=127;    //Number of iterations
    //Input Values
    
    //Process by mapping inputs to outputs
    cout<<"--ASCII Table--"<<endl;
    for(int ascii=0;ascii<num;ascii++){ //First 32 values might not display
        cout<<static_cast<char>(ascii);
        if (ascii%16==0){ //Display 16 characters per line
            cout<<endl;   //Start new line
        }
    }
    //Output values
    
    //Exit Stage right!
    return 0;
}

