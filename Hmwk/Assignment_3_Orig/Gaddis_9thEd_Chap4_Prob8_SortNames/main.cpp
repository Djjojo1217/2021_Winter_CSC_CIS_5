/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 14, 2021, 12:36 PM
 * Purpose:  Alphabetized Names
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>    //For Name Inputs
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string   name1, //First Name to Be Inputted
             name2, //Second Name
             name3; //Third Name
    
    //Initialize Variables
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>name1;
    cin>>name2;
    cin>>name3;
    
    //Alphabetizing the Names
    if (name1>name2 && name2>name3) {
        cout<<name3<<endl;
        cout<<name2<<endl;
        cout<<name1;
    } else if(name1>name3 && name3>name2) {
        cout<<name2<<endl;
        cout<<name3<<endl;
        cout<<name1;
    } else if(name2>name1 && name1>name3) {
        cout<<name3<<endl;
        cout<<name1<<endl;
        cout<<name2;
    } else if(name2>name3 && name3>name1) {
        cout<<name1<<endl;
        cout<<name3<<endl;
        cout<<name2;
    } else if(name3>name2 && name2>name1) {
        cout<<name1<<endl;
        cout<<name2<<endl;
        cout<<name3;
    } else if(name3>name1 && name1>name2) {
        cout<<name2<<endl;
        cout<<name1<<endl;
        cout<<name3;   
    }
    //End of Statement
    
    //Exit the Program - Cleanup
    return 0;
}