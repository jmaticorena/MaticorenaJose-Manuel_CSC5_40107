/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on January 25, 2017, 8:51 PM
  Purpose: Midterm Problem 3 Check
 */
//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//user Libraries

//Global Constants
//Such as Pi, speed of light -> Math/science values
//as well as conversions from system of units to another
const int THOSNDS=1000;//Conversion to 1,000
const int HUNDRDS=100; //Conversion to   100
const int TENS=10;     //Conversion to    10

//Function Prototypes
string cnvrt(unsigned short);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //declare variables
    string date,payee,actHldr;
    unsigned short amount;
    //Input Values
    cout<<"This program will output a check with the information inputted"<<endl;
    cout<<"Input the date in the format of mm/dd/yy"<<endl;
    cin>>date;
    cin.ignore();//Ignore the enter key
    cout<<"Input the name of the payee of the check."<<endl;
    getline(cin,payee);//Get entire string
    cout<<"Input an amount between $1 and $1999."<<endl;
    cin>>amount;
    cin.ignore();//Ignore the enter key
    cout<<"Input the name of the account holder."<<endl;
    getline(cin,actHldr);//Get entire string
    cout<<endl;
    
    //Output the check
    cout<<actHldr<<endl;
    cout<<"STREET ADDRESS"<<endl;
    cout<<"CITY, STATE ZIP                                 Date:  "<<date<<endl;
    cout<<endl;
    cout<<"Pay to the Order of:  "<<payee<<"                $ "<<amount<<".00"<<endl;
    cout<<endl;
    cout<<cnvrt(amount)<<endl;
    cout<<endl;
    cout<<"BANK OF CSC5"<<endl;
    cout<<endl;
    cout<<"FOR:  GOTTA PAY THE RENT                        "<<actHldr<<endl;    

    //Exit stage right!
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************** Number to Word Conversion *******************************
//Description:  Writes out dollar amount from 1-1999 
//Inputs:
//     year -> Amount from 1 to 1999
//Outputs:
//     amount ->  Output to the amount written out
//******************************************************************************
string cnvrt(unsigned short amount){
    //Declare variables
    char n1000,n100,n10,n1;//The number of powers of 10
    string amntWrd="";
    
    //Parsing the amount information
    n1000=(amount-amount%THOSNDS)/THOSNDS;//Determines how many 1000's
    amount =(amount-n1000*THOSNDS);       //Amount without 1000's
    n100 =(amount-amount%HUNDRDS)/HUNDRDS;//Determines how many 100's
    amount =(amount-n100*HUNDRDS);        //Amount without 100's
    n10  =(amount-amount%TENS)/TENS;      //Determines how many 10's
    n1   =(amount-n10*TENS);            //Amount without 10's
    
    //Fill the string with Thousands
    switch(n1000){
        case 1:amntWrd+="One Thousand ";break;
        default:amntWrd+="Invalid amount";
    
            //Return the String
            return amntWrd;
    }
    
    //Fill the string with Hundreds
    switch(n100){
        case 9:amntWrd+="Nine Hundred ";break;
        case 8:amntWrd+="Eight Hundred ";break;
        case 7:amntWrd+="Seven Hundred ";break;
        case 6:amntWrd+="Six Hundred ";break;
        case 5:amntWrd+="Five Hundred ";break;
        case 4:amntWrd+="Four Hundred ";break;
        case 3:amntWrd+="Three Hundred ";break;
        case 2:amntWrd+="Two Hundred ";break;
        case 1:amntWrd+="One Hundred ";break;
        case 0:break;
        default:cout<<"Invalid amount"<<endl;
    }
    
    //Fill the string with Tens
    switch(n10){
        case 9:amntWrd+="Ninety ";break;
        case 8:amntWrd+="Eighty ";break;
        case 7:amntWrd+="Seventy ";break;
        case 6:amntWrd+="Sixty ";break;
        case 5:amntWrd+="Fifty ";break;
        case 4:amntWrd+="Forty ";break;
        case 3:amntWrd+="Thirty ";break;
        case 2:amntWrd+="Twenty ";break;
        case 1:
            switch(n1){//Switch for the teen's
                case 9:amntWrd+="Nineteen ";break;
                case 8:amntWrd+="Eighteen ";break;
                case 7:amntWrd+="Seventeen ";break;
                case 6:amntWrd+="Sixteen ";break;
                case 5:amntWrd+="Fifteen ";break;
                case 4:amntWrd+="Fourteen ";break;
                case 3:amntWrd+="Thirteen ";break;
                case 2:amntWrd+="Twelve ";break;
                case 1:amntWrd+="Eleven ";break;
                case 0:amntWrd+="Ten ";break;
                default:cout<<"Invalid amount"<<endl;
            }
            amntWrd+="and no/100s Dollars";
    
            //Return the String
            return amntWrd;
            
        case 0:break;
        default:cout<<"Invalid Amount"<<endl;
    }
    
    //Fill the string with Ones
    
        switch(n1){
            case 9:amntWrd+="Nine ";break;
            case 8:amntWrd+="Eight ";break;
            case 7:amntWrd+="Seven ";break;
            case 6:amntWrd+="Six ";break;
            case 5:amntWrd+="Five ";break;
            case 4:amntWrd+="Four ";break;
            case 3:amntWrd+="Three ";break;
            case 2:amntWrd+="Two ";break;
            case 1:amntWrd+="One ";break;
            case 0:break;
            default:cout<<"Invalid amount"<<endl;
        }
    
    amntWrd+="and no/100s Dollars";//Include the end
    
    //Return the String
    return amntWrd;
}
