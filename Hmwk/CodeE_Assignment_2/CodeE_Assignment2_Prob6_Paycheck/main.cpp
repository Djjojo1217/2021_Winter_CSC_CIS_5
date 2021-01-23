/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 13, 2021, 3:22 PM
 * Purpose:  Paycheck Calculation
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int   regHour, //Regular Hours Worked
          ovrHour, //Any hours over 40 hours
          totHour; //Total Hours Worked
    float grosPay, //Gross Pay
          payRate; //Pay rate in $'s/hr
           
    //Initialize Variables
   cout<<"This program calculates the gross paycheck."<<endl;
   cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
   cin>>payRate;
   cin>>totHour;
   ovrHour=(totHour>40)?totHour:40;
   regHour=(totHour<40)?totHour:40;
   ovrHour=ovrHour-40;
           
    //Map Inputs to Outputs -> Process
   grosPay=(regHour*payRate)+(ovrHour*payRate*2);
   
    //Display Inputs/Outputs
   cout<<fixed;
   if (grosPay<1000){
       cout<<"Paycheck = $ "<<setprecision(2)<<grosPay;
   }
   else {
       cout<<"Paycheck = $"<<setprecision(2)<<grosPay;
   }
    //Exit the Program - Cleanup
    return 0;
}