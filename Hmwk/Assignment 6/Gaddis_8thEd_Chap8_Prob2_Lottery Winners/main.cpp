/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 23, 2017, 10:30 PM
 * Purpose:  based on user input of ticket number determine if winner or not
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int SIZE = 10;
//Function Prototypes
bool searchArray(const int[], int, int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int ticket[SIZE]= {13579, 26791, 26792, 33445, 55555,
62483, 77777, 79422, 85647, 93121};//winning ticket numbers 
    int winnum;//number inputted by user
    //Initialize variables
    
    //Input data
    cout<<"Enter the week's winning number: ";
    cin>>winnum;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    if (searchArray(ticket,SIZE,winnum))
        cout<<"This is a winning ticket number";
    else
        cout<<"This is NOT a winning ticket number";
    //Exit stage right!
    return 0;
}

bool searchArray(const int list[], int elements, int value)
{
    bool found = false;
    for (int count =0; count<elements && !found; count++)
    {
        if(list[count]==value)
            found = true;
    }
    return found;
}