/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on February 2, 2017 1:27 PM
 * Purpose:  Rock Paper Scissors Game
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int shoot();//Generate Computer Move
string cnvrt(int);//Convert Computer Choice to String
//Program Execution Begins Here
int main(int argc, char** argv) {
    //set random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    string choiceStr, //Player Choice
           comStr; //Computer String
    bool win=false;//Player win true or false
    int comp;      //Computer Choice 1=Rock 2=Paper 3=Scissors
    //Input or initialize values Here
    cout<<"Welcome to the Rock, Paper, Scissors Program."<<endl;
    cout<<"Enter your choice and see if you can beat me."<<endl;
    cout<<"Enter your choice of rock, paper, or scissors."<<endl;
    cin>>choice;
    //Process/Calculations Here
    do{
        comp=shoot();
        comStr=cnvrt(comp);
    switch(choice){
        case "rock":{
            cout<<"You picked "<<choice<<" and the computer chose "<<comStr<<endl;
            if(comp==1){
                cout<<"It is a draw. Try again."<<endl;
            }
            if(comp==2){
                cout<<"You lose. Try again."<<endl;
            }
            if(comp==3){
                cout<<"You win!"<<endl;
                win=true;
            }
            break;
        }
        case "paper":{
            cout<<"You picked "<<choice<<" and the computer chose "<<comStr<<endl;
            if(comp==2){
                cout<<"It is a draw. Try again."<<endl;
            }
            if(comp==3){
                cout<<"You lose. Try again."<<endl;
            }
            if(comp==1){
                cout<<"You win!"<<endl;
                win=true;
            }
            break;
        }
        case "scissors":{
            cout<<"You picked "<<choice<<" and the computer chose "<<comStr<<endl;
            if(comp==3){
                cout<<"It is a draw. Try again."<<endl;
            }
            if(comp==1){
                cout<<"You lose. Try again."<<endl;
            }
            if(comp==2){
                cout<<"You win!"<<endl;
                win=true;
            }
            break;
        }
        default :{
            cout<<"Invalid Entry"<<endl; break;
        }
    }
    }while(win=false);
    //Output Located Here
    

    //Exit
    return 0;
}

int shoot(){
    int choice;
    choice=rand()%3+1;
    return choice;
}

string cnvrt(int num){
    string out;
    switch(num){
        case '1': out="Rock";break;
        case '2': out="Paper";break;
        case '3': out="Scissors";break;
        default:break;
    }
}