/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on February 1, 2017, 12:56 PM
 * Purpose:  find the Safest Driving Area
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int getAdts(string);
void fndlow(int,int,int,int,int);
//Program Execution Begins Here
int main(int argc, char** argv) {
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
    return 0;
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
