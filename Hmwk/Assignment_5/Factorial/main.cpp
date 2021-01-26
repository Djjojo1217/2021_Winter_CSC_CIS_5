/* 
 * Author: Joseph Ramirez Jr
 * Created on January 24, 2021, 4:43 PM
 * Purpose:  Calculating Factorial
 */

//System Libraries
#include <iostream>  //I/O Lirary
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int num);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int  num, //Integer for factorial
                 fact; //Answer to factorial
    
    //Initialize Variables
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl;
    cout<<"Input the number for the function."<<endl;
    cin>>num;
    
    //Process/Map inputs to outputs
    fact=fctrl(num);
    
    //Output data
    cout<<num<<"! = "<<fact;
    
    //Exit stage right!
    return 0;
}

int fctrl(int num) {
    unsigned int fact=1; //factorial
    for(int i=1; i<=num; i++){
        fact=fact*i;
    }
    return fact;
}