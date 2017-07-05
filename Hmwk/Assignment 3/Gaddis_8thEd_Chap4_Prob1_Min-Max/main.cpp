/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva  
 * Created on July 5, 2017, 6:40 AM
 * Purpose:  Display which number is greater when two numbers are inputted.
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
    int num1, num2;//Number 1 and Number 2
    //Initialize variables
    
    //Input data
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    if (num1>num2){
        cout<<"The larger number is: "<<num1<<endl;
    cout<<"The smaller number is: "<<num2<<endl;
    }
    else {
       cout<<"The larger number is: "<<num2<<endl;
    cout<<"The smaller number is: "<<num1<<endl;
    }
    //Exit stage right!
    return 0;
}

