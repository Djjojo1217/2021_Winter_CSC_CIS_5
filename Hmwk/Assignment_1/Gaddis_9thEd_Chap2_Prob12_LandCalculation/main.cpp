/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 9, 2021, 2:41 PM
 * Purpose:  Land Calculation
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
   int             acre, // Area of Land / acre in Ft^2
                trctLnd, // Area of Tract of Land in Ft^2
                numAcre; // Number of Acres in Tract of Land
           
    //Initialize Variables
   acre=43560;
   trctLnd=391876;
           
    //Map Inputs to Outputs -> Process
   numAcre=trctLnd/acre+1;
   
    //Display Inputs/Outputs
   cout<<"Approximate Number of Acres = "<<numAcre<<" in a ";
   cout<<trctLnd<<" ft^2 tract of land"<<endl;
   
    //Exit the Program - Cleanup
    return 0;
}