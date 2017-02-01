/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on February 1, 2017, 12:16 PM
 * Purpose:  Find the Winning Sales Division
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int getsale(string);
void findHgh(int,int,int,int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int NEtot,//Sales total for the North East Division
        SEtot,//Sales total for the South East Division
        NWtot,//Sales total for the North West Division
        SWtot;//Sales total for the South West Division
    string SEdiv="South East",
           NEdiv="North East",
           SWdiv="South West",
           NWdiv="North West";
    //Input or initialize values Here
    cout<<"This program finds the winning sales division for the quarter"<<endl;
    //Process/Calculations Here
    NEtot=getsale(NEdiv);
    NWtot=getsale(NWdiv);
    SWtot=getsale(SWdiv);
    SEtot=getsale(SEdiv);
    //Output Located Here
    findHgh(NEtot,SEtot,NWtot,SWtot);

    //Exit
    return 0;
}

int getsale(string division){
    int sales;
    cout<<"Enter the Number of Sales of the "<<division<<" division."<<endl;
    cin>>sales;
    if (sales<0){
        cout<<"Invalid Entry"<<endl;
        return 0;
    }
    return sales;
}

void findHgh(int NE,int SE,int NW,int SW){
    if(NE>SE&&NE>SW&&NE>NW){
        cout<<"The North East Division has the most sales"<<endl;
        cout<<"this quarter with "<<NE<<" total sales."<<endl;
        return;
    }
    
    if(NW>SE&&NW>SW&&NW>NE){
        cout<<"The North West Division has the most sales"<<endl;
        cout<<"this quarter with "<<NW<<" total sales."<<endl;
        return;
    }
    
    if(SE>NW&&SE>SW&&SE>NE){
        cout<<"The South East Division has the most sales"<<endl;
        cout<<"this quarter with "<<SE<<" total sales."<<endl;
        return;
    }
    
    if(SW>SE&&SW>NE&&SW>NW){
        cout<<"The South West Division has the most sales"<<endl;
        cout<<"this quarter with "<<SW<<" total sales."<<endl;
        return;
    }
}
