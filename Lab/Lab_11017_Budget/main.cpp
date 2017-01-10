/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 10, 2017, 12.:10 PM
 * Purpose:  Calculate the percent military and NASA Budget
 *              
 *          Sources of information
 * United States Federal Budget 2016 $3.54 trillion 
 * National Defense Budget 2016      $5.41 Billion
 * Found from http://federal-budget.insidegov.com/l/119/2016-Estimate
 * 
 * 
 * NASA Budget 2016                      $18.5 Billion
 * Found From https://www.nasa.gov/sites/default/files/files/NASA_FY2016_Summary_Brief_corrected.pdf
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
    float totBdg=3.54e12,           //National Budget in Billions
                   milBdg=6.09e11,  //Defense Budget in Billions
                   nasaBdg=18.5e10, //NASA Budget in Billions
                   pcntmil,         //Percentage Military budget in %
                   pcntnsa;         //Percentage NASA Budget in %
    //Input or initialize values Here
    
    //Process/Calculations Here
    pcntmil=milBdg/totBdg*100;
    pcntnsa=nasaBdg/totBdg*100;
    //Output Located Here
    cout<<"This program calculates what percentage"<<endl;
    cout<<"of the federal budget the Military and NASA's budget make up."<<endl;
    cout<<"The total Federal Budget is $"<<totBdg<<endl;
    cout<<"The total Military Budget is $"<<milBdg<<endl;
    cout<<"The total NASA Budget is $"<<nasaBdg<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"The military budget makes up "<<endl;
    cout<<pcntmil<<" % of the federal budget"<<endl;
    cout<<"The NASA budget makes up "<<endl;
    cout<<pcntnsa<<" % of the federal budget"<<endl;
    //Exit
    return 0;
}

