/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 22, 2021, 3:00 PM
 * Purpose:  Sideways Triangle Pattern
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
    int number; //Number to be Inputted
    
    //Initialize Variables
    cin>>number;
    
    //Display Inputs/Outputs
    for (int i=1;i<=number;i++) {
        for (int j=1;j<=i;j++) {
            cout<<"+";
        }
        cout<<endl;
        cout<<endl;
    }
    for (int k=1;k<number;k++) {
        for (int h=number;h>=k;h--) {
            cout<<"+";
        }
        cout<<endl;
        cout<<endl;
    }
    cout<<"+";
    
    //Exit the Program - Cleanup
    return 0;
}