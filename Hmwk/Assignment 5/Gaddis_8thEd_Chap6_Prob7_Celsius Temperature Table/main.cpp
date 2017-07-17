/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 14, 2017, 8:20 PM
 * Purpose:  convert from f to c through use of loop
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float Celsius (float f)
{
    float c;
    c = (5.0/9)*(f-32);
    return c;
}
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float c; // user input celsius temp
    //Initialize variables
    
    //Input data
    cout<<"Converting temperatures from Fahrenheit to Celsius for 0 to 20 Fahrenheit"<<endl;
    for (int i =0; i<21; i++)
    {
        c= Celsius(i);
        
        cout<<i<<" Fahrenheit = "<<c<<" Celsius"<<endl;
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

