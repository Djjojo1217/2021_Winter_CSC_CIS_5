/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 22, 2021, 3:54 PM
 * Purpose:  Liters to Miles Per Gallon
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float CNVNLTG=0.264179f;
//Function Prototypes

//Execution Begins Here
int conver(float litGas, float galGas, float mpg, int milDriv) {
    //Calculating Miles/Gallon
    galGas=litGas*CNVNLTG;
    mpg=milDriv/galGas;
    
    //Display Inputs/Outputs
    cout<<"miles per gallon:"<<endl;
    cout<<fixed<<setprecision(2)<<mpg<<endl;
} 

int main(int argc, char** argv) {
    //Declare Variables
    float    litGas, //Liters of Gas Consumed
             galGas, //Gallons of gas Consumed
                mpg; //Miles / Gallon
    int     milDriv; //Miles Driven
    char     choice; //Choice to Continue
    
    //Miles Per Gallon Calculation
    do{
        //Initialize Variables
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>litGas;
        cout<<endl;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>milDriv;
        cout<<endl;
        
        //Miles Per gallon
        conver(litGas,galGas,mpg,milDriv);
        
        //Repeat Function
        cout<<"Again:"<<endl;
        cin>>choice;
        if(choice=='y' || choice=='Y') {
            cout<<endl;
        }
    }while(choice=='y' || choice=='Y');
    
    //Exit the Program - Cleanup
    return 0;
}