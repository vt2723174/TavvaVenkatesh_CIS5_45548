/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on June 27, 2017, 4:45 PM
 * Purpose:  Calculate average rainfall given three months and rainfall
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include<iomanip>
#include<string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string month1,month2,month3;
    double rainfall1;
    double rainfall2;
    double rainfall3;
    double average;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"Name of month: ";
    cin>>month1;
    cout<<"Rainfall: ";
    cin>>rainfall1;
    cout<<"Name of month: ";
    cin>>month2;
    cout<<"Rainfall: ";
    cin>>rainfall2;
    cout<<"Name of month: ";
    cin>>month3;
    cout<<"Rainfall: ";
    cin>>rainfall3;
    average = (rainfall1+rainfall2+rainfall3)/3;
    cout<<setprecision(2)<<showpoint<<fixed;
    cout<<"The average rainfall for "<<month1<<", "<<month2<<", and "<<month3<<" is: "<<average<<" inches"<<endl;
    
            
    
    //Exit stage right!
    return 0;
}

