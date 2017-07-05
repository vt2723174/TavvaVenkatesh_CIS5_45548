/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 5, 2017, 7:50 AM
 * Purpose:  based on combo of colors inputted determined yield color
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include<string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string color1, color2; //red,blue,yellow
    char newline ='\n';
    //Initialize variables
    
    //Input data
    cout<<"Enter primary color 1: ";
    cin>>color1;
    cout<<"Enter primary color 2: ";
    cin>>color2;
            
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    if (color1=="red" and color2=="blue") 
       
    {
        cout<<"You get purple";
        cout<<newline;
    }
    else if (color1=="red" and color2=="yellow") 
     
       {
           cout<<"You get orange";
           cout<<newline;
       }
    else if (color1=="blue" and color2=="yellow")
    {
        cout<<"You get green";
        cout<<newline;
        
    }
    else
    {
        cout<<"Error";
        cout<<newline;
    }
    //Exit stage right!
    return 0;
}

