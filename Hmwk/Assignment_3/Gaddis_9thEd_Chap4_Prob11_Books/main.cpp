/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 14, 2021, 1:50 PM
 * Purpose:  Calculating Points From Books Purchased
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
    unsigned int bookPur, //Number of Books Purchased
                 pntsErn; //Number of Books Earned
    
    //Initialize Variables
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>bookPur;
    
    //Number of Points Earned
    switch (bookPur){
        case 0:pntsErn=0;break;
        case 1:pntsErn=5;break;
        case 2:pntsErn=15;break;
        case 3:pntsErn=30;break;
        case 4:pntsErn=60;break;
        default:pntsErn=60;
    }
    //End of Switch
    
    //Display Inputs/Outputs
    cout<<"Books purchased ="<<setw(3)<<bookPur<<endl;
    cout<<"Points earned   ="<<setw(3)<<pntsErn;
    
    //Exit the Program - Cleanup
    return 0;
}