/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on June 27, 2017, 4:50 PM
 * Purpose:  Calculate number of widgets on a pallet given different weights
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
    double widgetweight;
    double palletweight;
    double palletwithwidgets;
    double widgetamount;
    
    //Initialize variables
    
    //Input data
    widgetweight = 12.5;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"Enter weight of pallet without an weights: ";
    cin>>palletweight;
    cout<<"Enter weight of pallet with widgets: ";
    cin>>palletwithwidgets;
    widgetamount = (palletwithwidgets-palletweight)/12.5;
    cout<<"There are "<<widgetamount<<" widgets stacked on the pallet";
    
    
    //Exit stage right!
    return 0;
}

