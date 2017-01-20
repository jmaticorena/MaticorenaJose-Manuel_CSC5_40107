/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on January 20, 2017, 8:35 AM
  Purpose:  Menu Program for Assignment 4
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
#include <cmath>   //Power Function Library

using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Problem 1"<<endl;
        cout<<"Type 2 for Problem 2"<<endl;
        cout<<"Type 3 for Problem 3"<<endl;
        cout<<"Type 4 for Problem 4"<<endl;
        cout<<"Type 5 for Problem 5"<<endl;
        cout<<"Type 6 for Problem 6"<<endl;
        cout<<"Type 7 for Problem 7"<<endl;
        cout<<"Type 8 for Problem 8"<<endl;
        cout<<"Type 9 for Problem 9"<<endl;
        cout<<"Type anything else to exit the program"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                cout<<"We are in Problem 1"<<endl;
                cout<<"Problem 12 from Chapter 5 Gaddis 8th Edition"<<endl;
                
                //declare variables
                float tempC, //temperature in Celsius to be converted
                      tempF; //temperature in Fahrenheit
                //Input Values

                //Process by mapping inputs to outputs
                cout<<"This program creates a table of Celsius and Fahrenheit conversions"<<endl;
                cout<<"Celsius            Fahrenheit"<<endl;
                for(tempC=0;tempC<=20;tempC++){
                  cout<<setprecision(2)<<fixed;
                  tempF=9*tempC/5+32;  
                  cout<<tempC<<"                 "<<tempF<<endl;

                }
                //Output values
                //Exit Stage right!
                
                break;
            }
            case '2':{
                cout<<"We are in Problem 2"<<endl;
                cout<<"Problem 1 from Chapter 5 Gaddis 8th Edition"<<endl;
                
                //Declare all Variables Here
                unsigned int num,     //number inputed by user
                             sum=0,   //sum of number for 1-num
                             count=1; //counter 

                //Input or initialize values Here
                cout<<"This program will add up all of the numbers starting"<<endl;
                cout<<"from one to any number you choose."<<endl;
                cout<<"Choose a positive number."<<endl;
                cin>>num;
                //Process/Calculations Here
                 do {
                     sum=sum+count;
                }while(++count<=num);
                //Output Located Here
                cout<<"The sum of the number from 1 to "<<num<< " = "<<sum<<endl;

                //Exit
                
                break;
            }
            case '3':{
                cout<<"We are in Problem 3"<<endl;
                cout<<"Problem 20 from Chapter 5 Gaddis 8th Edition"<<endl;
                
                //Set the random number generator
                srand(static_cast<unsigned int>(time(0)));
                //Declare all Variables Here
                unsigned int num=rand()%99+1; //Random number
                unsigned int guess;           //User Guess
                //Input or initialize values Here
                cout<<"This program generates a number at random from 1-100."<<endl;
                cout<<"Try and guess the number."<<endl;
                cout<<"Enter your guess."<<endl;
                //Process/Calculations Here
                do {
                    cin>>guess;
                    if (num>guess){
                        cout<<"Your number is too low. Try again."<<endl;
                    }
                    else if (num<guess){
                        cout<<"Your number is too high. Try again."<<endl;
                    }
                } while(guess!=num);
                //Output Located Here
                cout<<"Congratulations! You guessed the number! "<<endl;
                cout<<"The number was "<<num<<endl;
                cout<<"Your guess was "<<guess<<endl;

                //Exit
                
                break;
            }
            case '4':{
                cout<<"We are in Problem 4"<<endl;
                cout<<"Problem 21 from Chapter 5 Gaddis 8th Edition"<<endl;
                
                //Set the random number generator
                srand(static_cast<unsigned int>(time(0)));
                //Declare all Variables Here
                unsigned int num=rand()%99+1, //Random number
                             guess,           //User Guess
                             count=0;         //Counter
                //Input or initialize values Here
                cout<<"This program generates a number at random from 1-100."<<endl;
                cout<<"Try and guess the number."<<endl;
                cout<<"Enter your guess."<<endl;
                //Process/Calculations Here
                do {
                    cin>>guess;
                        if (num>guess){
                            cout<<"Your number is too low. Try again."<<endl;
                        }
                        else if (num<guess){
                            cout<<"Your number is too high. Try again."<<endl;
                        }
                  count++; //Increment the counter
                } while(guess!=num);
                //Output Located Here
                cout<<"Congratulations! You guessed the number! "<<endl;
                cout<<"Your guess was "<<guess<<endl;
                cout<<"The number was "<<num<<endl;
                cout<<"Number of attempts: "<<count<<endl;

                //Exit
                
                break;
            }
            case '5':{
                cout<<"We are in Problem 5"<<endl;
                cout<<"Problem 22 from Chapter 5 Gaddis 8th Edition"<<endl;
                
                //Declare all Variables Here
                int dim;//Dimensions of square
                //Input
                cout<<"This program creates square matrix of"<<endl;
                cout<<"dimensions of your choosing."<<endl;
                cout<<"Input a positive Integer from 1-15"<<endl;
                cin>>dim;
                //Processes of mapping inputs to outputs
                for (int loop=1;loop<=dim;loop++){ //Loop for Rows
                    for (int X=1;X<=dim;X++){ //Loop for displaying X's
                        cout<<"x";
                    }
                    cout<<endl;
                }
                //Exit
                
                break;
            }
            case '6':{
                cout<<"We are in Problem 6"<<endl;
                cout<<"Problem 23 from Chapter 5 Gaddis 8th Edition"<<endl;
                
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
                
                break;
            }
            case '7':{
                cout<<"We are in Problem 7"<<endl;
                cout<<"Problem 2 from Chapter 5 Gaddis 8th Edition"<<endl;
                
                //declare variables
                int num=127;    //Number of iterations
                //Input Values

                //Process by mapping inputs to outputs
                cout<<"--ASCII Table--"<<endl;
                for(int ascii=0;ascii<num;ascii++){ //First 32 values might not display
                    cout<<static_cast<char>(ascii);
                    if (ascii%16==0){ //Display 16 characters per line
                        cout<<endl;   //Start new line
                    }
                }
                //Output values

                //Exit Stage right!
                
                break;
            }
            case '8':{
                cout<<"We are in Problem 8"<<endl;
                cout<<"Problem 6 from Chapter 5 Gaddis 8th Edition"<<endl;
                
                //declare variables
                float hours, //Hours Traveled
                      mph;          //Speed Traveled
                //Input Values
                cout<<"This program calculates and displays the distance traveled"<<endl;
                cout<<"for every hour traveled."<<endl;
                cout<<"Please enter the number of hours traveled."<<endl;
                cin>>hours;
                cout<<"Please enter the speed traveled in miles per hour."<<endl;
                cin>>mph;
                //Process by mapping inputs to outputs
                cout<<"Hour           Distance Traveled"<<endl;
                cout<<"--------------------------------"<<endl;
                for(int loop=1;loop<=hours;loop++){
                    float distnce=loop*mph;
                    cout<<loop<<"                      "<<distnce<<endl;
                }
                //Output values

                //Exit Stage right!
                
                break;
            }
            case '9':{
                cout<<"We are in Problem 9"<<endl;
                cout<<"Problem 7 from Chapter 5 Gaddis 8th Edition"<<endl;
                
                //Declare all Variables Here
                int salary=1,totPay=0,maxDays;//Salary and Pay in Pennies
                //Input or initialize values Here
                cout<<"Input the number of days worked with the salary."<<endl;
                cin>>maxDays;
                //Process/Calculations Here
                for(int day=1;day<=maxDays;day++,salary*=2){
                    int cents=salary%100;
                    int dollars=(salary-cents)/100;
                    totPay+=salary;
                    cout<<"Salary for day "<<day<<" = $"<<dollars<<"."
                            <<(cents<10?'0':'\0')<<cents<<endl<<endl;
                    cents=totPay%100;
                    dollars=(totPay-cents)/100;
                    cout<<"Total pay for day "<<day<<" = $"<<dollars<<"."
                            <<(cents<10?'0':'\0')<<cents<<endl<<endl;
                }
                   //Predicting the Result
                double salLDay=(pow(2,maxDays-1))/100;
                double totLDay=(pow(2,maxDays)-1)/100;
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<"Final salary predicted after "<<maxDays<<" days = $"<<salLDay<<endl;
                cout<<"Final Total Pay predicted after "<<maxDays<<" days = $"<<totLDay<<endl;
                //Exit
                
                break;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}