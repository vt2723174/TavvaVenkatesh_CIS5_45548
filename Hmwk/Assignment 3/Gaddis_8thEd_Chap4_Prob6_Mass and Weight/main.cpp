/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 5, 2017, 7:30 AM
 * Purpose:  Calculate weight based on mass
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
    float mass; //in kilograms
    float weight; // in newtons
    char newline = '\n';
    
    //Initialize variables
    
    //Input data
    cout<<"Object's mass in kg: ";
    cin>>mass;
    cout<<newline;
    //Map inputs to outputs or process the data
    weight=mass*9.8;
    //Output the transformed data
            cout<<"Weight is: "<<weight<<" newtons";
    cout<<newline;
    if(weight>1000)
    {
        cout<<"Too Heavy";
        cout<<newline;
    }    
    else if(weight<10)
    {
        cout<<"Too light";
        cout<<newline;
        
    }
    //Exit stage right!
    return 0;
}

