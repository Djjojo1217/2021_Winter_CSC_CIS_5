/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 13, 2021, 7:03 PM
 * Purpose:  Positive and Negative Sums
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   number, //Ten numbers to be inputed into program
            totSum, //Total Sum
            posSum, //Positive Sum
            negSum; //Negative Sum
            
    //Initialize Variables
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
        
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
        
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
        
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
        
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
        
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
        
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
        
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
        
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
        
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
    
    //Map Inputs to Outputs -> Process
    totSum=posSum+negSum;
   
    //Display Inputs/Outputs
    cout<<"Negative sum = "<<negSum<<endl;
    cout<<"Positive sum =  "<<posSum<<endl;
    cout<<"Total sum    =   "<<totSum;
   
    //Exit the Program - Cleanup
    return 0;
}