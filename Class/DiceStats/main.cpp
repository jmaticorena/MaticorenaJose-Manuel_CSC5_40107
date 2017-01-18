/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 18, 2016, 10:37 AM
 * Purpose:  Statistics for Throwing 2 Dice
 */

//System Libraries Here
#include <iostream>//Input Output Library
#include <cstdlib>//Random numbers 
#include <ctime>//Time to set the seed
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
    unsigned int nThrows=36000,//Number of throws for the pair of dice
            n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0,n10=0,n11=0,n12=0;
    //Input or initialize values Here
    for(int toss=0;toss<nThrows;toss++){
        char die1=rand()%6+1;
        char die2=rand()%6+1;
        char sum=die1+die2;
        switch(sum){
            case 2:n2++;break;
            case 3:n3++;break;
            case 4:n4++;break;
            case 5:n5++;break;
            case 6:n6++;break;
            case 7:n7++;break;
            case 8:n8++;break;
            case 9:n9++;break;
            case 10:n10++;break;
            case 11:n11++;break;
            case 12:n12++;break;
        }
    }
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"2 was thrown "<<n2<<" times"<<endl;
    cout<<"3 was thrown "<<n3<<" times"<<endl;
    cout<<"4 was thrown "<<n4<<" times"<<endl;
    cout<<"5 was thrown "<<n5<<" times"<<endl;
    cout<<"6 was thrown "<<n6<<" times"<<endl;
    cout<<"7 was thrown "<<n7<<" times"<<endl;
    cout<<"8 was thrown "<<n8<<" times"<<endl;
    cout<<"9 was thrown "<<n9<<" times"<<endl;
    cout<<"10 was thrown "<<n10<<" times"<<endl;
    cout<<"11 was thrown "<<n11<<" times"<<endl;
    cout<<"12 was thrown "<<n12<<" times"<<endl;
    cout<<"The total throws ="<<(n2+n3+n4+n5+n6+n7+n8+n9+n10+n11+n12)<<endl;
    cout<<"The total throws ="<<(nThrows)<<endl;
    //Exit
    return 0;
}

