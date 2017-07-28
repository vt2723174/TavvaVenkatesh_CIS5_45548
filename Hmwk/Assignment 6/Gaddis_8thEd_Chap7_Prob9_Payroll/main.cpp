/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 22, 2017, 12:05 PM
 * Purpose:  program that stores emp ids and asks for hours and pay rate
 * and calculates wages
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include<iomanip>
#include <cstdlib>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int empId[7]={5658845,4520125,7895122,8777541,8451277,1302850,7580489};//holds emp id numbers
    int hours[7];//holds hours worked
    float payRate[7];//holds pay rate
    float wages[7];//holds total earned amount 
    //Initialize variables
    
    //Input data
    for (int i = 0; i<7; i++)
    {
        cout<<"Enter hours worked "<<empId[i]<<": ";
        cin>>hours[i];
        if (hours[i]<0)
        {
            cout<<"Not Accpeted"<<endl;
            cout<<"Enter hours worked "<<empId[i]<<": ";
        cin>>hours[i];
        }
        cout<<"Enter pay rate "<<empId[i]<<": $";
        cin>>payRate[i];
        if (payRate[i]<15)
        {
            cout<<"Not accepted"<<endl;
             cout<<"Enter pay rate "<<empId[i]<<": $";
        cin>>payRate[i];
            
        }
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for (int i=0; i<7;i++)
    {
        wages[i]=hours[i]*payRate[i];
    }
    for (int i=0;i<7;i++)
    {
        cout<<"Employee Id: "<<empId[i]<<endl<<"Wage: $"<<wages[i]<<endl;
    }
    //Exit stage right!
    return 0;
}

