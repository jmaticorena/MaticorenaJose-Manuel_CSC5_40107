/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on January 23, 2017, 7:15 PM
  Purpose: Black Jack Project
 * 
 * All rules and regulation on the card game of blackjack
 * were taken from the official Bicycle Cards website
 * http://www.bicyclecards.com/how-to-play/blackjack/
 */
//System Libraries
#include <iostream> //Input and Output
#include <cstdlib>  //Random Number Generator
#include <ctime>    //Random Number Seed
#include <string>   //String Library
using namespace std;

//user Libraries

//Global Constants
//Such as Pi, speed of light -> Math/science values
//as well as conversions from system of units to another
const int BlckJck=21;
//Function Prototypes
int Deck();//Deck of Cards Function
char fceCrd(int);//Configure Face Cards Function
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number Generator
    srand(static_cast<unsigned int>(time(0)));
    //declare variables
    int PlrCrd1,//First Card Delt
        PlrCrd2,//Second Card Delt
        DealCrd,//First Dealer Card
        nbOfAce,//Keeps Track of Player Aces
        dealAce;//Keeps Track of Dealer Aces
    int sum=0,//Sum of the value of the player Cards
        dealSum;//Sum of the value of the dealer Cards
    //Begin Play
    cout<<"Welcome to Blackjack."<<endl;
    cout<<"You will now be delt two cards"<<endl<<endl;
    
    //First Player Card 
    PlrCrd1=Deck();
    
    //Displaying Cards
    if (PlrCrd1==1||PlrCrd1==11||PlrCrd1==12||PlrCrd1==13){
        char fcecrd=fceCrd(PlrCrd1);//Call the Face Card Function
        cout<<"Your first card is a(n) "<<fcecrd<<endl;//Displaying Face Card to user
    }
    else{
        cout<<"Your first card is a(n) "<<PlrCrd1<<endl;//Displaying Card to user
    }
    
    //Second Player Card 
    PlrCrd2=Deck();
    
    //Displaying Face Cards
    if (PlrCrd2==1||PlrCrd2==11||PlrCrd2==12||PlrCrd2==13){
        char fcecrd=fceCrd(PlrCrd2);//Call the face Card Function
        cout<<"Your second card is a(n) "<<fcecrd<<endl;//Displaying Face Card to user
    }
    else{
        cout<<"Your second card is a(n) "<<PlrCrd2<<endl;//Displaying Card to user
    }
    //Adding Up Cards
    if (PlrCrd1==11||PlrCrd1==12||PlrCrd1==13){//Checking if first card is Face Card
        PlrCrd1=10;//Setting first Face Card Value
    }
    if(PlrCrd1==1){//Checking for Ace
        nbOfAce++;//Incrementing number of Aces player has
        PlrCrd1=11;//Setting first ace card to 11
    }
   
    if (PlrCrd2==11||PlrCrd2==12||PlrCrd2==13){//Checking if second card is Face Card
        PlrCrd2=10;//Setting second Face Card Value
    }
    if(PlrCrd2==1){//Checking for Ace
        nbOfAce++;//Incrementing number of Aces player has
        PlrCrd2=11;//Setting second ace card to 11
    }
    sum=PlrCrd1+PlrCrd2;//Adding them up
    //Account for two Aces
    if(sum==22){
        sum=12;//One ace set to 11. Other set to 1
    }
    //Display Total
    cout<<"Your total is "<<sum<<endl<<endl;
    
    //First Dealer Card
    DealCrd=Deck();
    
    //Displaying Face Cards
    if (DealCrd==1||DealCrd==11||DealCrd==12||DealCrd==13){//Checking for face Card
        char fcecrd=fceCrd(DealCrd);//Call the face card function
        cout<<"The Dealer's first card is a(n) "<<fcecrd<<endl;//Display Dealer Card
    }
    else{
        cout<<"The Dealer's first card is a(n) "<<DealCrd<<endl;//Display Dealer Card
    }
    
    //Value of the Dealer Card
    if (DealCrd==11||DealCrd==12||DealCrd==13){//Checking for face card
        DealCrd=10;//Setting face card value
    }
    if(DealCrd==1){//Checking for ace
        dealAce++;//Incrementing dealer ace
        DealCrd=11;//Setting Dealer ace value
    }
    dealSum=DealCrd;//Setting the sum of dealer
    

    //Check For Natural Blackjack
    sum==BlckJck?cout<<"Congratulations you have blackjack! You win!"<<endl:
        cout<<"Continue Play"<<endl;
    bool stay=false;//stay initialized to false
    do {//Continue Play
        cout<<endl;//Skip a line for format
        string choice;//Choice Input
        cout<<"Would you like to hit or stay?"<<endl;
        getline(cin,choice);
        if(choice=="hit"||choice=="Hit"){
            int card=Deck();//Call Deck function and pull a card
            if (card==1||card==11||card==12||card==13){//Checking for face card
                char fcecrd=fceCrd(card);//Call facecard function
                cout<<"Your next card is a(n) "<<fcecrd<<endl;//Output Card
            }
            else{
                 cout<<"Your next card is a(n) "<<card<<endl;//Output Card
            }
            //Adding the Card to Sum
            if (card==11||card==12||card==13){//Checking for face card
                sum+=10;//Adding face card value to sum
            }
            if(card==1){//Checking for ace 
                sum+=11;//Adding ace value to sum. Adding 11
                nbOfAce++;//Incrementing Player Aces
            }
            if(card==2||card==3||card==4||card==5||card==6||card==7||card==8||card==9||card==10){
                sum+=card;//Adding card value to sum
            }
            
            if(sum>21&&nbOfAce>0){//Accounting for Aces
                sum-=10;//Adjust sum
                nbOfAce--;//Decrement Number of Aces
            }
            cout<<"Your total is "<<sum<<endl;//Display total
            
        }
        if(choice=="stay"||choice=="Stay"||sum>=21){//Choice to stay or Player busts
            while(dealSum<17){//Dealer Play
                int dealcard=Deck();//Call Deck function and pull a card
                //Adding the Card to Sum
                if (dealcard==11||dealcard==12||dealcard==13){//Checking for face card
                    dealSum+=10;//Adding face card value to sum
                }
                if(dealcard==1){//Checking for ace 
                    dealSum+=11;//Adding ace value to sum. Adding 11
                    dealAce++;//Increment dealer aces
                }
                if(dealcard==2||dealcard==3||dealcard==4||dealcard==5||dealcard==6||dealcard==7||dealcard==8||dealcard==9||dealcard==10){
                    dealSum+=dealcard;//Add card value to sum
                }

                if(dealSum>21&&dealAce>0){//Accounting for Dealer Aces
                    dealSum-=10;//Adjust value
                    dealAce--;//Decrement Dealer Aces
                }
            }
                
            
            stay=true;//Stay set to true
        }
       

    }while(stay==false);//Loop while stay is not true

    //Determining wins or losses
    if(sum>21){//Player Bust
        cout<<"Sorry you have busted with a total of "<<sum<<endl;
        cout<<"You have lost."<<endl;
    }
    if(sum==21){//Player has Blackjack
        cout<<"Congratulations you have blackjack! You win!"<<endl;
    }
    if(sum<21){//Player Stays
        if(sum>dealSum){//Player wins 
            cout<<"You have a total of "<<sum<<endl;
            cout<<"The dealer has a total of "<<dealSum<<endl;
            cout<<"You win!"<<endl;
        }
        
        if(sum<dealSum&&dealSum<=21){//Player loses
            cout<<"You have a total of "<<sum<<endl;
            cout<<"The dealer has a total of "<<dealSum<<endl;
            cout<<"You lose."<<endl;
        }
        
        if(sum<dealSum&&dealSum>21){//Player wins dealer busts
            cout<<"You have a total of "<<sum<<endl;
            cout<<"The dealer has a total of "<<dealSum<<endl;
            cout<<"You win!"<<endl;
        }
        if(sum==dealSum){//PLayer and dealer have same value
            cout<<"You have a total of "<<sum<<endl;
            cout<<"The dealer has a total of "<<dealSum<<endl;
            cout<<"It is a draw."<<endl;
        }
    }
    
    //Exit Stage right!
    return 0;
}

int Deck(){//Deck function
    int deck;//initialize
    deck=rand()%12+1;//Random Number from 1-13
    return deck;
}

char fceCrd(int incard){ //Account for face cards
    char outcard;
    switch(incard){
        case 1:
            outcard='A';
            break;
        case 11:
            outcard='J';
            break;
        case 12:
            outcard='Q';
            break;
        case 13:
            outcard='K';
            break;
        default:
            break;
    }
    return outcard;
}