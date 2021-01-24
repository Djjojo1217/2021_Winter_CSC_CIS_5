/* 
 * Author: Joseph Ramirez Jr
 * Created on January 23, 2021, 7:26 PM
 * Purpose:  Minimum and Maximum Value
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int num1,int num2,int num3,int&min,int&max);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num1, //Numbers to Be Inputted
        num2,
        num3,
        min,
        max;
        
    //Initialize Variables
    cout<<"Input 3 numbers"<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    
    //Determining Min and Max numbers
    minmax(num1,num2,num3,min,max);

    //Exit stage right!
    return 0;
}
void minmax(int num1,int num2,int num3,int& min,int& max){
    
    if (num1>num2 && num1>num3) {
        max=num1;
        if (num2<num1 && num2<num3) {
            min=num2;
        }else if (num3<num1 && num3<num2) {
            min=num3;
        }
    }else if (num2>num1 && num2>num3) {
        max=num2;
        if (num1<num2 && num1<num3) {
            min=num1;
        }else if (num3<num1 && num3<num2) {
            min=num3;
        }
    }else if (num3>num1 && num3>num3) {
        max=num3;
        if (num1<num2 && num1<num3) {
            min=num1;
        }else if (num2<num1 && num2<num3) {
            min=num2;
        }
    }
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max;
}