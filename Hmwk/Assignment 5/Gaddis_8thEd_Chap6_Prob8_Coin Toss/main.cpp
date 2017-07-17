/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 14, 2017, 8:30 PM
 * Purpose:  stimulates tossing a coin
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
#include <ctime>
#include<cstdlib>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float coinToss(void)
{
    int randnum;
    randnum =1+ rand()%2;
    return randnum;
}
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int times, randnum;//times tossed, random number
    string face="";//heads or tails
    //Initialize variables
    
    //Input data
    cout<<"Times the coin should be tossed: ";
    cin>>times;
    //Map inputs to outputs or process the data
    srand((time(0)));
    //Output the transformed data
    for (int i =1; i <=times; i++)
    {
        randnum=coinToss();
        if (randnum ==1)
            face = "heads";
        else 
            face = "tails";
        cout<<face<<endl;
    }
    //Exit stage right!
    return 0;
}

