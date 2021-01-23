/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 13, 2021, 4:47 PM
 * Purpose: Calculating Lethal Dose of Diet Coke
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
float CNVNGTP=453.593f; //Conversion of grams / pound
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int     massM, //Mass of mouse in grams
           massKm, //Mass of sweetener required to kill mouse in grams
          lthlDos, //Lethal Dose Proportion
          mssSoda, //Mass of a soda pop can in grams
          numCans; //Number of Cans of Soda Pop required to kill Dieter
    float massDtr, //Mass of Dieter in grams
          perSwet, //Percent of Sweetener in a can of Soda Pop
          mssSwet, //Mass of Sweetener in a can of Soda Pop
          mssKDtr; //Mass of Sweetener required to kill Dieter
           
    //Initialize Variables
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>massDtr;
    massDtr=massDtr*CNVNGTP;
    massM=35;
    massKm=5;
    mssSoda=350;
    perSwet=0.001f;
           
    //Map Inputs to Outputs -> Process
    lthlDos=massM/massKm;
    mssSwet=mssSoda*perSwet;
    mssKDtr=massDtr/lthlDos;
    mssKDtr=mssKDtr/0.001f;
    numCans=mssKDtr/mssSoda;
            
    //Display Inputs/Outputs
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<numCans<<" cans";
   
    //Exit the Program - Cleanup
    return 0;
}