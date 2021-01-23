/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 22, 2021, 2:35 PM
 * Purpose:  Rectangle Pattern
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int    number; //Number to Inputted
    string charac; //Character to be Inputted
    
    //Initialize Variables
    cin>>number;
    cin>>charac;
    
    //Input Validation
    while(number<0 || number>15) {
        cout<<"Number inputted is invalid."<<endl;
        cout<<"Input number between 1 and 15.";
    }
    
    //Display Inputs/Outputs
    for(int i=1;i<number;i++) {      //For horizontal Length
        for(int j=1;j<=number;j++) { //For Vertical Length
            cout<<charac;
        }
        cout<<endl;
    }
    for(int k=1;k<=number;k++) {      //For Last Row
        cout<<charac;
    }
    
    //Exit the Program - Cleanup
    return 0;
}