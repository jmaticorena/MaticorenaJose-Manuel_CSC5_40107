/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 24, 2017, 12:17 PM
 * Purpose: Display a Pattern Using a loop
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
    unsigned int dim;//Dimensions of square
    //Input
    //cout<<"This program creates square matrix of"<<endl;
    //cout<<"dimensions of your choosing."<<endl;
    
    cout<<"Input a positive Integer from 1-50"<<endl;
    cin>>dim;
    //Processes of mapping inputs to outputs
    for (int loop=1;loop<=dim;loop++){ //Loop for Rows
        for (int X=1;X<=dim;X++){ //Loop for displaying X's
            cout<<"x";
        }
        cout<<endl;
    }
    //Exit
    return 0;
}

