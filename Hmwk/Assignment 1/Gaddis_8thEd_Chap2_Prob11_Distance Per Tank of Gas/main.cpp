/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on June 22, 2017, 3:40 PM
 * Purpose:  Calculate highway and town distance given mpg and gsllons
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
    
    //Initialize variables
    double gastank = 20;
    double averagetownmpg = 23.5;
    double averagehighwaympg = 28.9;
    double distance;
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"the distance while in town "<<gastank*averagetownmpg<<" miles";
        cout<<"the distance while on highway "<<gastank*averagehighwaympg<<" miles";

    //Exit stage right!
    return 0;
}

