/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 5, 2017, 6:30 AM
 * Purpose:  Determine days in a month after user inputting a month and a year
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
    int month;//month has range of 1-12
    int year;
    int days;//range of 28-31
    char newline = '\n';
    //Initialize variables
    
    //Input data
    cout<<"Enter a month (1-12): ";
    cin>>month;
    cout<<"Enter a year: ";
    cin>>year;
    
            
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    if (month==4||month==6||month==9||month==11)
    {
        days=30;
    }
    else if (month==2)
    {
        if((year%4==0 && year%100 !=0)||(year%400==0))
                days=29;
        else
            days=28;
    }
    else
        days=31;
    cout<<days<<" days";
    cout<<newline;
    
    
    //Exit stage right!
    return 0;
}

