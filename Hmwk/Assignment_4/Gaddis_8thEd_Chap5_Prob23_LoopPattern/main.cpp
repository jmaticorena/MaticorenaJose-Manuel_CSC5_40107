/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 19, 2017, 1:27 PM
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
    int numPlus=1;//number of stars initialized
    int row=10; //number of rows
    //Pattern A
    cout<<"--Pattern A--"<<endl;
    for (int loop=1;loop<=row;loop++){ //Loop for Rows
        for (int Plus=1;Plus<=numPlus;Plus++){ //Loop to display Pluses
            cout<<"+";
        }
        numPlus++;
        cout<<endl;
    }
    cout<<"--Pattern B--"<<endl;;//Space Between Pattern A and B
    //Pattern B
    numPlus=1; //numPlus reinitialized
     for (int loop=1;loop<=row;loop++){//Loop for Rows
        for (int Plus=10;Plus>=numPlus;Plus--){//Loop to display Pluses
            cout<<"+";
        }
        numPlus++;
        cout<<endl;
    }
   

    //Exit
    return 0;
}

