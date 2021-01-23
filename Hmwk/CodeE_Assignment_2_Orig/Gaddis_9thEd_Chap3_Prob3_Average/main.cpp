/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 13, 2021, 10:55 AM
 * Purpose:  Calculating Average of Five Numbers
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
    float a,b,c,d,e; //Input Values
    float       avg; //Average of 5 Numbers

    //Initialize Variables
    cout<<"Input 5 numbers to average."<<endl;
    cin>>a;
    avg=a;
    cin>>b;
    avg=avg+b;
    cin>>c;
    avg=avg+c;
    cin>>d;
    avg=avg+d;
    cin>>e;
    avg=avg+e;
           
    //Map Inputs to Outputs -> Process
    avg=avg/5;
            
    //Display Inputs/Outputs
    cout<<fixed;
    cout<<"The average = "<<setprecision(1)<<avg;
   
    //Exit the Program - Cleanup
    return 0;
}