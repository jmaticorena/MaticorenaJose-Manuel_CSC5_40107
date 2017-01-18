/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 18, 2016, 10:37 AM
 * Purpose:  Statistics for Craps
 */

//System Libraries Here
#include <iostream>//Input Output Library
#include <cstdlib>//Random numbers 
#include <ctime>//set the seed
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    unsigned int nGames=100000;//Number of throws for the pair of dice
    unsigned int wins=0, losses=0, maxThrw=0;
    float avgThrw=0;
    //Input or initialize values Here
    for(int game=0;game<nGames;game++){
        char die1=rand()%6+1;
        char die2=rand()%6+1;
        char sum=die1+die2;
        unsigned int cntThrw=1;
        avgThrw++;
        //now determine wins or losses
        if(sum==2||sum==3||sum==12)losses++;
        else if (sum==7||sum==11)wins++;
        else{
            bool kpThrw=true;
        
            do{
                die1=rand()%6+1;
                die2=rand()%6+1;
                avgThrw++;cntThrw++;
                char sumAgn=die1+die2;
                if(sumAgn==7){
                    losses++;
                    kpThrw=false;
                }else if (sumAgn==sum){
                    wins++;
                    kpThrw=false;
                }
            }while(kpThrw);
       }
        if(maxThrw<cntThrw)maxThrw=cntThrw;
    }
    //Calculate the average Throw
    avgThrw/=nGames;
    
    //Output Located Here
    cout<<"The total number of Craps games played ="<<nGames<<endl;
    cout<<"The total wins = "<<wins<<endl;
    cout<<"The total losses = "<<losses<<endl;
    cout<<"The total number of Craps games played = "<<wins+losses<<endl;
    cout<<"Percentage wins = "<<100.0f*wins/nGames<<endl;
    cout<<"Percentage losses = "<<100.0f*losses/nGames<<endl;
    cout<<"The average number of throw per games = "<<avgThrw<<endl;
    cout<<"Maximum number of throws was "<<maxThrw<<endl;
    //Exit
    return 0;
}

