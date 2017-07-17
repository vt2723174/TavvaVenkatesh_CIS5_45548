/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 14, 2017, 8:50 PM
 * Purpose:  determine what to deposit in order to attain an inputted amount
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float presentValue(float F, float r, float n)
{
    float p;
    p = F/(pow(1+(r*0.01),n));
    return p;
}
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float p;//amount needed to deposit today
    float F;//future value you want
    float r;//apr(%)
    float n;//number of years
    //Initialize variables
    
    //Input data
    cout<<"Enter the future value you want to attain: $";
    cin>>F;
    cout<<"Enter annual percentage rate: ";
    cin>>r;
    cout<<"Enter number of years yow want your money to sit in the account: ";
    cin>>n;
    //Map inputs to outputs or process the data
    p = presentValue(F,r,n);
    //Output the transformed data
    cout<<"You need to deposit $"<<p<<" today"<<endl;
    //Exit stage right!
    return 0;
}

