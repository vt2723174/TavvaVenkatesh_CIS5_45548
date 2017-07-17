/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 14, 2017, 7:32 PM
 * Purpose: which of five regions has most accidents
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include<string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes


int getNumAccidents(string region)
{
    int accd;
    cout<<"Enter accidents for region "<<region<<":";
    cin>>accd;
    while (accd<0)
    {
        cout<<"not accepted";
        cin>>accd;
    }
    return accd;
}
void findLowest(int reg1, int reg2, int reg3, int reg4, int reg5 )
{
int lowest;
string region ="";

if(reg1 < reg2 && reg1 < reg3 && reg1 < reg4 && reg1 < reg5)
{
    lowest = reg1;
    region="north";
    
}
else if (reg2 < reg1 && reg2 < reg3 && reg2 < reg4 && reg2 < reg5)
{
    lowest= reg2;
    region="south";
}
else if (reg3 < reg1 && reg3 < reg2 && reg3 < reg4 && reg3 < reg5)
{
    lowest=reg3;
    region="east";
}
else if (reg4 < reg1 && reg4 < reg2 && reg4 < reg2 && reg4 < reg5)
{
    lowest = reg4;
    region="west";
    
}
else 
{
    lowest = reg5;
    region = "central";
}
cout <<"Lowest Accidents occurred in region "<<region<<" with "<<lowest<<" number of accidents.";
}
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int north, south, east, west, central;
    //Initialize variables
    
    //Input data
    for (int i=0;i<5;i++)
    {
        switch (i)
        {
            case 1:    
                north=getNumAccidents("north");
                break;
            case 2:
                south=getNumAccidents("south");
                break;
            case 3:
                east = getNumAccidents("east");
                break;
            case 4:
                west = getNumAccidents("west");
                break;
            default:
                central = getNumAccidents("central");        
        }
    }
    
    findLowest(north,south,east,west,central);
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
