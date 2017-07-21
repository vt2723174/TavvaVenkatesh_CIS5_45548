/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 17, 2017, 11:45 AM
 * Purpose:  Create a game of natural 21, a 
 *           blackjack game where user is dealt
 *           random two cards and hopefully they are
 *           equal to 21
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    srand(static_cast<unsigned int>(time(0)));
    int bet;// money bet 
    char choice1, choice2;
    int betwon; //a 3 to 2 amount won if player has a natural 21
    int pc1,pc2;// 2 cards randomly assigned to player 
    int cc1,cc2;// 2 cards randomly held by computer
    int sumpc, sumcc;// sum of player cards and sum of computer cards
    //Initialize variables
    pc1 = rand()%13+1;//random number [1,13] 
    pc2 = rand()%13+1;// random number [1,13]
    cc1 = rand()%13+1;// random number [1,13]
    cc2 = rand()%13+1;// random number [1,13]
    betwon = (bet+(1.5*bet));// calculate winnings based on a 3 to 2 ratio
    sumpc = pc1+pc2;//sum of the two player cards
    sumcc = cc1+cc2;//sum of the two computer cards
    //Input data
    do{
    cout<<"Hello, Welcome to Blackjack."<<endl<<endl;
    cout<<"Ready to Deal? (y or n) ";
    cin>>choice1;
    cout<<endl;
    if (choice1 == 'y') {  
  
    cout<<"How much do you want to bet? $";
    cin>>bet;
    cout<<endl;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"You are holding: ";
    switch (pc1){
        case 1: cout<<"a Ace,";//value of 11
        break;   
        case 11: cout<<"a king,";//value of 10
        break;
        case 12: cout<<"a Queen, ";//value of 10
        break;
        case 13: cout<<"a Jack, ";//value of 10
        break; 
        default: cout<<pc1<<",";//randomly assigned number 
        break;
    }
    switch (pc2){
        case 1: cout<<" a Ace";//value of 11
        break;
        case 11: cout<<" a King";//value of 10
        break;
        case 12: cout<<" a Queen";//value of 10
        break;
        case 13: cout<<" a Jack";//value of 10
        break;
        default: cout<<pc2;//randomly assigned number 
        break;
    }
    cout<<endl<<endl;
    cout<<"The computer is holding: ";
    switch (cc1){
        case 1: cout<<"a Ace, ";//value of 11
        break;   
        case 11: cout<<"a King, ";//value of 10
        break;
        case 12: cout<<"a Queen, ";// value of 10
        break;
        case 13: cout<<"a Jack, ";//value of 10
        break;      
        default: cout<<cc1<<",";//randomly assigned number 
        break;
    }
    switch (cc2){
        case 1: cout<<" a Ace";//value of 11
        break;
        case 11: cout<<" a King";//value of 10
        break;
        case 12: cout<<" a Queen";//value of 10
        break;
        case 13: cout<<" a Jack";//value of 10
        break;
        default: cout<<cc2;//randomly assigned number 
        break;
    }
    cout<<endl<<endl;
    if ((pc1==1)&&(pc2==10||pc2==11||pc2==12||pc2==13))//a ace and a queen, jack, king, or a 10.
            cout<<"Congrats, you have a natural 21"<<endl<<endl<<"WON: $"<<betwon;
    else if (sumpc == 21)//sum of two cards equal 21 if not a face card
        cout<<"Congrats, you have a natural 21"<<endl<<endl<<"WON: $"<<betwon;
    else if ((pc2==1) && (pc1==10||pc1==11||pc1==12||pc1==13))//a ace and a queen, jack, king, or a 10.
             cout<<"Congrats, you have a natural 21"<<endl<<endl<<"WON: $"<<betwon;
    else if ((cc1==1)&&(cc2==10||cc2==11||cc2==12||cc2==13))//lost if computer has 21 as well and player doesn't
            cout<<"Computer has a natural 21"<<endl<<endl<<"YOU LOST";
    else if ((cc2==1) && (cc1==10||cc1==11||cc1==12||cc1==13))//lost if computer has 21 as well and player doesn't
            cout<<"Computer has a natural 21"<<endl<<endl<<"YOU LOST";
    else if (sumcc == 21)//lost if computer has two cards with sum of 21 and player doesn't
            cout<<"Computer has a natural 21"<<endl<<endl<<"YOU KEEP YOUR ORIGINAL BET: $"
                    <<bet;
    else if (((cc1==1)&&(cc2==10||cc2==11||cc2==12||cc2==13)) && ((pc1==1)&&(pc2==10||pc2==11||pc2==12||pc2==13))) //both player and computer have 21
            cout<<"Computer has a natural 21"<<endl<<endl<<"YOU KEEP YOUR ORIGINAL BET: $"
                    <<bet;
    else if (((cc1==1)&&(cc2==10||cc2==11||cc2==12||cc2==13)) && (sumpc == 21))//both player and computer have 21
            cout<<"Computer has a natural 21"<<endl<<endl<<"YOU KEEP YOUR ORIGINAL BET: $"
                    <<bet;
    else if (((cc1==1)&&(cc2==10||cc2==11||cc2==12||cc2==13)) && ((pc2==1) && (pc1==10||pc1==11||pc1==12||pc1==13)))//both player and computer have 21
            cout<<"Computer has a natural 21"<<endl<<endl<<"YOU KEEP YOUR ORIGINAL BET: $"
                    <<bet;
    else if (((cc2==1) && (cc1==10||cc1==11||cc1==12||cc1==13)) && ((pc1==1)&&(pc2==10||pc2==11||pc2==12||pc2==13)))//both player and computer have 21
            cout<<"Computer has a natural 21"<<endl<<endl<<"YOU KEEP YOUR ORIGINAL BET: $"
                    <<bet;
    else if  (((cc2==1) && (cc1==10||cc1==11||cc1==12||cc1==13)) && (sumpc == 21))//both player and computer have 21
            cout<<"Computer has a natural 21"<<endl<<endl<<"YOU KEEP YOUR ORIGINAL BET: $"
                    <<bet;
    else if  (((cc2==1) && (cc1==10||cc1==11||cc1==12||cc1==13)) && ((pc2==1) && (pc1==10||pc1==11||pc1==12||pc1==13)))//both player and computer have 21
            cout<<"Computer has a natural 21"<<endl<<endl<<"YOU KEEP YOUR ORIGINAL BET: $"
                    <<bet;
    else if ((sumcc == 21) && ((pc1==1)&&(pc2==10||pc2==11||pc2==12||pc2==13)))//both player and computer have 21
            cout<<"Computer has a natural 21"<<endl<<endl<<"YOU KEEP YOUR ORIGINAL BET: $"
                    <<bet;
    else if ((sumcc == 21) && (sumpc == 21))//both player and computer have 21
             cout<<"Computer has a natural 21"<<endl<<endl<<"YOU KEEP YOUR ORIGINAL BET: $"
                    <<bet;
    else if ((sumcc == 21) && ((pc2==1) && (pc1==10||pc1==11||pc1==12||pc1==13)))//both player and computer have 21
             cout<<"Computer has a natural 21"<<endl<<endl<<"YOU KEEP YOUR ORIGINAL BET: $"
                    <<bet;                
    else//player and computer don't have 21
        cout<<"You don't have a natural 21"<<endl<<endl<<"YOU LOST";
    }
    if (choice1=='n'){
        cout<<"Goodbye";
    }
    cout<<endl;
    cout<<"Do you want to play again? (y or n) ";
    
    cin>>choice2;
    cout<<endl;
    }while(choice2=='y');
    if (choice2=='n')
    {
        cout<<"Goodbye";
    }
    
    
    //Exit stage right!
    return 0;
    
}

