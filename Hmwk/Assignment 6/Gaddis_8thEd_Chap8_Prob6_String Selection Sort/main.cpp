/* 
 * File:   main.cpp
 * Author: Venkatesh
 * Created on July 23, 2017, 12:30 PM
 * Purpose:  sort a list of names
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void selectionSort(string[], int);
void showArray(string[],int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int NUM_NAMES = 20;//20 names 
    string names[NUM_NAMES]=  {"Collins, Bill", "Smith, Bart", "Allen, Jim",
 "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
 "Taylor, Terri", "Johnson, Jill",
 "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
 "James, Jean", "Weaver, Jim", "Pore, Bob",
 "Rutherford, Greg", "Javens, Renee",
 "Harrison, Rose", "Setzer, Cathy",
 "Pike, Gordon", "Holland, Beth" }; //holds names 
    
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    selectionSort (names, NUM_NAMES);
    showArray (names, NUM_NAMES);
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

void selectionSort(string list[],int elements )
{
    int startScan, minIndex;
    string minValue;
    for (int startScan=0; startScan<(elements-1);startScan++)
    {
        minIndex = startScan;
        minValue = list[startScan];
        for (int index =startScan +1; index<elements;index++)
        {
            if (list[index]<minValue)
            {
                minValue = list[index];
                minIndex = index;
            }
        }
        list[minIndex]=list[startScan];
        list[startScan] = minValue;
    }
}
void showArray(string names[], int elements)
{
    for (int i=0; i<elements; i++)
    {
        cout<<names[i]<<endl;
    }
}