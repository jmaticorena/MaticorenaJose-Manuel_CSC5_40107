/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 12, 2017, 1:23 PM
 * Purpose:  Calculate Automotive Expenses
 */

//System Libraries Here
#include <iostream>
#include<iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float crpymnt, //monthly car payment in dollars
          insrnce, //monthly insurance payment in dollars
          gas,     //amount spent on gas each month in dollars
          oil,     //monthly oil expenses in dollars
          tires,   //monthly tire expenses in dollars
          mntnce,  //monthly maintenence expenses in dollars
          totmon,  //Total monthly expenses
          totyr;   //Total yearly expenses
    //Input or initialize values Here
    cout<<"This program calculates your monthly and yearly expenses"<<endl;
    cout<<"associated with driving your vehicle."<<endl;
    cout<<"Please enter your monthly car payment in dollars."<<endl;
    cin>>crpymnt;
    cout<<"Please enter your monthly insurance payment in dollars."<<endl;
    cin>>insrnce;
    cout<<"Please the amount spent on gasoline each month in dollars."<<endl;
    cin>>gas;
    cout<<"Please enter your monthly oil expenses payment in dollars."<<endl;
    cin>>oil;
    cout<<"Please enter your monthly tire expenses payment in dollars."<<endl;
    cin>>tires;
    cout<<"Please enter your monthly maintenence expenses payment in dollars."<<endl;
    cin>>mntnce;
    //Process/Calculations Here
    cout<<setprecision(2)<<fixed;
    totmon=crpymnt+insrnce+gas+oil+tires+mntnce;  
    totyr=totmon*12;
    //Output Located Here
    cout<<"Your monthly vehicle expenses are $"<<totmon<<endl;
    cout<<"Your yearly vehicle expenses are $"<<totyr<<endl;
    //Exit
    return 0;
}

