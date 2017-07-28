/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 21, 2017, 7:50 PM
 * Purpose:  create array with 12 months and determine avg, highest and lowest
 * rainfall
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
    float rfall[12];//rainfall for 12 months array
    float ytotal;//total yearly rainfall 
    float monavg;//monthly average rainfall
    float maxmon;//months with max rainfall
    float minmon;//months with min rainfall
    float cmonth;//current month for comparison
    //Initialize variables
    
    //Input data
    for (int i=0; i<12; i++)
    {
        cout<<"Enter rainfall for month "<<i+1<<": ";
        cin>>rfall[i];
        if (rfall[i]<0)
        {
            cout<<"Not accepted";
            cout<<"Enter rainfall for month "<<i+1<<": ";
        cin>>rfall[i];
        }
        ytotal+=rfall[i];
    }
    
    
    //Map inputs to outputs or process the data
    monavg = ytotal/12;
    maxmon = rfall[0];
    minmon = rfall[0];
    //Output the transformed data
    for (int i=0;i<12;i++)
    {
        cmonth=rfall[i];
        if (cmonth < minmon)
            minmon = cmonth;
        
        if (cmonth > maxmon)
            maxmon = cmonth;
    }
    cout<<"Total rainfall for the year was: "<<ytotal<<endl;
    cout<<"Average monthly rainfall was: "<<monavg<<endl;
    cout<<"Month with the highest rainfall was: "<<maxmon<<endl;
    cout<<"Month with the lowest rainfall was: "<<minmon<<endl;
    //Exit stage right!
    return 0;
}

