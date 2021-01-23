/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 5, 2021, 3:37 PM
 * Purpose:  Average Value Problem
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
  unsigned short int     tweEght, // The Number Twenty Eight
                         tweFour, // The Number Twenty Four
                         thirTwo, // The Number Thirty Two
                         thirThr, // The Number Thirty Three
                         thirSev, // The Number Thirty Seven
                             sum, // The Sum of the Five Numbers
                             avg; // Average Value of the Numbers
          
    //Initialize Variables
   tweEght=28;
   tweFour=24;
   thirTwo=32;
   thirThr=33;
   thirSev=37;
           
    //Map Inputs to Outputs -> Process
   sum=tweEght+tweFour+thirTwo+thirThr+thirSev;
   avg=sum/5;
   
    //Display Inputs/Outputs
   cout<<" The Average Value = "<<avg<<" for the numbers ";
   cout<<" 28, 24, 32, 33, and 37. "<<endl;
   
    //Exit the Program - Cleanup
    return 0;
}