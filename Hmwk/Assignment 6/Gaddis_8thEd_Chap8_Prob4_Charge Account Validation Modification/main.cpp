/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 23, 2017, 11:30 PM
 * Purpose:  determine whether account is valid or not based on input
 */

//System Libraries
#include <iostream>  //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int elements = 18;
//Function Prototypes
void selectionSort(int arr[elements]);
bool binarySearch(int, int arr[elements]);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    
    int account[]={5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int accnum;
    bool found = true;
    //Initialize variables
    
    //Input data
     
    cout<<"Enter charge account number: ";
    selectionSort(account);
    cin>>accnum;
    
    if (found==binarySearch(accnum, account))
        cout<<"Account "<<accnum<<" is valid"<<endl;
    else
        cout<<"Account "<<accnum<<" is NOT valid"<<endl;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

bool binarySearch(int inputacc, int arr[elements])
{
    int first =0;
    int middle=0;
    int last = elements -1;
    int position =0;
    
    while(first<=last)
    {
        middle=(first+last/2);
        if (arr[middle]==inputacc)
            return true;
        else if (arr[middle]>inputacc)
            last=middle-1;
        else
            first=middle+1;
    }
    return false;
}
void selectionSort(int arr[elements])
{
    int minIndex=0;
    for (int i=0;i<elements-1;i++)
    {
        int minIndex=i;
        int minValue = arr[i];
        for (int c =i+1; c<elements; c++)
        {
            if(arr[c]<minValue)
            {
                minValue=arr[c];
                minIndex = c;
            }
        }
        int temp = arr[i];
        arr[i]= minValue;
        arr[minIndex]= temp;
    }
}