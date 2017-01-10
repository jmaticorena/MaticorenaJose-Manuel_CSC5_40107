/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 10, 2017, 12.:10 PM
 * Purpose:  Calculate the debt per person
 *              
 *          Sources of information
 * 2008 Federal Debt  $10.1 Billion
 * 2016 Federal Debt  $19.5 Billion
 * Found from https://www.treasurydirect.gov/govt/reports/pd/histdebt/histdebt_histo5.htm
 * 
 * Population of US 2016    320 million
 * Population of US 2008    304 million
 * Found From http://www.multpl.com/united-states-population/table
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float
          pop2016=3.2e8,  //Population of US in 2016 in People
          pop2008=3.04e8,  //Population of US in 2008 in People
          dbt2016=1.95e10,  //Debt of US in 2016 in dollars
          dbt2008=1.01e10,  //Debt of US in 2008 in dollars
          pp2008,          //Debt per person in $/person in 2008
          pp2016;          //Debt per person in $/person in 2016
    //Input or initialize values Here
    
    //Process/Calculations Here
    pp2008=dbt2008/pop2008;
    pp2016=dbt2016/pop2016;
    //Output Located Here
    cout<<"This program calculates the debt per person in "<<endl;
    cout<<"the years 2008 and 2016 respectively."<<endl;
    cout<<"The total population in the US in 2008 was "<<pop2008<<endl;
    cout<<"The total debt per person in 2008 was $"<<pp2008<<" per person"<<endl;
    cout<<"The total population in the US in 2016 was "<<pop2016<<endl;
    cout<<"The total debt per person in 2016 was $"<<pp2016<<" per person"<<endl;
    
    //Exit
    return 0;
}

