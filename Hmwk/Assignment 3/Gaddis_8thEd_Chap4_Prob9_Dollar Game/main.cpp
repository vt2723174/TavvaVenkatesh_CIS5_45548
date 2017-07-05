/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 5, 2017, 8:00 AM
 * Purpose:  create game to see if user enter exactly a dolloar
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
    float penn; // 1 cent
    float nick; // 5 cents
    float dimes; // 10 cents
    float quart; // 25 cents
    float total; // 100 cents = 1 dollar
    char newline = '\n';
    //Initialize variables
    
    //Input data
    cout<<"Pennies: ";
    cin>>penn;
    cout<<"Nickels: ";
    cin>>nick;
    cout<<"DImes: ";
    cin>>dimes;
    cout<<"Quarters: ";
    cin>>quart;
    cout<<newline;
       
    //Map inputs to outputs or process the data
    total = (penn*0.01)+(nick*0.05)+(dimes*0.10)+(quart*0.25);
    //Output the transformed data
    if (total==1.00)
        cout<<"Congratulations.";
    else if (total<1.00)
        cout<<"Less than a dollar";
    else if (total>1.00)
        cout<<"More than a dollar";
    
    //Exit stage right!
    return 0;
}

