/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 16, 2021, 8:35 PM
 * Purpose:  Arabic Numeral to Roman Numeral Conversion
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
    //Declare Variables
    unsigned short numCnvr; //Number to be Converted
    unsigned char    n1000, //Shift 3 places to the left
                      n100, //Remainder of division of 100 then shift 1 left
                       n10, //Remainder of division of 1000 then shift 2 left
                        n1; //Remainder of division by 10
    
    //Initialize Variables
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>numCnvr;
    
    //Check for Valid Input
    if (numCnvr>=1000 && numCnvr<=3000){
        //Display Inputs/Outputs
        cout<<numCnvr<<" is equal to ";
        //Map Inputs to Outputs -> Process
        n1000=numCnvr/1000;   
        n100=numCnvr%1000/100;
        n10=numCnvr%100/10;   
        n1=numCnvr%10;      
        //Output of number of 1000's in Roman Numerals
        cout<<(n1000==3?"MMM":
               n1000==2?"MM":
               n1000==1?"M":"");
        //Output of number of 100's in Roman Numerals
        cout<<(n100==9?"CM":
               n100==8?"DCCC":
               n100==7?"DCC":
               n100==6?"DC":
               n100==5?"D":
               n100==4?"CD":
               n100==3?"CCC":
               n100==2?"CC":
               n100==1?"C":"");
        //Output of number of 10's in Roman Numerals
        cout<<(n10==9?"XC":
               n10==8?"LXXX":
               n10==7?"LXX":
               n10==6?"LX":
               n10==5?"L":
               n10==4?"XL":
               n10==3?"XXX":
               n10==2?"XX":
               n10==1?"X":"");
        //Output of number of 1's in Roman Numerals
        cout<<(n1==9?"IX":
               n1==8?"VIII":
               n1==7?"VII":
               n1==6?"VI":
               n1==5?"V":
               n1==4?"IV":
               n1==3?"III":
               n1==2?"II":
               n1==1?"1":"");
    }else {
        //Display Inputs/Outputs
        cout<<numCnvr<<" is Out of Range!";
    }
    //Exit the Program - Cleanup
    return 0;
}