/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on January 27, 2017, 11:10 AM
  Purpose: Midterm Menu
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
#include <cstring> //String Library
#include <cmath>   //Math Library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
float kntcNRG(float,float);
float futVal(float,float,int);//Future Value of the account
float getretail(float,float);
int getsale(string);
void findHgh(int,int,int,int);
int getAdts(string);
void fndlow(int,int,int,int,int);
float celsius(float);
string toss();
float presVal(float,float,int);//Future Value of the account
int shoot();//Generate Computer Move
string cnvrNum(int);//Convert Computer Choice to String
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
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{prob1();break;}
            case '2':{prob2();break;}
            case '3':{prob3();break;}
            case '4':{prob4();break;}
            case '5':{prob5();break;}
            case '6':{prob6();break;}
            case '7':{prob7();break;}
            case '8':{prob8();break;}
            case '9':{prob9();break;}
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}

void prob1(){
    cout<<"Inside Problem 1 function"<<endl;
    cout<<"Gaddis Chapter 6 Problem 6"<<endl;
    //declare variables
    float Energy, //Kinetic Energy of the function in Joules
          mass,   //Mass of the object in Kilograms
          velocty;//Velocity in m/s
    
    //Input Values
    cout<<"This program calculates the kinetic energy of a moving object."<<endl;
    cout<<"Enter the objects mass in kg."<<endl;
    cin>>mass;
    cout<<"Enter the objects velocity in m/s"<<endl;
    cin>>velocty;
    //Process by mapping inputs to outputs
    Energy=kntcNRG(mass,velocty);
    //Output values
    cout<<"The objects mass is "<<mass<<" kg."<<endl;
    cout<<"The objects velocity is "<<velocty<<" m/s"<<endl;
    cout<<"The objects kinetic energy is "<<Energy<<" J"<<endl;
    //Exit Stage right!
    
}

float kntcNRG(float m,float v){
    float nrg;
   return nrg=.5*m*v*v;  
}

void prob2(){
    cout<<"Inside Problem 2 function"<<endl;
    cout<<"Gaddis Chapter 6 Problem 10"<<endl;
    //Declare Variables
    float pv,   //Present Value in Dollars
          iRate;//Monthly Interest Rate in Percent
    int nMonths;//Number of Months
    
    //Input values
    cout<<"This program calculates the future value of your savings account."<<endl;
    cout<<"Please enter the present value of the savings account."<<endl;
    cin>>pv;
    cout<<"Please enter the monthly interest rate in percent."<<endl;
    cin>>iRate;
    cout<<"Please enter the number of months."<<endl;
    cin>>nMonths;
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"Present value = $"<<pv<<endl;
    cout<<"Interest rate = "<<iRate<<"%"<<endl;
    cout<<"Number of Months = "<<nMonths<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Savings after "<<nMonths<<" months = $"<<futVal(pv,iRate,nMonths)<<endl;
    
    //Exit stage right!
    
}

float futVal(float p,float i,int n){
    return p*pow(1+(i/100),n);
}

void prob3(){
    cout<<"Inside Problem 3 function"<<endl;
    cout<<"Gaddis Chapter 6 Problem 1"<<endl;
    //declare variables
    float price;  //wholesale price in $
    float markup; //Markup percentage
    float rtlprce;//retail price
    //Input Values
    cout<<"This program calculates the retail price of an item."<<endl;
    cout<<"Enter the items wholesale cost."<<endl;
    cin>>price;
    cout<<"Enter the item's mark up percentage."<<endl;
    cin>>markup;
    //Process by mapping inputs to outputs
    rtlprce=getretail(price,markup);
    //Output values
    cout<<setprecision(2)<<fixed;
    cout<<"The wholesale cost is $"<<price<<endl;
    cout<<"The mark up percentage is "<<markup<<"%."<<endl;
    cout<<"The retail price of the item is $"<<rtlprce<<endl;
    //Exit Stage right!   
}

float getretail(float p, float m){
    float retail;
    retail=p+(p*(m/100.0));
    return retail;
}

void prob4(){
    cout<<"Inside Problem 4 function"<<endl;
    cout<<"Gaddis Chapter 6 Problem 3"<<endl;
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


void prob5(){
    cout<<"Inside Problem 5 function"<<endl;
    cout<<"Gaddis Chapter 6 Problem 4"<<endl;
    //Declare all Variables Here
    int Ntot,//Total Number of Accidents for North Region
        Stot,//Total Number of Accidents for South Region
        Etot,//Total Number of Accidents for East Region
        Ctot,//Total Number of Accidents for Central Region
        Wtot;//Total Number of Accidents for West Region
    string Sreg="South",
           Nreg="North",
           Ereg="East",
           Wreg="West",
           Creg="Central";
    //Input or initialize values Here
    cout<<"This program finds the safest driving area in the city"<<endl;
    //Process/Calculations Here
    Ntot=getAdts(Nreg);
    Stot=getAdts(Sreg);
    Etot=getAdts(Ereg);
    Wtot=getAdts(Wreg);
    Ctot=getAdts(Creg);
    //Output Located Here
    fndlow(Ntot,Stot,Wtot,Etot,Ctot);

    //Exit
}

int getAdts(string region){
    int Accdnts;
    cout<<"Enter the Number of Accidents for the "<<region<<" region."<<endl;
    cin>>Accdnts;
    if (Accdnts<0){
        cout<<"Invalid Entry"<<endl;
        return 0;
    }
    return Accdnts;
}

void fndlow(int N,int S,int W,int E,int C){
    if(N<S&&N<W&&N<E&&N<C){
        cout<<"The North Region has the least number of accidents"<<endl;
        cout<<"with only "<<N<<" accidents."<<endl;
        return;
    }
    
    if(C<S&&C<W&&C<E&&C<N){
        cout<<"The Central Region has the least number of accidents"<<endl;
        cout<<"with only "<<C<<" accidents."<<endl;
        return;
    }
    
    if(S<N&&S<W&&S<E&&S<C){
        cout<<"The South Region has the least number of accidents"<<endl;
        cout<<"with only "<<S<<" accidents."<<endl;
        return;
    }
    
    if(W<S&&W<N&&W<E&&W<C){
        cout<<"The West Region has the least number of accidents"<<endl;
        cout<<"with only "<<W<<" accidents."<<endl;
        return;
    }
    
    if(E<S&&E<W&&E<N&&E<C){
        cout<<"The East Region has the least number of Accidents"<<endl;
        cout<<"with only "<<E<<" Accidents."<<endl;
        return;
    }
}


void prob6(){
    cout<<"Inside Problem 6 function"<<endl;
    cout<<"Gaddis Chapter 6 Problem 7"<<endl;
     //declare variables
    float tempC, //temperature in Celsius 
          tempF; //temperature in Fahrenheit to be converted
    //Input Values
   
    //Process by mapping inputs to outputs
    cout<<"Fahrenheit               Celsius"<<endl;
    for(tempF=0;tempF<=20;tempF++){
      tempC=celsius(tempF);
      cout<<setprecision(2)<<fixed;
      cout<<setw(7)<<tempF<<"                 "<<setw(7)<<tempC<<endl;
      
    }
    //Output values
    //Exit Stage right!
}

float celsius(float inTemp){
    float outTemp;
    return outTemp=(5/9.0)*(inTemp-32); 
}

void prob7(){
    cout<<"Inside Problem 7 function"<<endl;
    cout<<"Gaddis Chapter 6 Problem 8"<<endl;
    //Set the Random Number Generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    int nToss;//Number of Times Coin is to be tossed
    //Input or initialize values Here
    cout<<"This program tosses a coin."<<endl;
    cout<<"How many times would you like to toss it?"<<endl;
    cin>>nToss;
    //Process/Calculations Here
    for(int i=1;i<=nToss;i++){
      cout<<"Toss number "<<i<<" is "<<toss()<<endl;  
    }

    //Exit
}

string toss(){
    int toss=rand()%2+1;//Random Number Between 1 and 2
    string result;
    if(toss==1){
        result="HEADS";
    }
    
    if(toss==2){
        result="TAILS";
    }
    return result;
}

void prob8(){
    cout<<"Inside Problem 8 function"<<endl;
    cout<<"Gaddis Chapter 6 Problem 9"<<endl;
    //Declare Variables
    float fv,   //Present Value in Dollars
          iRate;//Annual Rate in Percent
    int nYears;//Number of Years
    
    //Input values
    cout<<"This program calculates the amount needed"<<endl;
    cout<<"in your savings account to achieve a desired future amount."<<endl;
    cout<<"Please enter the future value desired."<<endl;
    cin>>fv;
    cout<<"Please enter the annual interest rate in percent."<<endl;
    cin>>iRate;
    cout<<"Please enter the number of years you wish to save."<<endl;
    cin>>nYears;
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"Future value desired = $"<<fv<<endl;
    cout<<"Annual Interest rate = "<<iRate<<"%"<<endl;
    cout<<"Number of Years = "<<nYears<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"It will require $"<<presVal(fv,iRate,nYears)<<" initially"<<endl;
    cout<<"to save $"<<fv<<" after "<<nYears<<" years."<<endl;
    

    //Exit stage right!
    
}

float presVal(float f,float i,int n){
    return f/(pow(1+(i/100),n));
}

void prob9(){
    cout<<"Inside Problem 9 function"<<endl;
    cout<<"Gaddis Chapter 6 Problem 24"<<endl;
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
    //Exit
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
