/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
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
    float test1,test2,test3,test4,test5,avetest;
    //Input or initialize values Here
    cout<<"This program takes in five test scores and"<<endl;
    cout<<"calculates the average test score for the set."<<endl;
    cout<<"Please enter five test scores separated by spaces. ex 75 89 92"<<endl;
    cin>>test1>>test2>>test3>>test4>>test5;
    //Process/Calculations Here
    cout<<setprecision(1)<<fixed;
    avetest=(test1+test2+test3+test4+test5)/5;
    //Output Located Here
    cout<<"The average score for this set of tests is "<<avetest<<endl;
    //Exit
    return 0;
}

