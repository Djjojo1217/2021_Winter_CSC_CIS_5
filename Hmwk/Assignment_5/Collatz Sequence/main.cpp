/* 
 * Author: Joseph Ramirez Jr
 * Created on January 24, 2021, 6:12 PM
 * Purpose:  Collatz Sequence
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz(int n);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n; //Number to be Inputted
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            collatz(n)<<" steps";
    
    //Output data
    
    //Exit stage right!
    return 0;
}
int collatz(int num) {
    int step=1; //Steos to get to One
    do {
        if (num%2==0){
            num=num/2;
        }
        else{
            num=(num*3)+1;
        }
        step++;
    }while(num>1);
    return step;
}