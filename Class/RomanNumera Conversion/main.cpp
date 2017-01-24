/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 24, 2017, 10:57 AM
 * Purpose:  Convert Roman Numerals
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int THOSNDS=1000;//Conversion to 1,000
const int HUNDRDS=100; //Conversion to   100
const int TENS=10;     //Conversion to    10

//Function Prototypes Here
string cnvrtRN(unsigned short);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short year;
    string roman;
    //Input or initialize values Here
    cout<<"This program converts years from Arabic to Roman numerals"<<endl;
    cout<<"Input a year between 1000AD to 3000AD"<<endl;
    cin>>year;
    roman=cnvrtRN(year);
    //Process/Calculations Here
    cout<<year<<" = "<<roman;
    //Output Located Here
   

    //Exit
    return 0;
}
//000000001111111111222222222233333333334444444444555555555566666666667777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//************************* Roman Numeral Conversion ***************************
//Description: convert numbers from 1000 to 3000
//Inputs:
//    years
string cnvrtRN(unsigned short year){
    //Declare Variables
    char n1000,n100,n10,n1;//The number of power of 10
    string roman="";
    //Parsing the Year Information
    n1000=(year-year%THOSNDS)/THOSNDS;//Determines how many 1000's
    year =(year-n1000*THOSNDS);       //Year without 1000's
    n100 =(year-year%HUNDRDS)/HUNDRDS;//Determines how many 100's
    year =(year-n100*HUNDRDS);       //Year without 100's
    n100 =(year-year%TENS)/TENS;//Determines how many 100's
    n1   =(year-n10*TENS);       //Year without 10's
    
    //Fill the string with M's
    switch(n1000){
        case 3:roman+='M';
        case 2:roman+='M';
        case 1:roman+='M';break;
        default:cout<<"Bad Year"<<endl;
    }
    
    switch(n100){
        case 9:roman+='M';
        case 8:roman+='M';
        case 7:roman+='M';
        case 6:roman+='M';
        case 5:roman+='M';
        case 4:roman+='M';
        case 3:roman+='M';
        case 2:roman+='M';
        case 1:roman+='M';break;
        case 0:break;
        default:cout<<"Bad Year"<<endl;
    }
    return roman;
    
}
