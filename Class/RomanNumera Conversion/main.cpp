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
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************** Roman Numeral Conversion ********************************
//Description:  Convert numbers from 1000 to 3000
//Inputs:
//     year -> Year from 1000 to 3000
//Outputs:
//     romanYr ->  Output to the 
//******************************************************************************
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
    
     //Fill the string with C's
    switch(n100){
        case 9:roman+="CM";break;
        case 8:roman+="DCCC";break;
        case 7:roman+="DCC";break;
        case 6:roman+="DC";break;
        case 5:roman+="D";break;
        case 4:roman+="CD";break;
        case 3:roman+='C';
        case 2:roman+='C';
        case 1:roman+='C';break;
        case 0:break;
        default:cout<<"Bad Year"<<endl;
    }
    
     //Fill the string with X's
    switch(n10){
        case 9:roman+="XC";break;
        case 8:roman+="LXXX";break;
        case 7:roman+="LXX";break;
        case 6:roman+="LX";break;
        case 5:roman+="L";break;
        case 4:roman+="XL";break;
        case 3:roman+='X';
        case 2:roman+='X';
        case 1:roman+='X';break;
        case 0:break;
        default:cout<<"Bad Year"<<endl;
    }
    
    //Fill the string with I's
    switch(n1){
        case 9:roman+="IX";break;
        case 8:roman+="VIII";break;
        case 7:roman+="VII";break;
        case 6:roman+="VI";break;
        case 5:roman+="V";break;
        case 4:roman+="IV";break;
        case 3:roman+='I';
        case 2:roman+='I';
        case 1:roman+='I';break;
        case 0:break;
        default:cout<<"Bad Year"<<endl;
    }
    //Return String
    return roman;
    
}
