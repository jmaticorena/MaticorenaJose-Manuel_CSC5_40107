/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on January 25, 2017, 8:22 PM
  Purpose: Midterm Problem 2
 */
//System Libraries
#include <iostream>
using namespace std;

//user Libraries

//Global Constants
//Such as Pi, speed of light -> Math/science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //declare variables
   char first, second,third,fourth;
    //Input Values
   cout<<"Input four digits"<<endl;
   cin>>first>>second>>third>>fourth;
   //Fourth value
   cout<<fourth<<" ";
   if (fourth<=57&&fourth>=48){
       fourth-=48;
       for(int loop=1;loop<=fourth;loop++){
           cout<<"*";
       }
       cout<<endl;
   }
   else{
       cout<<"?"<<endl;
   }
   //Third value
   cout<<third<<" ";
   if (third<=57&&third>=48){
       third-=48;
       for(int loop=1;loop<=third;loop++){
           cout<<"*";
       }
       cout<<endl;
   }
   else{
       cout<<"?"<<endl;
   }
   //Second value
   cout<<second<<" ";
   if (second<=57&&second>=48){
       second-=48;
       for(int loop=1;loop<=second;loop++){
           cout<<"*";
       }
       cout<<endl;
   }
   else{
       cout<<"?"<<endl;
   }
    //First value
   cout<<first<<" ";
   if (first<=57&&first>=48){
       first-=48;
       for(int loop=1;loop<=first;loop++){
           cout<<"*";
       }
       cout<<endl;
   }
   else{
       cout<<"?"<<endl;
   }
    //Output values
    
    //Exit Stage right!
    return 0;
}

