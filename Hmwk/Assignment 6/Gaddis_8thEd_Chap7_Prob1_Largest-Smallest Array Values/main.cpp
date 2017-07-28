/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 21, 2017, 5:40 PM
 * Purpose:  Determine largest and smallest value in an array of 10 values
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
    int values[10];//10 numbers in an array
    int small;//holds smallest value
    int large;//holds largest value
    int number;//value of current number
    //Initialize variables
    
    //Input data
    for (int i=0;i<10; i++)
    {
        cout<<"Enter value "<<i+1<<": ";
        cin>>values[i];
    }

    //Map inputs to outputs or process the data
    
    //Output the transformed data
    small = values[0];
    large = values[0];
    for (int i=0; i<10; i++)
    {
        number = values[i];
        
        if (number>large)
            large = number;
        
        if (number<small)
            small=number;
    }
    cout<<"The smallest value is: "<<small<<endl;
    cout<<"The largest value is: "<<large<<endl;
    //Exit stage right!
    return 0;
}

