/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 8, 2017, 2:50 PM
 * Purpose:  create table displaying ocean level increase
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
    
    //Initialize variables
    float olevel;//ocean level 
    float years;// years = 25
    //Input data
    years=25;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for (int i = 1; i <=years; i++)
    {
            olevel +=1.5;
    cout<<"Ocean levels risen in year "<<i<<" mm"<<endl;
    }
        
    //Exit stage right!
    return 0;
}

