/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 5, 2021, 3:52 PM
 * Purpose:  Annual Pay Problem
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
   float                   payAmnt; // Amount of Pay / Pay Period
   unsigned short int      payPers, // The Number of Pay Periods
                           annlPay; // Employee's Total Annual Pay
           
    //Initialize Variables
   payAmnt=2200.0;
   payPers=26;
           
    //Map Inputs to Outputs -> Process
   annlPay=payAmnt*payPers;
   
    //Display Inputs/Outputs
   cout<<"The Employee's Total Annual Pay = $"<<annlPay<<" if ";
   cout<<" the employee receive's $"<<payAmnt<<" per pay period ";
   cout<<" for "<<payPers<<" pay periods."<<endl;
   
    //Exit the Program - Cleanup
    return 0;
}