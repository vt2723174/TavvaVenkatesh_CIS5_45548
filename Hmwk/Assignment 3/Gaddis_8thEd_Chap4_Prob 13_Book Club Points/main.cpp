/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 5, 2017, 6:20 AM
 * Purpose:  Display number of points based on number of books bought
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
    int books;//number of books
    char newline='/n';
    //Initialize variables
    
    //Input data
    cout<<"Enter number of books: ";
    cin>>books;
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    if (books==0)
    {
        cout<<"You earned 0 points";
    }
    else if (books==1)
    {
        cout<<"You earned 5 points";
    }
    else if (books==2)
    {
        cout<<"You earned 15 points";
    }
    else if (books==3)
    {
        cout<<"You earned 30 points";
    }
    else if (books>=4)
    {
        cout<<"You earned 60 points";
    }
            
    //Exit stage right!
    return 0;
}

