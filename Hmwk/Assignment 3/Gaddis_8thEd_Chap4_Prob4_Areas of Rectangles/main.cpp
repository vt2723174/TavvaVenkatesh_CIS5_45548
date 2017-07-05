/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 5, 2017, 7:00 AM
 * Purpose:  Based on widths and lengths of two rectangles determine which hasa greater area
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
    int length1, width1, area1, length2, width2, area2;
    char newline = '\n';
    
    //Initialize variables
    
    //Input data
    cout<<"length of rectangle 1: ";
    cin>>length1;
    cout<<"width of rectangle 1: ";
    cin>>width1;
    cout<<"length of rectangle 2: ";
    cin>>length2;
    cout<<"width of rectangle 2: ";
    cin>>width2;
    
    //Map inputs to outputs or process the data
    area1=length1*width1;
    area2=length2*width2;
    //Output the transformed data
    if(area1>area2)
    {
        cout<<"Area of rectangle 1 is greater than area of rectangle 2";
        cout<<newline;
       
    }
    else if(area2>area1)
    {
        cout<<"Area of rectangle 2 is greater than area of rectangle 1";
        cout<<newline;
    }
    //Exit stage right!
    return 0;
}

