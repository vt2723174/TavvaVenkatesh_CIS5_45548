/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 14, 2017, 11:32 AM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

float fallingDistance(int t)
{
    float d;
    float g = 9.8;
    d = (0.5 * g )*(pow(t,2));
    return d;
}

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int t, d;//time in seconds and distance in meters
    //Initialize variables
    
    //Input data
    cout<<"Calculating the distance the object falls from 1 second to 10 seconds"<<endl;
    for (int i=1;i<=10;i++)
    {
        d=fallingDistance (i);
        cout<<"In "<<i<<" seconds "<<"the object falls "<<d<<" m"<<endl;
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}


