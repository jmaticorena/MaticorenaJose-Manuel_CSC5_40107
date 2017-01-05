

/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on January 4, 2017, 12:11 PM
  Purpose: Stock Calculation
 */
//System Libraries
#include <iostream>
using namespace std;

//user Libraries

//Global Constants
//Such as Pi, speed of light -> Math/science values
//as well as conversions from system of units to another
const unsigned char PERCENT=100;//Conversion to percent

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //declare variables
    unsigned char stkPrce=35;//Units of $'s/share
    unsigned short nShares=750;//Number of Shares
    float comishn=2.0e-2f;//Percent Commission
    unsigned short stkPaid,comPaid,totPaid;
    //Input Values
    
    //Process by mapping inputs to outputs
    stkPaid=stkPrce*nShares;            //Amount Paid for the Stock Price
    comPaid=stkPaid*comishn;    //Commission on Stock Purchase
    totPaid=stkPaid+comPaid;            //Total Paid $'s
            
            
    //Output values
    cout<<"Stock Price/Share  = $"<<static_cast<int>(stkPrce)<<"/share"<<endl;
    cout<<"Number of Shares   = " <<nShares<<" shares"<<endl;
    cout<<"Commission Percent = "<<comishn<<endl;
    cout<<"Stock Price Paid   = $"<<stkPaid<<endl;
    cout<<"Commission Paid    = $"<<comPaid<<endl;
    cout<<"Total Paid         = $"<<totPaid<<endl;
    //Exit Stage right!
    return 0;
}

