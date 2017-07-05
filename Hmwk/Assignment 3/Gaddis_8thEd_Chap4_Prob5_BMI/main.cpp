/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 5, 2017, 7:10 AM
 * Purpose:  calculate and display bmi based on weight and height 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include<cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float weight; //in pounds
    float height; //in inches
    float bmi;
    char newline = '\n';
    //Initialize variables
    
    //Input data
    cout<<"Enter weight in pounds: ";
    cin>>weight;
    cout<<newline;
    cout<<"Enter height in inches: ";
    cin>>height;
    cout<<newline;
    //Map inputs to outputs or process the data
    bmi=(weight*703)/(height*height);
    //Output the transformed data
    cout<<"BMI is: "<<bmi<<endl;
    cout<<newline;
    if(bmi<18.5)
    {
        cout<<"Underweight";
        cout<<newline;
    }
    else if (bmi>=18.5 && bmi<=25)
    {
        cout<<"Optimal";
        cout<<newline;
    }
    else if (bmi>25)
    {
        cout<<"Overweight";
        cout<<newline;
    }
            
    //Exit stage right!
    return 0;
}

