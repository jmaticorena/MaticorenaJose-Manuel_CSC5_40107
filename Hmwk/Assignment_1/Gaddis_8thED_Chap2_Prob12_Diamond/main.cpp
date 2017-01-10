/* 
 * File:   main.cpp
 * Author:Josemanuel Maticorena
 * Created on January 9, 2017, 8:05 PM
 * Purpose:  To output a diamond
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
    cout<<"This program outputs a diamond"<<endl;
    cout<<"with any character you choose. "<<endl;
    cout<<"Input the character would you like."<<endl;
    cin>>c;
    //Process/Calculations Here
    
    //Output Located Here
    cout<<endl<<"A diamond with "<<c<<endl<<endl;
    cout<<"   "<<c<<"   "<<endl;
    cout<<"  "<<c<<c<<c<<"  "<<endl;
    cout<<" "<<c<<c<<c<<c<<c<<" "<<endl;
    cout<<c<<c<<c<<c<<c<<c<<c<<endl;
    cout<<" "<<c<<c<<c<<c<<c<<" "<<endl;
    cout<<"  "<<c<<c<<c<<"  "<<endl;
    cout<<"   "<<c<<"   "<<endl;
    //Exit
    return 0;
}

