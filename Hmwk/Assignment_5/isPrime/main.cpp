/* 
 * Author: Joseph Ramirez jr
 * Created on January 24. 2021, 4:50 PM
 * Purpose:  Prime number
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int number);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int    number; //Number to be Inputted
    
    //Initialize Variables
    cout<<"Input a number to test if Prime."<<endl;
    cin>>number;
    
    //Process/Map inputs to outputs
    isPrime(number);
    
    //Output data
    if (isPrime(number)) {
        cout<<number<<" is prime.";
    }else  {
        cout<<number<<" is not prime.";
    }
    
    //Exit stage right!
    return 0;
} 
bool isPrime(int number) {
    bool prime=true;
    if (number==0 || number==1){
        prime=false;
    }else {
        for (int i=2;i<=number/2;++i) {
            if (number%i==0) {
            prime=false;
            }
        }
    }
    return prime;
}