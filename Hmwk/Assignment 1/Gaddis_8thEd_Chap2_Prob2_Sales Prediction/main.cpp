/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on June 22, 2017, 9:40 AM
 * Purpose:  Predict Sales of a Division in a company
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
    float E_sales = 0.58f; //East Coast sales 58 percent of revenue
    float Company = 8.6e6f; //total revenue
    //Initialize variables
    float E_division_generates = E_sales*Company;
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
 cout  <<"$" << E_division_generates << " in sales." << endl;
    //Exit stage right!
    return 0;
}

