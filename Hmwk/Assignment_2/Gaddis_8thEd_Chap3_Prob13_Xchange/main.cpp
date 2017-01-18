

/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on January 12, 2017, 7:52 PM
  Purpose: Calculate the exchange of currency
 
 * Exchange Rates
 * 1 USD= .94 Euros
 * 1 USD= 115.06 Yen
 * Exchange rate information found at http://www.xe.com/
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

//Executable code begins here!!!
int main(int argc, char** argv) {
    //declare variables
    const float euro=.94,  //euro exchange rate
                yen=115.06;//yen exchange rate
    float dollar, //number of dollars to be converted
          euroEx, //amount in euros
          yenEx;  //amount in yen
    //Input Values
    cout<<"This program will convert any amount of US dollars "<<endl;
    cout<<"and convert them to euros and yen."<<endl;
    cout<<"Please enter an amount of dollars you would like to convert. "<<endl;
    cin>>dollar;
    //Process by mapping inputs to outputs
    euroEx=dollar*euro;
    yenEx=dollar*yen;
    //Output values
    cout<<setprecision(2)<<fixed;
    cout<<"$"<<dollar<<" is equivalent to "<<euroEx<<" euros and "<<yenEx<<" yen"<<endl;
    //Exit Stage right!
    return 0;
}

