/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 14, 2017, 8:05 PM
 * Purpose:  input mass and velocity to get ke
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float kineticEnergy (int m, int v)
{
    return (0.5*m)*(pow(v,2));
}
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float ke;//kinetic energy
    int m, v;//mass in kg and volume in m/s
    //Initialize variables
    
    //Input data
    cout<<"Enter mass (kg): ";
    cin>>m;
    cout<<"Enter velocity (m/s): ";
    cin>>v;
    //Map inputs to outputs or process the data
    ke = kineticEnergy(m,v);
    
    //Output the transformed data
    cout<<"The object's kinetic energy is: "<<ke<<endl;
    //Exit stage right!
    return 0;
}

