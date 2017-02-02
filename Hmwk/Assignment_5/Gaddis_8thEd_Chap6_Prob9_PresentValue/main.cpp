/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on February 2,2017 12:47 PM
  Purpose:  Savings Function for Present value
 
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
float presVal(float,float,int);//Future Value of the account

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float fv,   //Present Value in Dollars
          iRate;//Annual Rate in Percent
    int nYears;//Number of Years
    
    //Input values
    cout<<"This program calculates the amount needed"<<endl;
    cout<<"in your savings account to achieve a desired future amount."<<endl;
    cout<<"Please enter the future value desired."<<endl;
    cin>>fv;
    cout<<"Please enter the annual interest rate in percent."<<endl;
    cin>>iRate;
    cout<<"Please enter the number of years you wish to save."<<endl;
    cin>>nYears;
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"Future value desired = $"<<fv<<endl;
    cout<<"Annual Interest rate = "<<iRate<<"%"<<endl;
    cout<<"Number of Years = "<<nYears<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"It will require $"<<presVal(fv,iRate,nYears)<<" initially"<<endl;
    cout<<"to save $"<<fv<<" after "<<nYears<<" years."<<endl;
    

    //Exit stage right!
    return 0;
}

float presVal(float f,float i,int n){
    return f/(pow(1+(i/100),n));
}