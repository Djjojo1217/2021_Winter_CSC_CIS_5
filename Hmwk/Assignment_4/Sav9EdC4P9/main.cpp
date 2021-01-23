/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 22, 2021, 6:23 PM
 * Purpose:  Finding Maximum Number
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
int max2Par(float num1, float num2, float max2);

int max3Par(float num1, float num2, float num3, float max3);

int main(int argc, char** argv) {
    
    //Declare Variables
    float   num1, //First Number to be Inputted
            num2, //First Number to be Inputted
            num3, //First Number to be Inputted
            max2, //Maximum Number for 2 Parameters
            max3; //Maximum Number for 3 Parameters
    
    //Initialize Variables
    cout<<"Enter first number:"<<endl;
    cin>>num1;
    cout<<endl;
    cout<<"Enter Second number:"<<endl;
    cin>>num2;
    cout<<endl;
    cout<<"Enter third number:"<<endl;
    cin>>num3;
    cout<<endl;
    
    //Display Inputs/Outputs
    max2Par(num1,num2,max2);
    max3Par(num1,num2,num3,max3);
    

    //Exit the Program - Cleanup
    return 0;
}

int max2Par(float num1, float num2, float max2) {
    //Determine Maximum Number for Two Parameter Function
    if (num1>num2) {
        cout<<"Largest number from two parameter function:"<<endl;
        cout<<fixed<<setprecision(1)<<num1<<endl;
        cout<<endl;
    }else if (num1<num2) {
        cout<<"Largest number from two parameter function:"<<endl;
        cout<<fixed<<setprecision(1)<<num2<<endl;
        cout<<endl;
    }
}

int max3Par(float num1, float num2, float num3, float max3) {
    //Determine Maximum Number for Two Parameter Function
    if (num1>num2 && num1>num3) {
        cout<<"Largest number from three parameter function:"<<endl;
        cout<<fixed<<setprecision(1)<<num1<<endl;
    }else if (num2>num1 && num2>num3) {
        cout<<"Largest number from three parameter function:"<<endl;
        cout<<fixed<<setprecision(1)<<num2<<endl;
    }else if (num3>num2 && num3>num1) {
        cout<<"Largest number from three parameter function:"<<endl;
        cout<<fixed<<setprecision(1)<<num3<<endl;
    }
}