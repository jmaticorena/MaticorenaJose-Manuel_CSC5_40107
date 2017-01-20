/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 19, 2017, 10:55 AM
 * Purpose:  Penny Double
 */

//System Libraries Here
#include <iostream>//Input and output library
#include <cmath>   //power function
#include <iomanip> //formatting
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int salary=1,totPay=0,maxDays;//Salary and Pay in Pennies
    //Input or initialize values Here
    cout<<"Input the number of days worked with the salary."<<endl;
    cin>>maxDays;
    //Process/Calculations Here
    for(int day=1;day<=maxDays;day++,salary*=2){
        int cents=salary%100;
        int dollars=(salary-cents)/100;
        totPay+=salary;
        cout<<"Salary for day "<<day<<" = $"<<dollars<<"."
                <<(cents<10?'0':'\0')<<cents<<endl<<endl;
        cents=totPay%100;
        dollars=(totPay-cents)/100;
        cout<<"Total pay for day "<<day<<" = $"<<dollars<<"."
                <<(cents<10?'0':'\0')<<cents<<endl<<endl;
    }
       //Predicting the Result
    double salLDay=(pow(2,maxDays-1))/100;
    double totLDay=(pow(2,maxDays)-1)/100;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Final salary predicted after "<<maxDays<<" days = $"<<salLDay<<endl;
    cout<<"Final Total Pay predicted after "<<maxDays<<" days = $"<<totLDay<<endl;
    //Exit
    return 0;
}

