/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 11, 2017, 1:30 PM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string name,city,college,prfsn,animal,pet;
    unsigned short age;
    //Input or initialize values Here
    cout<<"This Program will tell you a story."<<endl;
    cout<<"Please enter all of the following information about yourself."<<endl;
    cout<<"Please enter your name."<<endl;
    getline(cin,name);
    cout<<"Please enter your age."<<endl;
    cin>>age;
    cin.ignore();
    cout<<"Please enter your city in which you live."<<endl;
    getline(cin,city);
    cout<<"Please enter your college you attend."<<endl;
    getline(cin,college);
    cout<<"Please enter your profession."<<endl;
    getline(cin,prfsn);
    cout<<"Please enter your favorite animal."<<endl;
    getline(cin,animal);
    cout<<"Please enter your pet's name."<<endl;
    getline(cin,pet);
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"There once was a person named "<<name<<" who lived in "<<city<<". "<<endl;
    cout<<"At the age of "<<age<<" "<<name<<" went to college at "<<college<<". "<<endl;
    cout<<name<<" graduated and went to work as a "<<prfsn<<". "<<endl;
    cout<<"Then, "<<name<<" adopted a(n) "<<animal<<" named "<<pet<<"."<<endl; 
    cout<<"They both lived happily ever after!"<<endl;

    //Exit
    return 0;
}

