/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 9, 2017, 8:48 PM
 * Purpose: Calculate the total bill at a restaurant 
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
    const float  tax=6.75, // Tax in percentage
                 tip=20;    // Tip in percentage
    
    float mealCst,         // cost of the meal in dollars
          totTx,           // total tax in dollars
          totTip,          // total tip in dollars
          totBill;         // total bill in dollars
    
    //Input or initialize values Here
    cout<<"This program calculates your total bill "<<endl;
    cout<<"in a restaurant."<<endl;
    cout<<"Enter the cost of your meal"<<endl;
    cin>>mealCst;
    //Process/Calculations Here
    totTx=mealCst*tax/100;
    totTip=(totTx+mealCst)*tip/100;
    totBill=totTx+mealCst+totTip;
    //Output Located Here
    cout<<"The cost of your meal = $"<<mealCst<<endl;
    cout<<"The tax on your meal = $"<<totTx<<endl;
    cout<<"The tip on your meal = $"<<totTip<<endl;
    cout<<"The total bill for your meal = $"<<totBill<<endl;
    //Exit
    return 0;
}

