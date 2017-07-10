/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 9, 2017 4:32 PM
 * Purpose:  predict the size of a populations of organisms
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
    float start;//starting number of organisms
    float       dayinc; //average daily population increase in percent
    float        daynum; //number of days they multiply
    float        pdaily; //population daily after starting and increasing 
    //Initialize variables
    
    //Input data
    cout<<"Enter starting number of organisms: ";
    cin>>start;
    while (start<2)
        cout<<"Not Accepted";
    cout<<"Enter number of days the population multiplied: ";
    cin>>daynum;
    while (daynum<1)
        cout<<"Not Accepted";
    cout<<"Enter average daily population increase as percentage: ";
    cin>>dayinc;
    while (dayinc <0)
        cout<<"Not Accepted";
    
        
    
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for (int i = 1; i<=daynum; i++)
    {
        
        pdaily=((dayinc/100)*start)+start;
        cout<<"Population for day "<<i<<":"<<pdaily<<endl;
        start=pdaily;
    }
    //Exit stage right!
    return 0;
   
}

