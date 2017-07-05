/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on June 27, 2017, 5:40 PM
 * Purpose:  Convert us dollars to yen and euros
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include<iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double dollars;
    double yen;
    double euros;
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<setprecision(2)<<showpoint<<fixed;
    cout<<"Dollars: ";
    cin>>dollars;
    yen = dollars*YEN_PER_DOLLAR;
    euros = dollars*EUROS_PER_DOLLAR;
    cout<<yen<<" Yen"<<endl;
    cout<<euros<<" Euros";
    //Exit stage right!
    return 0;
}

