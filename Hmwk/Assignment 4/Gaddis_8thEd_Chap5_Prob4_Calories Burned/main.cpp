/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 8, 2017, 3:00 PM
 * Purpose:  use loop to display calories burned
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
    float cburned; //calories burned 
    float cpermin;//calories burned per minute (3.6)
    
    //Initialize variables
    cpermin= 3.6f;
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for (int i = 5; i<=30; i+=5)
    {
        cburned = i*cpermin;
        cout<<cburned<<"  calories burned in "<<i<<" minutes"<<endl;
        
    }
    //Exit stage right!
    return 0;
}

