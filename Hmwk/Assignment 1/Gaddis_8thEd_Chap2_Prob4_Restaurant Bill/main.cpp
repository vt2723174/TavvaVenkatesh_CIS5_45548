/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on June 22, 2017, 10:05 AM
 * Purpose:  Calculate Restaurant Bill given meal charge, tip, and tax
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
    
    //Input data
    double MealCharge = 88.67,
    Tax = MealCharge*0.0675,
Tip = (MealCharge + Tax)*0.20,
            Bill = MealCharge + Tax + Tip;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
            cout<<"Meal Charge = $"<<MealCharge <<endl;
    cout << "Tax = $"<<Tax<<endl;
    cout<<"Tip = $"<<Tip<<endl;
    cout<<"Bill Total =$" <<Bill<<endl;
            
    
    //Exit stage right!
    return 0;

}

