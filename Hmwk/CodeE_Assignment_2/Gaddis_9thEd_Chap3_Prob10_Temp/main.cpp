/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 13, 2021, 11:40 AM
 * Purpose:  Conversion of Celsius to Fahrenheit
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
    float faren, //Fahrenheit in Degrees
            cel; //Celsius in Degrees
    
    //Initialize Variables
    cout<<"Temperature Convertor"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>faren;
    
    //Map Inputs to Outputs -> Process
    cel=faren-32;
    cel=cel*5/9.0f;
    
    //Display Inputs/Outputs
    cout<<fixed;
    cout<<setprecision(1)<<faren<<" Degrees Fahrenheit = "<<setprecision(1);
    cout<<cel<<" Degrees Centigrade";
    
    //Exit the Program - Cleanup
    return 0;
}