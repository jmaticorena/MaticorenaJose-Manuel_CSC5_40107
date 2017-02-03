/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on February 2, 2017, 8:15 PM
  Purpose: Calculate Mark Up
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//user Libraries

//Global Constants
//Such as Pi, speed of light -> Math/science values
//as well as conversions from system of units to another

//Function Prototypes
float getretail(float,float);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //declare variables
    float price;  //wholesale price in $
    float markup; //Markup percentage
    float rtlprce;//retail price
    //Input Values
    cout<<"This program calculates the retail price of an item."<<endl;
    cout<<"Enter the items wholesale cost."<<endl;
    cin>>price;
    cout<<"Enter the item's mark up percentage."<<endl;
    cin>>markup;
    //Process by mapping inputs to outputs
    rtlprce=getretail(price,markup);
    //Output values
    cout<<setprecision(2)<<fixed;
    cout<<"The wholesale cost is $"<<price<<endl;
    cout<<"The mark up percentage is "<<markup<<"%."<<endl;
    cout<<"The retail price of the item is $"<<rtlprce<<endl;
    //Exit Stage right!
    return 0;
}

float getretail(float p, float m){
    float retail;
    retail=p+(p*(m/100.0));
    return retail;
}
