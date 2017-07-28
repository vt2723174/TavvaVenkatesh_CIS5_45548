/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 22th, 2017, 1:30 PM
 * Purpose:  given input of account number determine validity 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int elements = 18;
//Function Prototypes

bool searchArray(int, int[elements]);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    
    int account[]={5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
1005231, 6545231, 3852085, 7576651, 7881200, 4581002};//holds account numbers
    int accnum;//account number 
    bool found = true;
    //Initialize variables
    
    //Input data
    cout<<"Enter charge account number: ";
    cin>>accnum;
    if (found==searchArray(accnum, account))
        cout<<"Account "<<accnum<<" is valid"<<endl;
    else
        cout<<"Account "<<accnum<<" is NOT valid"<<endl;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

bool searchArray(int inputacc, int lookarr[elements])//inputted account number and search array with elements
{
    for (int i=0; i<elements; i++)
    {
        if (inputacc==lookarr[i])
            return true;
    }
    return false;
}