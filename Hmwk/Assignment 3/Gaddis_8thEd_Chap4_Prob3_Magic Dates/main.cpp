/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 5, 2017, 6:50 AM
 * Purpose:  Determine a date is magic based on input of day, month, and year
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
    int month; //has range (1-12)
    int day;//(0-31)
    int year;
    char newline= '\n';
    //Initialize variables
    
    //Input data
    cout <<"Enter month in numeric form: ";
    cin>>month;
    cout<<"Enter day: " ;
    cin>>day;
    cout<<"Enter year in two digits: ";
    cin>>year;
    //Map inputs to outputs or process the data
    if (month*day == year) 
    {
        cout<<"THE DATE IS MAGIC";
        cout<<newline;
    }
    else{
        cout<<"NOT MAGIC";
        cout<<newline;
    }
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

