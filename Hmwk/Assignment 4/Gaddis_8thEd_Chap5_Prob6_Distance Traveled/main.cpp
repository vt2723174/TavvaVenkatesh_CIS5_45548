/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 8, 2017, 3:20 PM
 * Purpose:  use a loop to display the distance the vehicle has traveled 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float distance;//miles
    float        time; //hour
    float        speed;//mph
    
    //Initialize variables
    
    //Input data
   cout<<"What is the speed of the vehicle in mph? ";
    cin>>speed;
    while (speed<=0)
          cout<<"Negative number for speed not accepted";
    cout<<"How many hours has it traveled? ";
    cin>>time;
    cout<<endl;
    while (time<=1)
    {
        cout<<"Invalid Input for time";
    }
    cout<<"Hour Distance Traveled"<<endl;
    cout<<"----------------------"<<endl;
    
     
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for (int i=1; i<=time; i++)
    {
        distance = speed * i;
        cout<<i<<"\t\t"<<distance<<endl;
        
    }
    //Exit stage right!
    return 0;
}

