/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 8, 2017, 3:40 PM
 * Purpose:  calculate occupancy rate for a hotel
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
    float frooms;//rooms on each floor
    float        trooms;//total rooms in hotel
    float        tfloors; //total floors
    float        orooms;//rooms occupied
    float        tocroom; //total rooms occupied
    float        perocc;//percent occupation
    
    //Initialize variables
    
    //Input data
    cout<<"Enter number of floors: ";
    cin>>tfloors;
    while (tfloors<1)
    {
        cout<<"Not Accepted"<<endl;
        cin>>tfloors;
        
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for (int i =1; i<=tfloors; i++)
    {
    if (i != 13)
    {
         cout<<"Enter number of rooms on floor: "<< i;
          cin>>frooms;
    
    while (frooms<10)
    {
        cout<<"Not Accepted"<<endl;
        cin>>frooms;
    }
    }
    cout<<"Enter rooms occupied: ";
    cin>>orooms;
    trooms += frooms;
    tocroom += orooms;
    }
    perocc= (tocroom* 1.0f / trooms)* 100.0f;
    
    cout<<"Hotel has "<<tfloors<<" floors"<<endl;
    cout<<"Hotel has "<<trooms<<" rooms"<<endl;
    cout<<"There are "<<trooms-orooms<<" empty rooms"<<endl;
    cout<<"Occupied rooms percentage is: "<<perocc<<"%"<<endl;
    
    //Exit stage right!
    return 0;
}

