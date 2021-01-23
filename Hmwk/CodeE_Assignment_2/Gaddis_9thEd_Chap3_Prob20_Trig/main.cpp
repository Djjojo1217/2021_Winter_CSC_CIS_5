/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 13, 2021, 2:52 PM
 * Purpose:  Trig Calculations
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
float CNVNDTR=3.14159265/180; //Conversion of degrees to radians
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float    theta, //Angle in Radians
              sine, //Sine of Angle
            cosine, //Cosine of Angle
           tangent; //Tangent of Angle
           
    //Initialize Variables
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>theta;
    theta=theta*CNVNDTR;
           
    //Map Inputs to Outputs -> Process
    sine=sin(theta);
    cosine=cos(theta);
    tangent=tan(theta);
    theta=theta/CNVNDTR;
   
    //Display Inputs/Outputs
    cout<<fixed;
    cout<<"sin("<<theta<<") = "<<setprecision(4)<<sine<<endl;
    cout<<"cos("<<theta<<") = "<<setprecision(4)<<cosine<<endl;
    cout<<"tan("<<theta<<") = "<<setprecision(4)<<tangent;

    //Exit the Program - Cleanup
    return 0;
}