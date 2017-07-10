/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 8, 2017, 2:40 AM
 * Purpose:  use loop to display characters for ASCII code
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
    char letter; //character 
    
    //Initialize variables
    letter = 0;
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"Displaying ASCII codes for 0 to 127."<<endl;
    for (int count = 0; count <= 127; count++)
    {
        if (count % 16 ==0)
       cout<<endl;
        cout<<letter<<" ";
        count+1; letter++;
    }
    //Exit stage right!
    return 0;
}

