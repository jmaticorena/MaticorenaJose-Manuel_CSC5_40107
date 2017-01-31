/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 31, 2017, 10:55 AM
 * Purpose:  Savings Function
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float save1(float,float,int);
float save2(float,float,int);
float save3(float,float,int);
float save4(float,float,int);
float save5(float,float,int=8);
float save1(float,float,float);
float save6(float,float,int,int &);
float save7(float,float,int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float pv,iRate;
    int nPeriod;
    //Input or initialize values Here
    pv=100.0f; //Dollars
    iRate=0.09f;//percent
    nPeriod=.72/iRate+0.5;//Number of Compounding periods
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"Present Value = $"<<pv<<endl;
    cout<<"Interest Rate = "<<iRate*100<<"%"<<endl;
    cout<<"Number of Compounding periods = "<<nPeriod<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Savings 1 = $"<<save1(pv,iRate,nPeriod)<<endl;
    cout<<"Savings 2 = $"<<save2(pv,iRate,nPeriod)<<endl;
    cout<<"Savings 4 = $"<<save4(pv,iRate,nPeriod)<<endl;
    cout<<"Savings 5 = $"<<save5(pv,iRate)<<endl;
    cout<<"Savings 1 float = $"<<save1(pv,iRate,static_cast<float>(nPeriod))<<endl;
    int nCalls=-100;
    for(int j=1;j<=5;j++)save6(pv,iRate,nPeriod,nCalls);
    cout<<"Savings 6 = $"<<save6(pv,iRate,nPeriod, nCalls)<<endl;
    cout<<"How many times was Savings 6 called = "<<nCalls<<endl;
    cout<<"Savings 7 = $"<<save7(pv,iRate,nPeriod)<<endl;
    //Exit
    return 0;
}

float save1(float p,float i,int n){
    return p*pow(1+i,n);
}

float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

float save3(float p,float i,int n){
    return p*pow(1+i,n);
}

float save4(float p,float i,int n){
    if(n<=0)return p;
    return save4(p,i,n-1)*(1+i);
}

float save5(float p,float i,int n){
    if(n<=0)return p;
    return save4(p,i,n-1)*(1+i);
}

float save1(float p,float i,float n){
    //cout<<"I am the floater"<<endl;
    return p*pow(1+i,n);
}

float save6(float p,float i,int n,int &nCalls){
    static int test=0;
    nCalls=++test;
    return p*pow(1+i,n);
}

float save7(float p,float i,int n){
    float fv=p;
    for(int year=1;year<=n;year++){
        fv*=(1+i);
        int ifv=fv*100;//no fractional pennies
        fv=ifv/100.0f;
    }
    return fv;
}