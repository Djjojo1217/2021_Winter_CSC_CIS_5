/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 16, 2021, 3:17 PM
 * Purpose:  
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
#include <string>    //For Internet Package Input
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float           mnthCh; //Internet Package Base Monthly Charge
    unsigned short  totHrs; //Total Hours Used
    unsigned char     pack, //Internet Package
                    pckHrs, //Include Hours
                    addHrs; //Fee for Additional Hours
                  
    //Initialize Variables
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>pack;
    cin>>totHrs;
    switch (pack) {
        case 'A':{
            mnthCh=9.95f;
            pckHrs=10;
            addHrs=2;
            break;
        }
        case 'B':{
            mnthCh=14.95f;
            pckHrs=20;
            addHrs=1;
            break;
        }
        case 'C':{
            mnthCh=19.95f;
            pckHrs=0;
            addHrs=0;
            break;
        }
    }
    if(totHrs>pckHrs) {
        mnthCh+=(totHrs-pckHrs)*addHrs;
    }
    
    //Display Inputs/Outputs
    cout<<fixed;
    cout<<"Bill = $ "<<setw(5)<<setprecision(2)<<mnthCh;
    
    //Exit the Program - Cleanup
    return 0;
}