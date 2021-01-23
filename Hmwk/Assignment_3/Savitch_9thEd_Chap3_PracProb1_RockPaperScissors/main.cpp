/* 
 * File:   main.cpp
 * Author: Joseph Ramirez
 * Created on January 16, 2021, 5:31 PM
 * Purpose:  Rock, Paper, Scissors
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>    //String Class
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string  r="r", //Rock
            R="R", //Rock
            s="s", //Scissors
            S="S", //Scissors
            p="p", //Paper
            P="P", //Paper
            playr1, //Choice for Player 1
            playr2; //Choice for Player 2
    
    //Initialize Variables
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>playr1;
    cin>>playr2;
    //Display Inputs/Outputs
    if (playr1==r || playr1==R) {
        if (playr2==p || playr2==P) {
            cout<<"Paper covers rock.";
        }else if(playr2==s || playr2==S) {
            cout<<"Rock breaks scissors.";
        }else if(playr1==r && playr2==R) {
            cout<<"Nobody wins";
        }
    }else if (playr1==p || playr1==P) {
        if (playr2==r || playr2==R) {
            cout<<"Paper covers rock.";
        }else if(playr2==s || playr2==S) {
            cout<<"Scissors cuts paper.";
        }else if(playr1==P && playr2==P) {
            cout<<"Nobody wins";
        }
    }else if (playr1==s || playr1==S) {
        if (playr2==p || playr2==P) {
            cout<<"Scissors cuts paper.";
        }else if(playr2==r || playr2==R) {
            cout<<"Rock breaks scissors.";
        }else if(playr1==s && playr2==S) {
            cout<<"Nobody wins";
        }
    }
    //Exit the Program - Cleanup
    return 0;
}