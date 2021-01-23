/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 9, 2021, 2:39 PM
 * Purpose:  Miles Per Gallon Calculation
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
   unsigned short int      mpg, // Miles/ Gallon of gas
                       milDriv, // Miles Driven Before Refueling
                        galGas; // Amount of Gas Car Can Hold in Gallons
           
    //Initialize Variables
   milDriv=375;
   galGas=15;
           
    //Map Inputs to Outputs -> Process
   mpg=milDriv/galGas;
   
    //Display Inputs/Outputs
   cout<<" The car gets "<<mpg<<" miles per gallon."<<endl;
   
    //Exit the Program - Cleanup
    return 0;
}