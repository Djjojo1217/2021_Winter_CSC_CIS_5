/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 15, 2021, 12:16 PM
 * Purpose:  Calculating Check Fees for Bank Charges
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Libray
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float baseFee, //Base Monthly Fee of Bank in Dollars
          chckRte, //Rate of Check Fees in Dollars
          chckFee, //Total Check Fees for the month in Dollars
          crntBal, //Current Bank Balance in Dollars
           lowFee, //Fee if Balance drops below $400
           newBal; //New Bank Balance in Dollars
   unsigned short int   numChck; //Number of Checks for the Month
    
    //Initialize Variables
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>crntBal;
    cin>>numChck;
    if (numChck<0){
        cout<<"Number of Checks imputted is invalid.";
    }else if(numChck>=0){
        if (crntBal<0) {
            cout<<"ACCOUNT IS OVERDRAWN";
        }else if (crntBal>0){
            if (numChck>=0 && numChck<20) {
                chckFee=numChck*0.10f;
            }else if (numChck>=20 && numChck<=39) {
                chckFee=numChck*0.08f;
            }else if (numChck>=40 && numChck<=59) {
                chckFee=numChck*0.06f;
            }else if (numChck>59) {
                chckFee=numChck*0.04f;
            }
        baseFee=10;
        crntBal<400?lowFee=15:lowFee=0;
        
        //Map Inputs to Outputs -> Process
            newBal=crntBal-baseFee-chckFee-lowFee;
            
            //Display Inputs/Outputs
            cout<<fixed;
            cout<<"Balance     $ "<<setw(8)<<setprecision(2)<<crntBal<<endl;
            cout<<"Check Fee   $ "<<setw(8)<<setprecision(2)<<chckFee<<endl;
            cout<<"Monthly Fee $ "<<setw(8)<<setprecision(2)<<baseFee<<endl;
            cout<<"Low Balance $ "<<setw(8)<<setprecision(2)<<lowFee<<endl;
            cout<<"New Balance $ "<<setw(8)<<setprecision(2)<<newBal;
    }
    }
    //Exit the Program - Cleanup
    return 0;
}