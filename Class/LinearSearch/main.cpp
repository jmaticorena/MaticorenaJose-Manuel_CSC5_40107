/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on February 6th, 2017, 11:13 AM
  Purpose: Linear Search
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
void filAray(int [],int);
void prntAry(int [],int,int);
void linSrch(int [],int [],int,int,int &);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=500;
    const int utilize=SIZE/2;
    int array[utilize]={};
    int posAray[utilize]={};
    int cntVal=0;
    //Input values
    filAray(array,utilize);
    
    //Find the element
    int find;
    cout<<"What value to find? type a number between 10 and 99"<<endl;
    cin>>find;
    cout<<endl;
    
    //Output values
    prntAry(array,utilize,10);
    linSrch(array,posAray,utilize,find,cntVal);
    if(cntVal>0){
        cout<<find<<" was found at position(s) ";
        prntAry(posAray,cntVal,10);
    }
    else cout<<find<<" was not found."<<endl;
    
    //Exit stage right!
    return 0;
}

void linSrch(int a[],int b[],int n,int val, int &count){
    for(int i=0;i<n;i++){
        if(a[i]==val){
            b[count]=i;
            count++;
        }
    }
}

void prntAry(int a[],int n,int perLine){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==perLine-1)cout<<endl;
    }
    cout<<endl;
}

void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}
