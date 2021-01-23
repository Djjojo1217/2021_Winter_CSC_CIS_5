/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 21, 2021, 3:27 pM
 * Purpose:  Sum of Integers
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
    int     number, //Integer Number to be entered
             sum=0; //Sum of the Integers Starting at 1
    
    //Initialize Variables
    cin>>number;
    
    //Calculating the Sum
    for(int i=1;i<=number;i++){
        sum+=i;
    }
    
    //Display Inputs/Outputs
    cout<<"Sum = "<<sum;
    
    //Exit the Program - Cleanup
    return 0;
}