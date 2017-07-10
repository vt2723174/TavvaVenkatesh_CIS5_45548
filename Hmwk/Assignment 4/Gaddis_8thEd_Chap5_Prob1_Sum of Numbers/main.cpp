/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 8, 2017, 1:30 PM
 * Purpose:  Use loop to generate sum of 1 and some entered number
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include<cstdlib>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int pint, sum=0; //postive integer and sum 
    
    
    //Initialize variables
    
    //Input data
    cout<<"Enter a postive integer"<<endl;
    cin>>pint;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    for (int i =1; i<=pint; i++)
        while (pint>1)
        {
            sum += i;
            
            cout<<"The sum of 1 to "<<pint<<" is "<<sum<<endl;
        break;    
        }
    while (pint<0)
        {
            cout<<"Negative number not accepted"<<endl;
            break;
        }
    
    //Exit stage right!
    return 0;
}

