/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 6, 2021, 4:17 PM
 * Purpose:  Rise of Ocean Levels Calculations
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
   float      oceIncr, // Increase in Ocean Level / year in millimeters
               ocLev5, // Increase in Ocean level after 5 Years in millimeters
               ocLev7, // Increase in Ocean level after 7 Years in millimeters
              ocLev10; // Increase in Ocean level after 10 Years in millimeters
           
    //Initialize Variables
   oceIncr=1.5;
           
    //Map Inputs to Outputs -> Process
           ocLev5=oceIncr*5;
           ocLev7=oceIncr*7;
           ocLev10=oceIncr*10;
           
    //Display Inputs/Outputs
   cout<<"After 5 years the ocean is "<<ocLev5<<" millimeters higher ";
   cout<<" than its original level."<<endl;
   cout<<"After 7 years the ocean is "<<ocLev7<<" millimeters higher ";
   cout<<" than its original level."<<endl;
   cout<<"After 10 years the ocean is "<<ocLev10<<" millimeters higher ";
   cout<<" than its original level."<<endl;
   
    //Exit the Program - Cleanup
    return 0;
}