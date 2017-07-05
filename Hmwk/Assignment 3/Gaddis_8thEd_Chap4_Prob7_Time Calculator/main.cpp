/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 5, 2017, 7:40 AM
 * Purpose:  Based on number of seconds, calculate min, hours, or days
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include<iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float second, hour, day; //in seconds
    char newline='\n';
    //Initialize variables
    
    //Input data
    cout<<"Enter seconds: ";
    cin>>second;
    cout<<newline;
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<setprecision(2)<<fixed;
    if(second>=86400)
    {
        cout<<"There are "<<second/86400<< " days";
        cout<<newline;
    }
    else if(second>=3600)
    {
        cout<<"There are "<<second/3600<< " hours";
        cout<<newline;
        
    }
    else if (second>=60)
    {
        cout<<"There are "<<second/60<<" minutes";
        cout<<newline;
    }
    //Exit stage right!
    return 0;
}

