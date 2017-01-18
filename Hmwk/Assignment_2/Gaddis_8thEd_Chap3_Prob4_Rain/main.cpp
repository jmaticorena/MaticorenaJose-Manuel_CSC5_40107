/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 12, 2017, 1:04
 * Purpose:  Calculate the average rainfall.
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string month1,month2,month3;
    float rain1,  //rainfall in month 1 in inches
          rain2,  //rainfall in month 2 in inches
          rain3,  //rainfall in month 3 in inches
          averain;//average rainfall in inches
    //Input or initialize values Here
    cout<<"This program calculates the average rainfall of any 3 months."<<endl;
    cout<<"Please enter the name of a month."<<endl;
    getline(cin,month1);
    cout<<"Please enter the amount of rainfall in "<<month1<<" in inches."<<endl;
    cin>>rain1;
    cin.ignore();
    cout<<"Please enter the name of another month."<<endl;
    getline(cin,month2);
    cout<<"Please enter the amount of rainfall in "<<month2<<" in inches."<<endl;
    cin>>rain2;
    cin.ignore();
    cout<<"Please enter the name of another month."<<endl;
    getline(cin,month3);
    cout<<"Please enter the amount of rainfall in "<<month3<<" in inches."<<endl;
    cin>>rain3;
    cin.ignore();
    //Process/Calculations Here
    cout<<setprecision(2)<<fixed;
    averain=(rain1+rain2+rain3)/3;
    //Output Located Here
    cout<<"The average rainfall for the months "<<month1<<", "<<endl;
    cout<<month2<<", and "<<month3<<" is "<<averain<<" inches. "<<endl;
    //Exit
    return 0;
}

