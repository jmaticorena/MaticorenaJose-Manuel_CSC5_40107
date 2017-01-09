/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 9, 2017, 1:28 PM
 * Purpose: Calculate the sales tax 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const unsigned short staTx=4,//State Tax in percentage
                         countTx=2;//County Tax in percentage
    
    float prchse,// Purchase amount in dollars
          totTx, //total sales tax in dollars
          totcost;//total cost of purchase in dollars
    //Input or initialize values Here
    cout<<"This program takes a purchase amount "<<endl;
    cout<<"and calculates the sales tax."<<endl;
    cout<<"Enter the amount of your purchase"<<endl;
    cin>>prchse;
    //Process/Calculations Here
    totTx=(prchse*staTx/100)+(prchse*countTx/100);
    totcost=totTx+prchse;
    //Output Located Here
    cout<<"The total sales tax for your purchase = $"<<totTx<<endl;
    cout<<"The total cost of your purchase = $"<<totcost<<endl;

    //Exit
    return 0;
}

