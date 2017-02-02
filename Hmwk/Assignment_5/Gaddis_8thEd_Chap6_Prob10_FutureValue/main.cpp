/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on February 2,2017 12:37 PM
  Purpose:  Savings Function for future value
 
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
float futVal(float,float,int);//Future Value of the account

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float pv,   //Present Value in Dollars
          iRate;//Monthly Interest Rate in Percent
    int nMonths;//Number of Months
    
    //Input values
    cout<<"This program calculates the future value of your savings account."<<endl;
    cout<<"Please enter the present value of the savings account."<<endl;
    cin>>pv;
    cout<<"Please enter the monthly interest rate in percent."<<endl;
    cin>>iRate;
    cout<<"Please enter the number of months."<<endl;
    cin>>nMonths;
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"Present value = $"<<pv<<endl;
    cout<<"Interest rate = "<<iRate<<"%"<<endl;
    cout<<"Number of Months = "<<nMonths<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Savings after "<<nMonths<<" months = $"<<futVal(pv,iRate,nMonths)<<endl;
    

    //Exit stage right!
    return 0;
}

float futVal(float p,float i,int n){
    return p*pow(1+(i/100),n);
}