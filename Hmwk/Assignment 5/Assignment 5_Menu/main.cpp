/* 
  File:   main.cpp
  Author: Venkatesh Tavva
  Created on July 15, 2017, 8:45 PM
  Purpose:  Menu for assignment 5
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

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
float calculateRetail(float cost, float percent)
{
    float rprice;
    rprice = ((cost/100)*percent)+cost;
    return rprice;
}
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
float fallingDistance(int t)
{
    float d;
    float g = 9.8;
    d = (0.5 * g )*(pow(t,2));
    return d;
}
float kineticEnergy (int m, int v)
{
    return (0.5*m)*(pow(v,2));
}
float Celsius (float f)
{
    float c;
    c = (5.0/9)*(f-32);
    return c;
}
float coinToss(void)
{
    int randnum;
    randnum =1+ rand()%2;
    return randnum;
}
float presentValue(float F, float r, float n)
{
    float p;
    p = F/(pow(1+(r*0.01),n));
    return p;
}

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Problem 1"<<endl;
        cout<<"Type 2 for Problem 3"<<endl;
        cout<<"Type 3 for Problem 4"<<endl;
        cout<<"Type 4 for Problem 5"<<endl;
        cout<<"Type 5 for Problem 6"<<endl;
        cout<<"Type 6 for Problem 7"<<endl;
        cout<<"Type 7 for Problem 8"<<endl;
        cout<<"Type 8 for Problem 9"<<endl;
        cout<<"Type 9 for Problem 11"<<endl;
        cout<<"Type any other character to exit"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                cout<<"We are in Problem 1"<<endl;
                float wcost;//wholesale cost
    float per;//markup percentage
    float rprice;//retail price
    //Initialize variables
    
    //Input data
    cout<<"Enter wholesale cost: $";
    cin>>wcost;
    cout<<"Enter markup percentage: ";
    cin>>per;
    
    while (wcost<0||per<0)
    {
        cout<<"Not Accepted";
        cin>>wcost;
        cin>>per;
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    rprice = calculateRetail(wcost,per);
    cout<<"The retail price is: $"<<rprice;
                break;
            }
            case '2':{
                cout<<"We are in Problem 3"<<endl;
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
    
                break;
            }
            case '3':{
                cout<<"We are in Problem 4"<<endl;
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
    
                break;
            }
            case '4':{
                cout<<"We are in Problem 5"<<endl;
                 int t, d;//time in seconds and distance in meters
    //Initialize variables
    
    //Input data
    cout<<"Calculating the distance the object falls from 1 second to 10 seconds"<<endl;
    for (int i=1;i<=10;i++)
    {
        d=fallingDistance (i);
        cout<<"In "<<i<<" seconds "<<"the object falls "<<d<<" m"<<endl;
    }
                break;
            }
            case '5':{
                cout<<"We are in Problem 6"<<endl;
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
                break;
            }
            case '6':{
                cout<<"We are in Problem 7"<<endl;
                 float c; // user input celsius temp
    //Initialize variables
    
    //Input data
    cout<<"Converting temperatures from Fahrenheit to Celsius for 0 to 20 Fahrenheit"<<endl;
    for (int i =0; i<21; i++)
    {
        c= Celsius(i);
        
        cout<<i<<" Fahrenheit = "<<c<<" Celsius"<<endl;
    }
                break;
            }
            case '7':{
                cout<<"We are in Problem 8"<<endl;
                int times, randnum;//times tossed, random number
    string face="";//heads or tails
    //Initialize variables
    
    //Input data
    cout<<"Times the coin should be tossed: ";
    cin>>times;
    //Map inputs to outputs or process the data
    srand((time(0)));
    //Output the transformed data
    for (int i =1; i <=times; i++)
    {
        randnum=coinToss();
        if (randnum ==1)
            face = "heads";
        else 
            face = "tails";
        cout<<face<<endl;
    }
                break;
            }
            case '8':{
                cout<<"We are in Problem 9"<<endl;
                float p;//amount needed to deposit today
    float F;//future value you want
    float r;//apr(%)
    float n;//number of years
    //Initialize variables
    
    //Input data
    cout<<"Enter the future value you want to attain: $";
    cin>>F;
    cout<<"Enter annual percentage rate: ";
    cin>>r;
    cout<<"Enter number of years yow want your money to sit in the account: ";
    cin>>n;
    //Map inputs to outputs or process the data
    p = presentValue(F,r,n);
    //Output the transformed data
    cout<<"You need to deposit $"<<p<<" today"<<endl;
                break;
            }
            case '9':{
                cout<<"We are in Problem 11"<<endl;
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
                break;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}