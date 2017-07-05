/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on June 27, 2017, 4:30 PM
 * Purpose:  Calculate Miles per Gallon 
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
    double capacity;
    double miles;
    double average;
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"Enter the tank capacity: ";
    cin>>capacity;
    cout<<"Enter the amount of miles driven on a full tank: ";
    cin>>miles;
    average = miles/capacity;
    cout<<"MPG is: "<<average<<endl;
    //Exit stage right!
    return 0;
}

