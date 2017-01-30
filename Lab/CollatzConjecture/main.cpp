/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 30, 2017, 12:21 PM
 * Purpose:  Collatz Conjecture Program
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
    int Number;
    int elemnts=1;
    const int size=1000;
    int collatz[size];
    //Input or initialize values Here
    cout<<"This program executes the Collatz Series"<<endl;
    cout<<"Enter a value"<<endl;
    cin>>Number;
    //Process/Calculations Here
    
    //Inputing first number to array
     collatz[elemnts-1]=Number;
     cout<<collatz[elemnts-1]<<" ";
    do{
        if (Number%2==0){//Divide by 2
            Number/=2;
        }
        else {
            Number=(Number*3)+1;//3n+1
        }
        collatz[elemnts]=Number;//Inputing Value to Array
        cout<<collatz[elemnts]<<" ";//Ouput Array
        elemnts++;
    }while(Number!=1);
    cout<<endl<<"Length of series= "<<elemnts;
    
    //Output Located Here

    //Exit
    return 0;
}

