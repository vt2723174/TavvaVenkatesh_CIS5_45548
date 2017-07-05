/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva  
 * Created on June 27, 2017, 4:40 PM
 * Purpose:  Get average through input of five scores
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include<iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double testscore1;
    double testscore2;
    double testscore3;
    double testscore4;
    double testscore5;
    double average;
    
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"What is test score 1?";
            cin>>testscore1;
    cout<<"What is test score 2?";
            cin>>testscore2;
    cout<<"What is test score 3?";
            cin>>testscore3;
    cout<<"What is test score 4?";
            cin>>testscore4;
    cout<<"What is test score 5?";
            cin>>testscore5;
            average = (testscore1+testscore2+testscore3+testscore4+testscore5)/5;
       cout<<setprecision<<showpoint<<fixed;
       cout<<"The average is: "<<average<<endl;
       
    //Exit stage right!
    return 0;
}

