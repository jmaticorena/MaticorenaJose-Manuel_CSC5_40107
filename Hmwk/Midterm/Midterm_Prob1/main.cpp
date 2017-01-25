/* 
 * File:   main.cpp
 * Author: Josemanuel Maticorena
 * Created on January 24, 2017, 12:17 PM
 * Purpose: Display a Pattern Using a loop
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes


//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variable
    int dim;    //Number used to set dimensions
    int NumMin; //Variable to keep track of decrementing number printed
    int isEven; //Variable to determine if number is even
    //Input 
    cout<<"This program makes an X using the numbers"<<endl;
    cout<<"from 1 to any number of your choosing"<<endl;
    cout<<"Input any integer from 1-50"<<endl;
    cin>>dim;
    NumMin=dim; //Initializing to Number Inputed
    
    //Determining if number is even
    isEven=dim%2; //Will return 0 or 1
    
    //Process of mapping Input to Outputs
    switch(isEven){
        case 0: //if number is even
            for(int nRow=1;nRow<=dim;nRow++){     //loop for the rows
                for(int nCol=1;nCol<=dim;nCol++){ //loop for the columns
                    if (nRow==nCol||nCol==(dim+1)-nRow){ //Print out numbers
                      if(nRow==nCol){ //Print out numbers in ascending order
                          cout<<nRow;    
                      }
                      else{          //Print out numbers in descending order
                          cout<<NumMin;
                      }  
                    }
                    else {
                        cout<<" "; //Print spaces
                    }
                }
                NumMin--;  //Decrements the value
                cout<<endl;
            }
            break;
            
        case 1://if number is odd
            for(int nRow=1;nRow<=dim;nRow++){    //loop for the rows
                for(int nCol=1;nCol<=dim;nCol++){//loop for the columns
                    if (nRow==nCol||nCol==(dim+1)-nRow){//Print out numbers
                      if(nRow==nCol){//Print out numbers in descending order
                          cout<<NumMin;    
                      }
                      else{
                          cout<<nRow;//Print out numbers in ascending order
                      }  
                    }
                    else {
                        cout<<" "; //Print spaces
                    }
                }
                NumMin--;//Decrements the value
                cout<<endl;
            }
            break;
    }
    
    //Exit stage right!
    return 0;
}