/* 
 * File:   main.cpp
 * Author: Joseph Ramirez
 * Created on January 6, 2021, 4:34 PM
 * Purpose:  Calculating Price of Total Purchase
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
    float priItm1, //Price of Item 1 in Dollars
          priItm2, //Price of Item 2 in Dollars
          priItm3, //Price of Item 3 in Dollars
          priItm4, //Price of Item 4 in Dollars
          priItm5, //Price of Item 5 in Dollars
           subTot, //Subtotal of Purchase in Dollars
           slsTax, //The Percentage of of Sales Tax
          taxAmnt, //Amount of Sales Tax in Dollars
          totPric; //The Total Price in Dollars
    
    //Initialize Variables
    priItm1=15.95;
    priItm2=24.95;
    priItm3=6.95;
    priItm4=12.95;
    priItm5=3.95;
    slsTax=0.07;
            
    //Map Inputs to Outputs -> Process
     subTot=priItm1+priItm2+priItm3+priItm4+priItm5;
    taxAmnt=subTot*slsTax;
    totPric=subTot+taxAmnt;
    
    //Display Inputs/Outputs
    cout<<" Item 1 Price = $"<<priItm1<<endl;
    cout<<" Item 2 Price = $"<<priItm2<<endl;
    cout<<" Item 3 Price = $"<<priItm3<<endl;
    cout<<" Item 4 Price = $"<<priItm4<<endl;
    cout<<" Item 5 Price = $"<<priItm5<<endl;
    cout<<"     Subtotal = $"<<subTot<<endl;
    cout<<"          Tax = $"<<taxAmnt<<endl;
    cout<<"  Total Price = $"<<totPric<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}