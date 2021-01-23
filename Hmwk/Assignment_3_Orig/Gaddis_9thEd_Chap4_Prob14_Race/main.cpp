/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 15, 2021, 6:50 pM
 * Purpose:  Displaying Race Results
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
#include <string>    //For Racers' Names
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int     rcrTim1, //Time for Racer 1
            rcrTim2, //Time for Racer 2
            rcrTim3; //Time for Racer 3
    string  racer1,  //Name of Racer 1
            racer2,  //Name of Racer 1
            racer3;  //Name of Racer 1
    
    //Initialize Variables
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>racer1>>rcrTim1;
    cin>>racer2>>rcrTim2;
    cin>>racer3>>rcrTim3;
    
    //Display Inputs/Outputs
    if (rcrTim1>0 && rcrTim2>0 && rcrTim3>0) {
        if (rcrTim1>rcrTim2 && rcrTim2>rcrTim3) {
            cout<<racer3<<"\t"<<setw(3)<<rcrTim3<<endl;
            cout<<racer2<<"\t"<<setw(3)<<rcrTim2<<endl;
            cout<<racer1<<"\t"<<setw(3)<<rcrTim1;
        } else if (rcrTim1>rcrTim3 && rcrTim3>rcrTim2) {
            cout<<racer2<<"\t"<<setw(3)<<rcrTim2<<endl;
            cout<<racer3<<"\t"<<setw(3)<<rcrTim3<<endl;
            cout<<racer1<<"\t"<<setw(3)<<rcrTim1;
        }else if(rcrTim2>rcrTim3 && rcrTim3>rcrTim1) {
            cout<<racer1<<"\t"<<setw(3)<<rcrTim1<<endl;
            cout<<racer3<<"\t"<<setw(3)<<rcrTim3<<endl;
            cout<<racer2<<"\t"<<setw(3)<<rcrTim2;
        }else if(rcrTim2>rcrTim1 && rcrTim1>rcrTim3) {
            cout<<racer3<<"\t"<<setw(3)<<rcrTim3<<endl;
            cout<<racer1<<"\t"<<setw(3)<<rcrTim1<<endl;
            cout<<racer2<<"\t"<<setw(3)<<rcrTim2;
        }else if(rcrTim3>rcrTim2 && rcrTim2>rcrTim1) {
            cout<<racer1<<"\t"<<setw(3)<<rcrTim1<<endl;
            cout<<racer2<<"\t"<<setw(3)<<rcrTim2<<endl;
            cout<<racer3<<"\t"<<setw(3)<<rcrTim3;
        }else if(rcrTim3>rcrTim1 && rcrTim1>rcrTim2) {
            cout<<racer2<<"\t"<<setw(3)<<rcrTim2<<endl;
            cout<<racer1<<"\t"<<setw(3)<<rcrTim1<<endl;
            cout<<racer3<<"\t"<<setw(3)<<rcrTim3;
        }
    }else
        
    //Exit the Program - Cleanup
    return 0;
}