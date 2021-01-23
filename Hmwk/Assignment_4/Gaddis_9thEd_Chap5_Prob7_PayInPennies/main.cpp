/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 21, 2021, 4:04 PM
 * Purpose:  Calculating Pay in Pennies
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
    unsigned int   payAmnt=1, //Pay of a Given Day in Pennies
                    dayPay=2, //Pay Amount Multiplier
                     payPnny, //Total Pay in Pennies
                     numDays; //Number of Days Worked
    
    //Initialize Variables
    cin>>numDays; 
    
    //Input Validation
    while(numDays<1) {
        cout<<"Number of Days Inputted is Invalid."<<endl;
        cout<<"Please Input integer greater than or equal to one.";
        cin>>numDays;
    }
    
    //Calculating Salary
    for(int i=0;i<numDays;i++) {
        payPnny+=payAmnt;
        payAmnt=payAmnt*dayPay;
    }
    
    //Display Inputs/Outputs
    cout<<"Pay = $"<<payPnny/100<<".";
    if ((payPnny%100)<10) {
        cout<<"0"<<payPnny%100;
    }else if ((payPnny%100)>=10) {
        cout<<payPnny%100;
    }
    
    //Exit the Program - Cleanup
    return 0;
}