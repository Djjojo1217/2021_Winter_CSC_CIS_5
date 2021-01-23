/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 13, 2021, 5:19 PM
 * Purpose: Pay Calculation (Savitch)
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
    float  preAnnl, //Previous Annual Salary in Dollars
           newAnnl, //New Annual Salary in Dollars
           newMont, //New Monthly Salary in Dollars
           rtroPay, //Retroactive Pay in Dollars
           payIncr; //Pay Increase
           
    //Initialize Variables
   cout<<"Input previous annual salary."<<endl;
   cin>>preAnnl;
   payIncr=0.076f;
           
    //Map Inputs to Outputs -> Process
   newAnnl=preAnnl+(preAnnl*payIncr);
   newMont=newAnnl/12;
   rtroPay=payIncr*preAnnl/2;
   
    //Display Inputs/Outputs
   cout<<fixed;
   cout<<"Retroactive pay    = $"<<setw(7)<<setprecision(2)<<rtroPay<<endl;
   cout<<"New annual salary  = $"<<setw(7)<<setprecision(2)<<newAnnl<<endl;
   cout<<"New monthly salary = $"<<setw(7)<<setprecision(2)<<newMont;
   
    //Exit the Program - Cleanup
    return 0;
}