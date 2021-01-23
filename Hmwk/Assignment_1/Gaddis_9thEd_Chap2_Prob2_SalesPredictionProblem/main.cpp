/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 5, 2021, 3:15 PM
 * Purpose:  Sales Prediction Problem
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
   int         totSls, // Total Yearly Sales of Company in $
               estCst; // East Coast Division Yearly Sales in $
           
    //Initialize Variables
   totSls=8600000;
           
    //Map Inputs to Outputs -> Process
   estCst=totSls*58/100;
   
    //Display Inputs/Outputs
   cout<<" East Coast Division Sales = $"<<estCst<<" if the company's ";
   cout<<"total sales = $"<<totSls<<endl;
   
    //Exit the Program - Cleanup
    return 0;
}