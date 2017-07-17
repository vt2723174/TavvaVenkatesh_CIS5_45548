/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 14, 2017, 9:20 PM
 * Purpose:  determine which division had the greatest sales
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
 
     float getSales(string name)
    {
         float sales;//user inputting of sales
    cout<<"Enter sales for division "<<name<<": $";
    cin>>sales;
    
    while (sales<0)
    {
        cout<<"Not accepted";
    }
    return sales;
    }

 void findHighest (float nediv,float sediv, float nwdiv, float swdiv)
    {
     float highest;//output of division with the highest sales
     string division;//output division name
    if(nediv > sediv && nediv > nwdiv && sediv > swdiv)
    {
        highest = nediv;
        division = "Northeast";
                
    }
    else if (sediv > nediv && sediv > nwdiv && sediv > swdiv)
    {
        highest = sediv;
        division = "Southeast";
       
    }
    else if (nwdiv > nediv && nwdiv > sediv && nwdiv > swdiv)
    {
        highest = nwdiv;
        division = "Northwest";
    }
    else 
    {
        highest = swdiv;
        division = "southwest";
    }
    
    cout<<"The division "<<division<< " had the greatest sales for the quarter"<<
            " with sales of $"<<highest;
    }
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float nediv;//northeast division sales
    float sediv;//southeast division sales
    float nwdiv;//northwest division sales
    float swdiv;//southwest division sales
    
    
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for (int i = 0; i<4; i++)
    {
        switch (i)
        {
            case 1:
                nediv = getSales("ne");
                break;
            case 2:
                sediv = getSales("se");
                break;
            case 3: 
                nwdiv = getSales("nw");
                break;
            default:
                swdiv = getSales("sw");
                break;
                        
        }
    }
    findHighest(nediv, sediv, nwdiv, swdiv);
    
    
   
   
    
    //Exit stage right!
    return 0;
}

