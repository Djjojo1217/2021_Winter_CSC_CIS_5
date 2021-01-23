/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 13, 2021, 6:27 PM
 * Purpose:  Fire Law Regulations for a Meeting Room
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
    int  maxCap, //Maximum Capacity of Meeting Room
        numPopl, //Number of People in Room
        nmPplEx; //Number of People added/removed to be at max capacity
           
    //Initialize Variables
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>maxCap;
    cin>>numPopl;
    if (maxCap>=numPopl) {
        nmPplEx=maxCap-numPopl;
        cout<<"Meeting can be held."<<endl;
        cout<<"Increase number of people by "<<nmPplEx<<" will ";
        cout<<"be allowed without violation.";
    }
    else {
        nmPplEx=numPopl-maxCap;
        cout<<"Meeting cannot be held."<<endl;
        cout<<"Reduce number of people by "<<nmPplEx<<" to ";
        cout<<"avoid fire violation.";
    }
        
    //Map Inputs to Outputs -> Process
 
    //Display Inputs/Outputs
   
    //Exit the Program - Cleanup
    return 0;
}