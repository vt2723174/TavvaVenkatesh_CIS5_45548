/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 9, 2017, 4:00 PM
 * Purpose:  calculate average rainfall over a period of years 
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
    float years;//years calculated over
    float        month; // months per year (12)
    float        rfall;// rainfall in each year
    float        trfall;// total rainfall over the years 
    float        avgrfall;//average rainfall
    
    //Initialize variables
    month = 12;
    //Input data
    cout<<"Number of years: ";
    cin>>years;
    while (years<1)
        cout<<"Not Accepted";
    for (int i = 1; i<=years; i++)
    {
        for (int month = 1; month <= 12; month++)
        {
            cout<<"Enter rainfall for month "<<month;
            cin>>rfall;
         while (rfall<0)
             cout<<"Not Accepted";
         trfall += rfall;            
        }
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"Months: "<<years*month<<endl;
    cout<<"Total Rainfall: "<<trfall<<" in"<<endl;
    cout<<"Average rainfall: "<<trfall/(years*month)<<" in"<<endl;
    //Exit stage right!
    return 0;
}

