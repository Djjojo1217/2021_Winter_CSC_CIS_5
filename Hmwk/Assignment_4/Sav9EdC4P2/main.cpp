/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 22, 2021, 4:15 PM
 * Purpose:  Best Fuel Efficiency
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Libray
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float CNVNLTG=0.264179f;
//Function Prototypes

//Execution Begins Here 
float conver1(float litGas1, float galGas1, float mpg1, int milDriv1);

float conver2(float litGas2, float galGas2, float mpg2, int milDriv2);

int fuelEff(float mpg1, float mpg2);
    
int main(int argc, char** argv) {
    //Declare Variables
    float    litGas1, //Liters of Gas Consumed by Car 1
             litGas2, //Liters of Gas Consumed by Car 2
             galGas1, //Gallons of gas Consumed by Car 1
             galGas2, //Gallons of gas Consumed by Car 2
                mpg1, //Miles / Gallon by Car 1
                mpg2; //Miles / Gallon by Car 2
    int      milDrv1, //Miles Driven by Car 1
             milDrv2; //Miles Driven by Car 2
    char     choice; //Choice to Continue
    
    //Miles Per Gallon Calculation
    do{
        //Car 1
        //Initialize Variables
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>litGas1;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>milDrv1;
        
        //Calculating Miles/Gallon
        mpg1=conver1(litGas1,galGas1,mpg1,milDrv1);
        
        //Display Inputs/Outputs
        cout<<"miles per gallon: ";
        cout<<fixed<<setprecision(2)<<mpg1<<endl;
        cout<<endl;
        
        //Car 2
        //Initialize Variables
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>litGas2;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>milDrv2;
        
        //Calculating Miles/Gallon
        mpg2=conver2(litGas2,galGas2,mpg2,milDrv2);
        
        //Display Inputs/Outputs
        cout<<"miles per gallon: ";
        cout<<fixed<<setprecision(2)<<mpg2<<endl;
        cout<<endl;
        
        //Fuel Efficiency
        fuelEff(mpg1,mpg2);
        
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
int fuelEff(float mpg1, float mpg2) {
    if (mpg1>mpg2) {
        cout<<"Car 1 is more fuel efficient"<<endl;
        cout<<endl;
    }
    if (mpg1<mpg2) {
        cout<<"Car 2 is more fuel efficient"<<endl;
        cout<<endl;
    }
}

float conver1(float litGas1, float galGas1, float mpg1, int milDrv1) {
    //Calculating Miles/Gallon
    galGas1=litGas1*CNVNLTG;
    mpg1=milDrv1/galGas1;
    
    return mpg1;
} 

float conver2(float litGas2, float galGas2, float mpg2, int milDrv2) {
    //Calculating Miles/Gallon
    galGas2=litGas2*CNVNLTG;
    mpg2=milDrv2/galGas2;
    
    return mpg2;
} 