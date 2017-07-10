/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 8, 2017, 3:10 PM
 * Purpose:  use loop to display projected membership rates for next 6 years
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
    float yearfee = 2500;//initial fees for one year
    float feeinc=0.04;//increase per year = 4%
    float years = 6; //projected for the next 6 years 
    
    //Initialize variables
    for (int i =1; i<= years; i++)
    {
        yearfee= yearfee+(yearfee*feeinc);
        cout<<"$"<<yearfee<<" for year "<<i<<endl;
        
    }
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

