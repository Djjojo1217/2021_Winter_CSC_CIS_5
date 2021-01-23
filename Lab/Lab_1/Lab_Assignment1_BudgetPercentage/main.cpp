/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 12, 2021, 6:45 AM
 * Purpose:  Calculate Military Budget as Percentage of Federal Budget
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float    milBdgt, //Military Budget of United States
             fedBdgt, //Federal Budget of United States
             mlPrcnt; //Military Budget as Percentage of Federal Budget
    
    //Initialize Variables
    milBdgt=7.0e11f; //Military Budget = $700 Billion
    fedBdgt=4.1e12f; //Federal Budget = $4.1 Trillion
    
    //Map Inputs to Outputs -> Process
    mlPrcnt=milBdgt/fedBdgt*100;
            
    //Display Inputs/Outputs
    cout<<"The Military Budget is "<<setprecision(4)<<mlPrcnt<<
            "% of the Federal Budget"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}