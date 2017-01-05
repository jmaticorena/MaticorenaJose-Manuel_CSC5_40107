/* 
 * File:   main.cpp
 * Author:Josemanuel Maticorena
 * Created on January 5, 2017, 12.25 PM
 * Purpose:  To output a large letter C 
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
    char c;//Variable to build Big C with
    //Input or initialize values Here
    cout<<"This program outputs a large C"<<endl;
    cout<<"with a letter you choose "<<endl;
    cout<<"What letter would you like?"<<endl;
    cin>>c;
    //Process/Calculations Here
    
    //Output Located Here
    cout<<endl<<"A big letter C with "<<c<<endl<<endl;
    cout<<"  "<<c<<c<<c<<endl;
    cout<<" "<<c<<"   "<<c<<endl;
    cout<<c<<"    "<<endl;
    cout<<c<<"    "<<endl;
    cout<<c<<"    "<<endl;
    cout<<c<<"    "<<endl;
    cout<<c<<"    "<<endl;
    cout<<c<<"    "<<endl;
    cout<<" "<<c<<"   "<<c<<endl;
    cout<<"  "<<c<<c<<c<<endl;
    //Exit
    return 0;
}

