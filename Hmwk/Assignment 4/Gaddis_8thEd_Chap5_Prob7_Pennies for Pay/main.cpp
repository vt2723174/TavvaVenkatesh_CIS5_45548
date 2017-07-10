/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 8, 2017, 3:32 PM
 * Purpose:  calculate salary in pennies per day and eventually dollars
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
    float days;//days the salary was earned over
    float        money; //total pennies per day
    float        daypay; //salary per day
    float        total;// total dollar amount earned 
    //Initialize variables
    days=1;
    money=1.0;
            
    //Input data
    cout<<"Enter number of days worked: ";
    cin>>days;
    if (days<1)
    {
        cout<<"Invalid input for days worked";
        
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for (int i =1; i<= days; i++)
    {
        daypay = money/100;
        cout<<"Salary for Day "<<i<<" was "<<daypay<<" pennies"<<endl;
        total+=daypay;
        money *=2;
                
    }
    cout<<"Total salary is $"<< total<<endl;
    //Exit stage right!
    return 0;
}

