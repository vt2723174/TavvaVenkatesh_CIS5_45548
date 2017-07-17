/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 14, 2017, 1:30 PM
 * Purpose:  Calculate retail price given wholesale cost and percentage markup
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float calculateRetail(float cost, float percent)
{
    float rprice;
    rprice = ((cost/100)*percent)+cost;
    return rprice;
}
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float wcost;//wholesale cost
    float per;//markup percentage
    float rprice;//retail price
    //Initialize variables
    
    //Input data
    cout<<"Enter wholesale cost: $";
    cin>>wcost;
    cout<<"Enter markup percentage: ";
    cin>>per;
    
    while (wcost<0||per<0)
    {
        cout<<"Not Accepted";
        cin>>wcost;
        cin>>per;
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    rprice = calculateRetail(wcost,per);
    cout<<"The retail price is: $"<<rprice;
    //Exit stage right!
    return 0;
}

