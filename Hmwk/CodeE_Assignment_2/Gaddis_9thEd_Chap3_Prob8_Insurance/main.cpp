/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 13, 2021, 11:27 AM
 * Purpose:  Calculating Minimum Amount of Insurance Needed
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
    int   housVal; //Value of House
    float insrAmt; //Minimum Amount of Insurance 
    //Initialize Variables
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cin>>housVal;
           
    //Map Inputs to Outputs -> Process
    insrAmt=housVal*0.8f;
    
    //Display Inputs/Outputs
    cout<<"You need $"<<insrAmt<<" of insurance.";
   
    //Exit the Program - Cleanup
    return 0;
}