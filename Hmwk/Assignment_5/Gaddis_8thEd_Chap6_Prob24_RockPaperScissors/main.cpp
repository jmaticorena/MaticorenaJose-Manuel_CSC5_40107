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
string cnvrNum(int);//Convert Computer Choice to String
//Program Execution Begins Here
int main(int argc, char** argv) {
    //set random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    string chceStr, //Player Choice String
           comStr;    //Computer String
    bool win=false;   //Player win true or false
    int compNum,      //Computer Choice 1=Rock 2=Paper 3=Scissors
        chocNum;      //Player choice in Number
    //Input or initialize values Here
    cout<<"Welcome to the Rock, Paper, Scissors Program."<<endl;
    cout<<"Enter your choice and see if you can beat me."<<endl;
    //Process/Calculations Here
    do{
        cout<<"Enter 1 for rock, 2 for paper, or 3 for scissors."<<endl;
        cin>>chocNum;
        compNum=shoot();
        comStr=cnvrNum(compNum);
    switch(chocNum){
        case 1:{
            cout<<"You picked Rock and the computer chose "<<comStr<<endl;
            if(compNum==1){
                cout<<"It is a draw. Try again."<<endl<<endl;
            }
            if(compNum==2){
                cout<<"You lose. Try again."<<endl<<endl;
            }
            if(compNum==3){
                cout<<"You win!"<<endl;
                win=true;
            }
            break;
        }
        case 2:{
            cout<<"You picked Paper and the computer chose "<<comStr<<endl;
            if(compNum==2){
                cout<<"It is a draw. Try again."<<endl<<endl;
            }
            if(compNum==3){
                cout<<"You lose. Try again."<<endl<<endl;
            }
            if(compNum==1){
                cout<<"You win!"<<endl;
                win=true;
            }
            break;
        }
        case 3:{
            cout<<"You picked Scissors and the computer chose "<<comStr<<endl;
            if(compNum==3){
                cout<<"It is a draw. Try again."<<endl<<endl;
            }
            if(compNum==1){
                cout<<"You lose. Try again."<<endl<<endl;
            }
            if(compNum==2){
                cout<<"You win!"<<endl;
                win=true;
            }
            break;
        }
        default :{
            cout<<"Invalid Entry"<<endl; break;
        }
        cout<<endl;
    }
    }while(win==false);
    //Output Located Here
    

    //Exit
    return 0;
}

int shoot(){
    int choice;
    choice=rand()%3+1;
    return choice;
}

string cnvrNum(int num){
    string out;
    switch(num){
        case 1: out="Rock";break;
        case 2: out="Paper";break;
        case 3: out="Scissors";break;
        default:break;
    }
    return out;
}
