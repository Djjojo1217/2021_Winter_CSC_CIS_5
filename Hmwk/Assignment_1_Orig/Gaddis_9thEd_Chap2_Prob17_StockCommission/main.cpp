/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 9, 2021, 2:29 PM
 * Purpose:  Stock Commission
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
   int          sharAmt; //Amount of Shares Bought
   float        sharPri, //Price / Share
                comPrct, //Commission Percentage
                stckTot, //Total Price of Stock
                comAmnt, //Amount of Commission Paid
                totAmnt; //Total Amount Paid
           
    //Initialize Variables
   sharAmt=750;
   sharPri=35.00;
   comPrct=0.02;
           
    //Map Inputs to Outputs -> Process
   stckTot=sharAmt*sharPri;
   comAmnt=stckTot*comPrct;
   totAmnt=stckTot+comAmnt;
   
    //Display Inputs/Outputs
   cout<<"The amount paid for stocks without commission = $"<<stckTot<<endl;
   cout<<"The amount paid for commission = $"<<comAmnt<<endl;
   cout<<"The total amount paid = $"<<totAmnt<<endl;
   
    //Exit the Program - Cleanup
    return 0;
}