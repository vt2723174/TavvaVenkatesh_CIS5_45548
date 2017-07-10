/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on June 28, 2017, 5:23 PM
 * Purpose:  Gas and Profit Percentage
 */

//System Libraries
#include <iostream>  //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and Initialize variables
    float ppGal;
    float taxGal;//76.4 cents per gallon
    float nGal=15;//Number of Gallons for a fill-up
    float totAmt;//Total Amount tendered or purchase price in $'s
    float totTax;//Total tax paid on fill up
    float prcTax;//Percentage taxed on purchase
    float totprofit;
    float prcprofit;
    //Map inputs to outputs or process the data
    
    
    //Output the transformed data
    cout<<"Number of gallons for a fill up = "<<nGal<<endl;
    cout<<"Price per Gallon paid = $";
    cin>>ppGal;
    taxGal= 0.39+0.10+0.184+0.07+(0.08*ppGal);
    cout<<"Tax paid per Gallon = $"<<taxGal<<endl;
    cout<<"Tax and Profit Composition = 18.4 cents Fed, 39 cents State, 10 cents for cap and trade fee, "<<endl;
    cout<<"8% sales Tax, and 7 cents profit"<<endl;
    totAmt=nGal*ppGal;
    cout<<"Total Amount paid to fill-up = $"<<totAmt<<endl;
    totTax=taxGal*nGal;
    cout<<"Total Taxes paid on fill-up  = $"<<totTax<<endl;
    prcTax=totTax/totAmt*100;
    cout<<"Percentage Tax paid = "<<prcTax<<"%"<<endl;
    totprofit=nGal*0.07;
    cout<<"Total Profit paid to fill-up = $"<<totprofit<<endl;
    prcprofit=totprofit/totAmt;
    cout<<"Percentage Profit paid = "<<prcprofit<<"%"<<endl;
    
    
    //Exit stage right!
    return 0;
}

