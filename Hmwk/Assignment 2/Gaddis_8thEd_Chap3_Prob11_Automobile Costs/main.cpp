/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on June 27, 2017, 5:20 PM
 * Purpose: Calculate total monthly cost of different expenses from operating a car
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
    double loanpayment;
    double insurance;
    double gas;
    double oil;
    double tires;
    double maintenance;
    double monthlycost;
    double annualcost;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"Monthly loan payment: $";
            cin>>loanpayment;
             cout<<"Monthly insurance: $";
            cin>>insurance;
             cout<<"Monthly Gas costs: $";
            cin>>gas;
             cout<<"Monthly Oil costs: $";
            cin>>oil;
             cout<<"Monthly tire costs: $";
            cin>>tires;
             cout<<"Monthly maintenance costs: $";
            cin>>maintenance;
            monthlycost = loanpayment+insurance+gas+oil+tires+maintenance;
            annualcost = monthlycost*12;
            cout<<"Total monthly costs: $"<<monthlycost<<endl;
            cout<<"Total annual cost: $"<<annualcost<<endl;
            
    //Exit stage right!
    return 0;
}

