/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 11, 2017, 1:39 PM
 * Purpose:  Angle Calculator
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float angle,
          sine,
          cosine,
          tangent;
    //Input or initialize values Here
    cout<<"This program take any angle in radians and outputs"<<endl;
    cout<<"the sine, cosine,and tangent of that angle"<<endl;
    cout<<"Enter an angle in radians."<<endl;
    cin>>angle;
    
    //Process/Calculations Here
    cout<<setprecision(4)<<fixed;
    sine=sin(angle);
    cosine=cos(angle);
    tangent=tan(angle);
    //Output Located Here
    cout<<"The sine of "<<angle<<" is "<<sine<<endl;
    cout<<"The cosine of "<<angle<<" is "<<cosine<<endl;
    cout<<"The tangent of "<<angle<<" is "<<tangent<<endl;

    //Exit
    return 0;
}

