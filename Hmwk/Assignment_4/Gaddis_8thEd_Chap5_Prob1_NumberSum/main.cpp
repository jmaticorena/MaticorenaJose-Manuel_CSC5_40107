/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 18, 2017, 1:13 PM
 * Purpose:  Number sum loop
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
    unsigned int num,     //number inputed by user
                 sum=0,   //sum of number for 1-num
                 count=1; //counter 
            
    //Input or initialize values Here
    cout<<"This program will add up all of the numbers starting"<<endl;
    cout<<"from one to any number you choose."<<endl;
    cout<<"Choose a positive number."<<endl;
    cin>>num;
    //Process/Calculations Here
     do {
         sum=sum+count;
    }while(++count<=num);
    //Output Located Here
    cout<<"The sum of the number from 1 to "<<num<< " = "<<sum<<endl;

    //Exit
    return 0;
}
