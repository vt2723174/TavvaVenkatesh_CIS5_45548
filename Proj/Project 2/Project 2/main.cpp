/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 24th, 2017, 7:40 PM
 * Purpose:  a blackjack game
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void shuCard(bool cdeck[]);//shuffles card from deck
void disCard(int cards );//displays the card 
void curCard(int current[], int ccount);//shows current card
int newCard(bool cdeck[]);//getting the next card
int kpScore (int current[], int ccount);//keeps score
void disRes (int dcard[],  int dccount, int pcard[],  int pccount);//displays results
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    srand(static_cast<unsigned int>(time(0)));
    bool cdeck[52];//deck of cards; holds 52 cards
    int pcard[12];//player cards, holds 12 cards
    int pccount1;// player card count
    int dcard[12];//dealer cards, holds 12 cards
    int dccount1;//dealer card count
    char choice1;//input of choice
    char choice3;//input of choice
    int bet;//player's bet input in dollars
    int betwon;//player's winnings in results
    //Initialize variables
    betwon = bet*2;//winnings twice original bet in dollars
    //Input data
    
    //Map inputs to outputs or process the data
    do{
        ifstream infile("header.txt");
        if (infile.fail())
        {
            cout<<"File couldn't open";
        }
        else
        {
            string header;
            while(getline(infile,header))
            {
                cout<<header<<endl<<endl;
            }
            infile.close();
        }
    cout<<"Ready to Deal? (y or n) ";
    cin>>choice1;
    cout<<endl;
    if (choice1 == 'y') { 
    cout<<"How much do you want to bet? $";
    cin>>bet;
    cout<<endl;
    
        shuCard(cdeck);
        pcard[0] = newCard(cdeck);//first initial player card dealt 
        dcard[0] = newCard(cdeck);//first initial dealer card hidden    
        pcard[1] = newCard(cdeck);//second initial player card dealt
        dcard[1] = newCard(cdeck);//second initial dealer card shown
        pccount1 = 2;//2 cards
        dccount1 = 2;//2 cards
        cout<<"GOOD LUCK!";
        cout<<endl<<endl;
        char choice2;//input of choice
        bool phit = true;//player hitting
        int pscore = kpScore (pcard, pccount1);//player score
        do
        {
            cout<<"Dealer's Card"<<endl;
            cout<<"Hidden Card, ";
            disCard(dcard[1]);
            cout<<endl;
            cout<<"Player's score: "<<kpScore(pcard,pccount1)<<endl;
            curCard(pcard, pccount1);
            
            cout<<"Hit or Stand (h or s) ";
            cin>>choice2;
            if (choice2 =='h')
            {
                pcard[pccount1]=newCard(cdeck);
                ++pccount1;
                
            }
            else if (choice2 == 's')
            {
                phit=false;
            }
            else
            {
                cout<<"Sorry, not an accepted choice";
                cout<<endl;
            }
            cout<<endl;
            pscore = kpScore(pcard,pccount1);
            
        } while (phit && pscore<22);
        
        if (pscore>21)
        {
            cout<<"YOU LOST"<<endl;
            cout<<"NO PAYOUT"<<endl<<endl;
            disRes(dcard, dccount1, pcard, pccount1);
            
        }
        else
        {
           int dscore = kpScore(dcard, dccount1);//dealer's score
           while (dscore<17)
           {
               dcard[dccount1]=newCard(cdeck);
               ++dccount1;
               dscore = kpScore(dcard, dccount1);
           }
           bool dloss = (dscore>21);
           if (dloss)
           {
               cout<<"YOU WON!!"<<endl;
               cout<<"PAYOUT: $"<<betwon<<endl<<endl;
               disRes(dcard, dccount1, pcard, pccount1);
           }
           else
           {
               if (pscore==dscore)
               {
                   cout<<"Tie!"<<endl;
                   cout<<"PAYOUT: $"<<bet<<endl<<endl;
                   disRes(dcard, dccount1, pcard, pccount1);
               }
               else if (pscore > dscore)
               {
                   cout<<"YOU WIN!!"<<endl;
                    cout<<"PAYOUT: $"<<betwon<<endl<<endl;

                   disRes(dcard, dccount1, pcard, pccount1);
               }
               else 
               {
                   cout<<"You Lost"<<endl;
                   cout<<"NO PAYOUT"<<endl<<endl;
                   disRes(dcard, dccount1, pcard, pccount1);
               }
           }
        }
        
   
    }
     if (choice1=='n'){
        cout<<"Goodbye";
    }
    cout<<endl;
    cout<<"Do you want to play again? (y or n) ";
    
    cin>>choice3;
    cout<<endl;
    }while(choice3=='y');
    if (choice3=='n')
    {
        cout<<"Goodbye";
    }
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
void shuCard(bool cdeck[])
{
for (int i =0; i<52; ++i)
{
    cdeck[i]=false;
}
}
void disCard(int cards )
{
    int crank = (cards%13);//ranks in card deck 
    if (crank ==0)
    {
        cout<<"Ace of ";
    }
    else if (crank<9)
    {
        cout<<(crank+1)<<" of ";
    }
    else if (crank==9)
    {
        cout<<"Ten ";
    }
    else if (crank ==10)
    {
        cout<<"Jack of ";
    }
    else if (crank ==11)
    {
        cout<<"Queen of ";
    }
    else 
    {
        cout<<"King of ";
    }
    int csuit = (cards/13);//suits in card deck
    if (csuit==0)
    {
        cout<<"clubs";
    }
    else if (csuit==1)
    {
        cout<<"diamonds";
    }
    else if (csuit==2)
    {
        cout<<"hearts";
    }
    else 
    {
        cout<<"spades";
    }
}
void curCard(int current[],  int ccount)
{
    for (int i=0; i<ccount; ++i)
    {
        const int ncard = current[i];
        disCard(ncard);
        cout<<" ";
    }
    cout<<endl;
}
int newCard(bool cdeck[])
{
    bool cdealt = true;//card being dealt 
    int newcard = -1;//new card dealt 
    do
    {
        newcard = (rand()%52);
        if (!cdeck[newcard])
        {
            cdealt = false;
        }
    }while (cdealt);
    return newcard;
}
int kpScore (int current[],  int ccount)
{
    int acount=0;//counting of aces 
    int score=0;//score 
    for (int i=0;i<ccount; ++i)
    {
       int ncard = current[i];//the next card
       int crank= (ncard%13);//card ranks 
        if (crank==0)
        {
            ++acount;
            ++score;
        }
        else if (crank<9)
        {
            score=score + (crank+1);
        }
        else
        {
            score = score+10;
        }
    }
    if (acount>0 && score<12)
    {
        --acount;
        score = score+10;
    }
    return score;
}
void disRes (int dcard[],  int dccount2, int pcard[], int pccount2)
{
    cout<<"FINAL RESULTS"<<endl;
    cout<<"Dealer's Score: "<<kpScore(dcard,dccount2)<<endl;
    curCard(dcard,dccount2);
    cout<<"Player's Score: "<<kpScore(pcard, pccount2)<<endl;
    curCard(pcard,pccount2);
    cout<<"END OF GAME"<<endl<<endl;
}


