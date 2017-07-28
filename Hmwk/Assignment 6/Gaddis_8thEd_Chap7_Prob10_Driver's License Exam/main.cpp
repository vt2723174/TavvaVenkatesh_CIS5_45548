/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 23, 2017, 12:10 PM
 * Purpose:  prompt users to enter answers to test and display results 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void checkAnswers (char[],char[],int, int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int questions = 20;//20 questions in the test
    const int cneed = 15;//student needs 15 correct to pass
    char answers [questions] = {'A','D','B','B','C','B','A','B','C','D','A','C','D','B','D','C','C','A','D','B'};//holds correct answers
    char stuans[questions];//holds students answers
    //Initialize variables
    
    //Input data
    for (int ans=0;ans<questions;ans++)
    {
        cout<<"Enter answer "<<(ans+1)<<": ";
        cin>>stuans[ans];
    
    while (stuans[ans]!='A' && stuans[ans]!='B' && stuans[ans]!='C' && stuans[ans]!='D')
    {
        cout<<"Not accepted"<<endl;
        cout<<"Enter answer: "<<(ans+1)<<": ";
        cin>>stuans[ans];
        
    }
    }
    checkAnswers(answers, stuans,questions,cneed);

    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
void checkAnswers (char answers1[], char stuans1[], int questions, int cneed)
{
    int cans=0;//correct answers 
for (int i=0; i<questions; i++)
{
    if (answers1[i]==stuans1[i])
        cans++;
}
    cout<<endl;
    cout<<"Need at least 15 correct to pass"<<endl;
    if(cans>=cneed)
    {
        cout<<endl;
        cout<<"You passed"<<endl<<endl;
    }
    else
    {
        cout<<"You failed"<<endl<<endl;
    }
    cout<<"Incorrectly answered questions: "<<endl;
    for (int i=0; i<questions; i++)
    {
        if (answers1[i]!=stuans1[i])
        
            cout<<"Question #"<<i<<" is incorrect"<<endl;
            
    }    
        cout<<"Correct Answers: "<<cans<<endl;
        cout<<"Wrong Answers: "<<questions-cans<<endl;
    }
    