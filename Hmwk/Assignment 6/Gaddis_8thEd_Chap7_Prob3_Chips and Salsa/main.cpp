/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 21th, 2017, 1:30 PM
 * Purpose:  input different salsa sales and create report.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
#include<iomanip>
#include<cstdlib>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int salesData(string[], int[]);
int largest(int[]);
int smallest(int[]);
void report(string[],int[], int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    
    string salsa[5]={"mild","medium","sweet","hot","zesty"};//five salsa flavors
    int sales[5];//holds the amount of jars sold for each salsa flavor
    int jtotal = salesData(salsa, sales);//total jars sold
    
    //Initialize variables
    
    //Input data
  
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
   report(salsa, sales, jtotal);
    //Exit stage right!
    return 0;
}
int salesData(string salsa[], int sales[])
{
    int total;//total sales
    for (int i=0; i<5; i++)
    {
        cout<<"Jars sold of "<<salsa[i]<<": ";
        cin>>sales[i];
        if (sales [i]<0)
        {
            cout<<"Not Accepted";
            cin>>sales[i];
        }
        total+=sales[i];
    }
    return total;
}
void report (string salsa[], int sales[], int total)
{
    int highest = largest(sales);//highest selling flavor
    int lowest = smallest(sales);//lowest selling flavor
    cout<<endl<<endl;
    cout<<"Sales Report"<<endl<<endl;
    cout<<"Name       Amount sold";
    cout<<endl;
    for (int i=0; i<5;i++)
        cout<<salsa[i]<<"            "<<sales[i]<<endl;
    cout<<"Total sales: "<<total<<endl;
    cout<<"Highest selling flavor: "<<salsa[highest]<<endl;
    cout<<"Lowest selling flavor: "<<salsa[lowest]<<endl;
            
}
int largest(int array[])
{
    int currentl=0;//current value of jars sold for determining largest 
    for (int i=1; i<5; i++)
    {
        if (array[i]>array[currentl])
            currentl= i;
    }
    return currentl;
}
int smallest (int array[])
{
    int currents=0;//current value of jars sold for determining smallest
    for (int i=1; i<5; i++)
    {
        if (array[i]<array[currents])
            currents=i;
    }
    return currents;
}
