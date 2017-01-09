/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 9, 2017, 12:57 PM
 * Purpose: Sum up the numbers 50 and 100
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
    unsigned short num1, num2, total;
    //Input or initialize values Here
    cout<<"This program takes two numbers "<<endl;
    cout<<"and displays their sum."<<endl;
    cout<<"Enter a number between 0 and 32000"<<endl;
    cin>>num1;
    cout<<"Enter another number between 0 and 32000"<<endl; 
    cin>>num2;
    //Process/Calculations Here
    total=num1+num2;
    //Output Located Here
    cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<total<<endl;
    

    //Exit
    return 0;
}

