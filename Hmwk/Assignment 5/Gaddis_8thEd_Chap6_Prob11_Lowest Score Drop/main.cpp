/* 
 * File:   main.cpp
 * Author: Venkatesh Tavva
 * Created on July 14, 2017, 9:00 PM
 * Purpose:  out of 5 scores find lowest and avg
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float calcAverage (float lowest, float total)
{
    int four; //the other four score sum
    float avg;//avg of scores
    four = total-lowest;
    avg= four/4.0;
    return avg;
}
float findLowest (float amscore[5])
{
    int smallest = amscore[0];//smallest score
    for (int i=1; i<5;i++)
    {
        if (amscore[i]<smallest)
            smallest = amscore[i];
    }
    return smallest;
}
float getScore (float score, float i, float &total)
{
    cout<<"Enter exam "<<i<<" score: ";
    cin>>score;
    while (score<0||score>100)
    {
        cout<<"not accepted";
        cin>>score;
    }
    total += score;
    return score;
}
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float amscore[5];//amount of scores enter = 5
    float score;//each individual score
    float avg;//average 
    float lowest;//lowest socre
    float total;//total of scores
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for (int i=1; i<=5; i++)
    {
        score = getScore(score,i,total);
        amscore[i-1]=score;
    }
    lowest = findLowest(amscore);
    avg = calcAverage(lowest, total);
    cout<<"The lowest score was: "<<lowest<<endl;
    cout<<"The average was: "<<avg;
            //Exit stage right!
    return 0;
}

