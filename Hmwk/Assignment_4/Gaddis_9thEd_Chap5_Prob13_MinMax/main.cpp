/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 22, 2021, 2:51 PM
 * Purpose:  Determining Largest and Smallest Integer
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
    int   number, //Integer to be Inputted
           large=0, //Largest Integer
           small; //Smallest Integer
    
    //Determining Largest and Smallest Integer
    do{
        cin>>number;
        if (number>-99 || number<-99){
            if (number>=large){
                large=number;
            }else if (number<=small){
                small=number;
            }
        }else;
    }while(number>-99 || number<-99);
    
    //Display Inputs/Outputs
    cout<<"Smallest number in the series is "<<small<<endl;
    cout<<"Largest  number in the series is "<<large;
    
    //Exit the Program - Cleanup
    return 0;
}