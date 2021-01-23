/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 13, 2021, 11:09 PM
 * Purpose:  Calculate How Many Calories Eaten
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
    int totCook=40,   //Total Cookies in Bag
        totServ=10,   //Total Servings / Bag
        calServ=300,  //Calories / Serving
        cookCal,      //Calories / Cookie
        cookAte,      //Amount of Cookies eaten
         calAte;      //Calories eaten
    //Initialize Variables
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cookAte;
    
    //Map Inputs to Outputs -> Process
    cookCal=calServ/(totCook/totServ);
    calAte=cookCal*cookAte;
    
    //Display Inputs/Outputs
    cout<<"You consumed "<<calAte<<" calories.";
    
    //Exit the Program - Cleanup
    return 0;
}