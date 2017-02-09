/* 
  File:   main.cpp
  Author: Josemanuel Maticorena
  Created on January 23, 2017, 7:15 PM
  Purpose: Black Jack Project
 * 
 * All rules and regulations on the card game of blackjack
 * were taken from the official Bicycle Cards website
 * http://www.bicyclecards.com/how-to-play/blackjack/
 */

//System Libraries
#include <iostream> //Input and Output
#include <cstdlib>  //Random Number Generator
#include <ctime>    //Random Number Seed
#include <fstream>  //File Library
#include <iomanip>  //Format Library
using namespace std;

//user Libraries

//Global Constants
//Such as Pi, speed of light -> Math/science values
//as well as conversions from system of units to another
const int COLS=7;

//Function Prototypes
int Deck();//Deck of Cards Function
char fceCrd(int);//Configure Face Cards Function
void getdata(int [], int, int, int, int, int &,int, int, int); 
void prnt(string [],int[]);
void prnt2d(char [][COLS]);

//Executable code begins here!!!
int main(int argc, char** argv) {
    
    //Set the random number Generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Instantiate Files
    ifstream in;
    ofstream out;
    
    //declare variables
    int PlrCrd1,//First Card Delt
        PlrCrd2,//Second Card Delt
        DealCrd,//First Dealer Card
        nbOfAce,//Keeps Track of Player Aces
        dealAce,//Keeps Track of Dealer Aces
        Plr$=0, //Player Money Initialized to $0
        PlrBet, //Player bet
        gmsPlyd=0, //Total Games Played
        gmsWon=0,  //Total Games won
        gmsDrw=0,  //Total Games Drawn
        gmsLost=0, //Total Games Lost
        MaxCrds=0,
        TotCard=0,
        Tot$Won=0,
        Tot$Lst=0;
    int sum=0,//Sum of the value of the player Cards
        dealSum=0;//Sum of the value of the dealer Cards
    bool stay=false,
         win,
         cntinue=true;
    string name,
           choice;
     
    const int BlckJck=21;
    const int size=10;
    const int rows=3;
    int Data[size]={};
    string Label[size]{"Total Games Played","Total Games Won","Total Games Lost",
    "Total Games Drawn","Total Money Avaliable","Total Money Won","Total Money Lost",
    "Most Cards Drawn"};
    
    //Begin 
    cout<<"Welcome to Blackjack."<<endl;
    cout<<"One of the world's most popular card games"<<endl;
    
    //Enter Name
    cout<<"Please enter your name"<<endl;
    getline(cin, name);
    
    string file=name+".dat";
    
    //Check if player has Played Before
    in.open(file.c_str()); //Reading player file 
    in>>gmsPlyd; //total games played
    in>>gmsWon;  //number of games won
    in>>gmsLost; //number of games lost
    in>>Plr$;   //Total Player Money
    in>>MaxCrds;
    in>>Tot$Won;
    in>>Tot$Lst;
    in.close();
    
    //Output Values From Previous Play Sessions
    if(gmsPlyd>0){
        cout<<"Welcome back "<<name<<"."<<endl;
        cout<<"You have "<<gmsPlyd<<" total games played."<<endl;
        cout<<"You have "<<gmsWon<<" total games won."<<endl;
        cout<<"You have "<<gmsLost<<" total games lost."<<endl;
        cout<<"You have "<<gmsDrw<<" total games drawn."<<endl;
        cout<<setprecision(2)<<fixed;
        cout<<"Percentage wins = "
            <<(static_cast<float>(gmsWon)/gmsPlyd)*100<<"%"<<endl;
        cout<<"Percentage losses = "
            <<(static_cast<float>(gmsLost)/gmsPlyd)*100<<"%"<<endl;
        cout<<"You have won a total of $"<<Tot$Won<<endl;
        cout<<"You have lost a total of $"<<Tot$Lst<<endl;
        cout<<"The most cards in a single round is "<<MaxCrds<<endl;
        cout<<"You have $"<<Plr$<<" avaliable."<<endl;
    }
    
    //First Time playing
    else{
    cout<<"Welcome "<<name<<"."<<endl;
    cout<<"First time players start with $500."<<endl;
    
    //Initialize Player Money Amount
    Plr$=500;
    cout<<"Each game you can place a new bet."<<endl;
    }
    
    //GamePlay Begins
    
    //Do while loop for Option to Continue Playing cntinue=true
    do{
            
            //Reinitialize Number of Aces and total cards to 0
            TotCard=0;
            nbOfAce=0;
            dealAce=0;
            cout<<endl;
            cout<<"Your total amount is $"<<Plr$<<endl;

            //Validate Bet Amount
            do{
                cout<<"How much would you like to bet?"<<endl;
                cin>>PlrBet;
                cin.ignore();
                if(PlrBet>Plr$){//Validate Bet
                    cout<<"You do not have enough to place that bet. Enter a lower amount."<<endl<<endl;
                }
            }while (PlrBet>Plr$);

            cout<<"Your bet has been placed."<<endl;
            cout<<"You will now be delt two cards"<<endl<<endl;
            
        //Beginning Deal
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
        
        //Determining Player Card Value
        sum=PlrCrd1+PlrCrd2;
        
        //Account for two Aces
        if(sum==22){
            sum=12;//One ace set to 11. Other set to 1
        }
        
        //Display Total
        cout<<"Your card total is "<<sum<<endl<<endl;
        
        //Increment Number of Cards
        TotCard=2;
        
        //First Dealer Card
        DealCrd=Deck();

        //Displaying Face Cards
        if (DealCrd==1||DealCrd==11||DealCrd==12||DealCrd==13){//Checking for face Card
            char fcecrd=fceCrd(DealCrd);//Call the face card function
            cout<<"The Dealer's first card is a(n) "<<fcecrd<<endl;//Display Dealer Card
        }
        else{
            cout<<"The Dealer's first card is a(n) "<<DealCrd<<endl<<endl;//Display Dealer Card
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
        if (sum==BlckJck){
            stay=true;
        }
        else{
                cout<<"The first round has been delt."<<endl;
                cout<<"The play will now continue."<<endl;
                stay=false;
        }
        
        //Continue Play
        while(stay==false){;//Loop while stay is not true
            cout<<endl;//Skip a line for format
            
            //Get Player Choice to Hit or Stay
            cout<<"Would you like to hit or stay?"<<endl;
            getline(cin,choice);
            
            //Player Chooses Hit
            if(choice=="hit"||choice=="Hit"){
                
                //Draw New Card
                int card=Deck();//Call Deck function and pull a card
                TotCard++;
                
                //Output Card
                if (card==1||card==11||card==12||card==13){//Checking for face card
                    char fcecrd=fceCrd(card);//Call facecard function
                    cout<<"Your next card is a(n) "<<fcecrd<<endl;
                }
                else{
                     cout<<"Your next card is a(n) "<<card<<endl;
                }
                
                //Adding the Card Value to Sum
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

                //Output Card Value Total
                cout<<"Your card total is "<<sum<<endl;//Display total

                //Player Gets Blackjack or busts
                if(sum>=21){
                    stay=true;
                }
            }
            
            //Player Chooses Stay
            if(choice=="stay"||choice=="Stay"){//Choice to stay 
               cout<<endl;
               cout<<"The dealer will now play."<<endl;
               
               //Dealer will begin to Draw
                while(dealSum<17){//Dealer Play
                    cout<<"The dealer will hit."<<endl;
                    
                    //Get New Card
                    int dealcard=Deck();//Call Deck function and pull a card
                    
                    //Output Card
                    if (dealcard==1||dealcard==11||dealcard==12||dealcard==13){//Checking for face card
                    char Dfcecrd=fceCrd(dealcard);//Call facecard function
                    cout<<"The dealer's next card is a(n) "<<Dfcecrd<<endl;
                    }
                    else{
                     cout<<"The dealer's next card is a(n) "<<dealcard<<endl;
                    }
                    
                    //Adding the Card Value to Sum
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

                    //Output Dealer Card Total
                    cout<<"The dealer has a card total of "<<dealSum<<"."<<endl;
                }
               
               //Both Player and Dealer Stay
                cout<<"The dealer will stay."<<endl;
                stay=true;//Stay set to true
            }
        }

        //Determining wins or losses
        if(sum>21){//Player Bust
            cout<<endl;
            cout<<"Sorry you have busted with a card total of "<<sum<<endl;
            cout<<"You have lost."<<endl;
            win=false;
        }
        if(sum==21){//Player has Blackjack
            cout<<endl;
            cout<<"Congratulations you have blackjack! You win!"<<endl;
            win=true;
        }
        if(sum<21){//Player Stays
            if(sum>dealSum){//Player wins 
                cout<<endl;
                cout<<"You have a card total of "<<sum<<endl;
                cout<<"The dealer has a card total of "<<dealSum<<endl;
                cout<<"You win!"<<endl;
                win=true;
            }

            if(sum<dealSum&&dealSum<=21){//Player loses
                cout<<endl;
                cout<<"You have a card total of "<<sum<<endl;
                cout<<"The dealer has a card total of "<<dealSum<<endl;
                cout<<"You lose."<<endl;
                win=false;
            }

            if(sum<dealSum&&dealSum>21){//Player wins dealer busts
                cout<<endl;
                cout<<"You have a card total of "<<sum<<endl;
                cout<<"The dealer has a card total of "<<dealSum<<endl;
                cout<<"You win!"<<endl;
                win=true;
            }
            if(sum==dealSum){//PLayer and dealer have same value
                cout<<endl;
                cout<<"You have a card total of "<<sum<<endl;
                cout<<"The dealer has a card total of "<<dealSum<<endl;
                cout<<"It is a draw."<<endl;
                gmsDrw++;
                win=false;
            }
        }
        
        //Update Bet and Statistics
        if(win==true){
            Plr$+=PlrBet;
            gmsWon++;
            Tot$Won+=PlrBet;
        }
        if(win==false){
            if(sum!=dealSum){
              Plr$-=PlrBet;
              gmsLost++;
              Tot$Lst+=PlrBet;  
            }
        }
        
        MaxCrds<TotCard?MaxCrds=TotCard:TotCard=0;  
     
        gmsPlyd++;
        
        if(Plr$==0){
            cntinue=false;
            cout<<"You have lost all of your money."<<endl;
            cout<<"You cannot continue."<<endl;
        }
        
        else{
            //Choice to Continue or not
            //Get Player Answer
            cout<<"Would you like to continue? Enter yes or no."<<endl;
            string cont;
            getline(cin,cont);

            //Player Chooses No
            if(cont=="no"){
              //Choice to Save Progress
              cout<<"Would you like to save your progress? Enter yes or no."<<endl;

              //Get PLayer Answer
              string save;
              getline(cin,save);

              //Player Chooses to Save
              if(save=="yes"||"Yes"){

                  //Open Outfile
                  out.open(file.c_str());

                  //Output Statistics
                  out<<gmsPlyd<<endl;
                  out<<gmsWon<<endl;
                  out<<gmsLost<<endl;
                  out<<Plr$<<endl;
                  out<<MaxCrds<<endl;
                  out<<Tot$Won<<endl;
                  out<<Tot$Lst<<endl;

                  //Close Output file
                  out.close();
              }

              //Update Choice to Continue
              cntinue=false; 
            }
        }
    }while(cntinue);
    
   //Outputting Data
   getdata(Data, gmsPlyd, gmsWon, gmsLost, gmsDrw, Plr$, Tot$Won, Tot$Lst, MaxCrds);
   prnt(Label,Data);
   cout<<endl;
   
   //Thanks
   char Thx[rows][COLS]={{'T','h','a','n','k','s',' '},
                      {' ',' ','f','o','r',' ',' '},
                      {'P','l','a','y','i','n','g'}};
   prnt2d(Thx);
    
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

void getdata(int a[], int b, int c, int d, int e, int &f,int g, int h, int i){
    static int stcvar=0;
    a[stcvar]=b;
    a[1]=c;
    a[2]=d;
    a[3]=e;
    a[4]=f;
    a[5]=g;
    a[6]=h;
    a[7]=i;
} 

void prnt(string a[],int b[]){
    for(int i=0;i<=7;i++){
        cout<<a[i]<<" "<<b[i]<<endl;
    }
}

void prnt2d(char a[][COLS]){
    for(int x=0;x<3;x++){
        for(int y=0;y<COLS;y++){
            cout<< a[x][y];
        }
        cout<<endl;
    }
}