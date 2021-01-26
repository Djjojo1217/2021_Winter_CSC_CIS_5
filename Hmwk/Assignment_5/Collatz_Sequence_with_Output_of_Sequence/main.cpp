/* 
 * Author: Joseph Ramirez Jr
 * Created on January 24, 2021, 6:36 PM
 * Purpose:  Collatz Sequence with Sequence
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
    int  n, //Number to be Inputted
        ns; //Collatz Sequence
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    ns=collatz(n);
    
    //Output data
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            ns<<" steps";
    
    //Exit stage right!
    return 0;
}
int collatz(int n) {
    int step=1; //Number of steps to get to One
    
    //Calculating number of steps
    cout<<n<<",";
    do {
        if (n%2==0){               //For Even Numbers
            n=n/2;
            if (n>1) {
                cout<<" "<<n<<",";
            }else if (n=1) {
                cout<<" "<<n;
            }
        }
        else{                      //For Odd Numbers
            n=(n*3)+1;
            cout<<" "<<n<<",";
        }
        step++;
    }while(n>1);
    cout<<endl;
    
    return step;
}