/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 23, 2017, 11:10 AM
 * Purpose:  based on user input of number determine winner or not 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int SIZE = 10;
//Function Prototypes
int searchArray(int[], int, int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int ticket[SIZE]= { 13579, 26791, 26792, 33445, 55555,
62483, 77777, 79422, 85647, 93121 };//holds ticket numbers
    int winnum;//user inputted number 
    int search;//results from binary search
    
    //Initialize variables
    
    //Input data
     
    cout<<"Enter the week's winning number: ";
    cin>>winnum;
    search = searchArray(ticket, SIZE, winnum);

    //Map inputs to outputs or process the data
    
    //Output the transformed data
    if (search == -1)
    
        cout<<"This is NOT a winning ticket number";
    
    else
    {
        cout<<"This is a winning ticket number";
    }
    //Exit stage right!
    return 0;
}

int searchArray(int list[], int elements, int value)
{
    int position = -1,
            first = 0,
            last = elements -1,
            middle;
    bool found = false;
    
    while (!found && first<=last)
    {
        middle = (first+last)/2;
        if (list[middle]==value)
        {
            position = middle;
            found=true;
        }
        else if (list[middle]>value)
            last=middle-1;
        else 
            first = middle+1;
    }
    return position;
}