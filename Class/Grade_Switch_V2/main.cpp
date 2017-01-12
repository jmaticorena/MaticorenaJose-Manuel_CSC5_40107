/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 12, 2017, 11:21
 * Purpose: Calculate the grade using Switch Case
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
    unsigned short score,test;
    char grade;
    //Input or initialize values Here
    cout<<"This program takes the score and outputs the grade."<<endl;
    cout<<"Input the score 0 to 100"<<endl;
    cin>>score;
    //Process/Calculations Here
    switch(score){
        case 100:
        case  99:
        case  98:
        case  97:
        case  96:
        case  95:grade='A';break;
        case  94:
        case  93:
        case  92:
        case  91:
        case  90:
        case  89:
        case  88:
        case  87:grade='B';break;
        case  86:
        case  85:
        case  84:
        case  83:
        case  82:
        case  81:
        case  80:grade='C';break;
        case  79:
        case  78:
        case  77:
        case  76:
        case  75:grade='D';break;
        default:grade='F';
    }
                        
    //Output Located Here
    cout<<"Your score of "<<score<<" = "<<grade<<endl;
    //Exit
    return 0;
}

