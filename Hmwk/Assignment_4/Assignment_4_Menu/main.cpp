/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 23, 2021, 8:28 PM
 * Purpose: Menu for Assignment 4
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <iomanip>    //Format Library
#include <string>     //String Class
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
const float CNVNLTG=0.264179f; //Liters to Gallons Conversion
//Conversions, Higher Dimensions

//Function Prototypes
int conver(float litGas, float galGas, float mpg, int milDriv);
float conver1(float litGas1, float galGas1, float mpg1, int milDriv1);
float conver2(float litGas2, float galGas2, float mpg2, int milDriv2);
float inflate(float crntPri, float prevPri);
float predict(float crntPri, float inflRte);
int fuelEff(float mpg1, float mpg2);
int max2Par(float num1, float num2, float max2);
int max3Par(float num1, float num2, float num3, float max3);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 0  for Gaddis Sum Problem"<<endl;
    cout<<"Type 1  for Gaddis Pay In Pennies Problem"<<endl;
    cout<<"Type 2  for Gaddis Min and Max Numbers Problem"<<endl;
    cout<<"Type 3  for Gaddis Rectangle Pattern Problem"<<endl;
    cout<<"Type 4  for Gaddis Pattern Problem"<<endl;
    cout<<"Type 5  for Savitch Miles Per Gallon Problem"<<endl;
    cout<<"Type 6  for Savitch Fuel Efficiency Problem"<<endl;
    cout<<"Type 7  for Savitch Inflation Rate Problem"<<endl;
    cout<<"Type 8  for Savitch Predicting Future Price Problem"<<endl;
    cout<<"Type 9 for Savitch Max Number Problem"<<endl;
    cin>>choice;
    
    if(choice=='0'){
        //Declare Variables
        int     number, //Integer Number to be entered
                 sum=0; //Sum of the Integers Starting at 1
        //Initialize Variables
        cin>>number;
        //Calculating the Sum
        for(int i=1;i<=number;i++){
            sum+=i;
        }
        //Display Inputs/Outputs
        cout<<"Sum = "<<sum;
    }else if(choice=='1'){
        //Declare Variables
        unsigned int   payAmnt=1, //Pay of a Given Day in Pennies
                        dayPay=2, //Pay Amount Multiplier
                         payPnny, //Total Pay in Pennies
                         numDays; //Number of Days Worked
        //Initialize Variables
        cin>>numDays; 
        //Input Validation
        while(numDays<1) {
            cout<<"Number of Days Inputted is Invalid."<<endl;
            cout<<"Please Input integer greater than or equal to one.";
            cin>>numDays;
        }
        //Calculating Salary
        for(int i=0;i<numDays;i++) {
            payPnny+=payAmnt;
            payAmnt=payAmnt*dayPay;
        }
        //Display Inputs/Outputs
        cout<<"Pay = $"<<payPnny/100<<".";
        if ((payPnny%100)<10) {
            cout<<"0"<<payPnny%100;
        }else if ((payPnny%100)>=10) {
            cout<<payPnny%100;
        }
    }else if(choice=='2'){
        //Declare Variables
        int   number, //Integer to be Inputted
               large=0, //Largest Integer
               small; //Smallest Integer
        //Determining Largest and Smallest Integer
        do{
            cin>>number;
            if (number>-99 || number<-99){
                if (number>=large){
                    large=number;
                }else if (number<=small){
                    small=number;
                }
            }else;
        }while(number>-99 || number<-99);
        //Display Inputs/Outputs
        cout<<"Smallest number in the series is "<<small<<endl;
        cout<<"Largest  number in the series is "<<large;
    }else if(choice=='3'){
        //Declare Variables
        int    number; //Number to Inputted
        string charac; //Character to be Inputted
        //Initialize Variables
        cin>>number;
        cin>>charac;
        //Input Validation
        while(number<0 || number>15) {
            cout<<"Number inputted is invalid."<<endl;
            cout<<"Input number between 1 and 15.";
        }
        //Display Inputs/Outputs
        for(int i=1;i<number;i++) {      //For horizontal Length
            for(int j=1;j<=number;j++) { //For Vertical Length
                cout<<charac;
            }
            cout<<endl;
        }
        for(int k=1;k<=number;k++) {      //For Last Row
            cout<<charac;
        }
    }else if(choice=='4'){
        //Declare Variables
        int number; //Number to be Inputted
        //Initialize Variables
        cin>>number;
        //Display Inputs/Outputs
        for (int i=1;i<=number;i++) {
            for (int j=1;j<=i;j++) {
                cout<<"+";
            }
            cout<<endl;
            cout<<endl;
        }
        for (int k=1;k<number;k++) {
            for (int h=number;h>=k;h--) {
                cout<<"+";
            }
            cout<<endl;
            cout<<endl;
        }
        cout<<"+";
    }else if(choice=='5'){
        //Declare Variables
        float    litGas, //Liters of Gas Consumed
                 galGas, //Gallons of gas Consumed
                    mpg; //Miles / Gallon
        int     milDriv; //Miles Driven
        char     choice; //Choice to Continue
        //Miles Per Gallon Calculation
        do{
            //Initialize Variables
            cout<<"Enter number of liters of gasoline:"<<endl;
            cin>>litGas;
            cout<<endl;
            cout<<"Enter number of miles traveled:"<<endl;
            cin>>milDriv;
            cout<<endl;
            //Miles Per gallon
            conver(litGas,galGas,mpg,milDriv);
            //Repeat Function
            cout<<"Again:"<<endl;
            cin>>choice;
            if(choice=='y' || choice=='Y') {
                cout<<endl;
            }
        }while(choice=='y' || choice=='Y');
    }else if(choice=='6'){
        //Declare Variables
        float    litGas1, //Liters of Gas Consumed by Car 1
                 litGas2, //Liters of Gas Consumed by Car 2
                 galGas1, //Gallons of gas Consumed by Car 1
                 galGas2, //Gallons of gas Consumed by Car 2
                    mpg1, //Miles / Gallon by Car 1
                    mpg2; //Miles / Gallon by Car 2
        int      milDrv1, //Miles Driven by Car 1
                 milDrv2; //Miles Driven by Car 2
        char     choice; //Choice to Continue
        //Miles Per Gallon Calculation
        do{
            //Car 1
            //Initialize Variables
            cout<<"Car 1"<<endl;
            cout<<"Enter number of liters of gasoline:"<<endl;
            cin>>litGas1;
            cout<<"Enter number of miles traveled:"<<endl;
            cin>>milDrv1;
            //Calculating Miles/Gallon
            mpg1=conver1(litGas1,galGas1,mpg1,milDrv1);
            //Display Inputs/Outputs
            cout<<"miles per gallon: ";
            cout<<fixed<<setprecision(2)<<mpg1<<endl;
            cout<<endl;
            //Car 2
            //Initialize Variables
            cout<<"Car 2"<<endl;
            cout<<"Enter number of liters of gasoline:"<<endl;
            cin>>litGas2;
            cout<<"Enter number of miles traveled:"<<endl;
            cin>>milDrv2;
            //Calculating Miles/Gallon
            mpg2=conver2(litGas2,galGas2,mpg2,milDrv2);
            //Display Inputs/Outputs
            cout<<"miles per gallon: ";
            cout<<fixed<<setprecision(2)<<mpg2<<endl;
            cout<<endl;
            //Fuel Efficiency
            fuelEff(mpg1,mpg2);
            //Repeat Function
            cout<<"Again:"<<endl;
            cin>>choice;
            if(choice=='y' || choice=='Y') {
                cout<<endl;
            }
        }while(choice=='y' || choice=='Y');
    }else if(choice=='7'){
        //Declare Variables
        float  crntPri, //Current Price of Item in Dollars
               prevPri, //Year Ago Price of Item in Dollars
               inflRte, //Inflation Rate as Percentage
                  infl;
        char    choice; //Choice to Continue
        //Calculating inflation rate
        do{
        //Initialize Variables
        cout<<"Enter current price:"<<endl;
        cin>>crntPri;
        cout<<"Enter year-ago price:"<<endl;
        cin>>prevPri;
        //Inflation Rate
        inflRte=inflate(crntPri,prevPri);
        //Display Inputs/Outputs
        cout<<fixed;
        cout<<"Inflation rate: "<<setprecision(2)<<inflRte<<"%"<<endl;
        cout<<endl;
        //Repeat Function
        cout<<"Again:"<<endl;
        cin>>choice;
        if(choice=='y' || choice=='Y') {
            cout<<endl;
        }
        }while(choice=='y' || choice=='Y');
    }else if(choice=='8'){
        //Declare Variables
        float  crntPri, //Current Price of Item in Dollars
               prevPri, //Year Ago Price of Item in Dollars
               inflRte, //Inflation Rate as Percentage
                  infl;
        char    choice; //Choice to Continue
        //Calculating inflation rate
        do{
        //Initialize Variables
        cout<<"Enter current price:"<<endl;
        cin>>crntPri;
        cout<<"Enter year-ago price:"<<endl;
        cin>>prevPri;
        //Inflation Rate
        inflRte=inflate(crntPri,prevPri);
        cout<<fixed;
        cout<<"Inflation rate: "<<setprecision(2)<<inflRte<<"%"<<endl;
        cout<<endl;
        //Prediction of Price
        prevPri=crntPri;
            //For One Year After
            crntPri=predict(crntPri,inflRte);
            cout<<"Price in one year: $"<<crntPri<<endl;
            //For Two Years After
            crntPri=predict(crntPri,inflRte);
            cout<<"Price in two year: $"<<crntPri<<endl;
            cout<<endl;
        //Repeat Function
        cout<<"Again:"<<endl;
        cin>>choice;
        if(choice=='y' || choice=='Y') {
            cout<<endl;
        }
        }while(choice=='y' || choice=='Y');
    }else if(choice=='9'){
        //Declare Variables
        float   num1, //First Number to be Inputted
                num2, //First Number to be Inputted
                num3, //First Number to be Inputted
                max2, //Maximum Number for 2 Parameters
                max3; //Maximum Number for 3 Parameters
        //Initialize Variables
        cout<<"Enter first number:"<<endl;
        cin>>num1;
        cout<<endl;
        cout<<"Enter Second number:"<<endl;
        cin>>num2;
        cout<<endl;
        cout<<"Enter third number:"<<endl;
        cin>>num3;
        cout<<endl;
        //Display Inputs/Outputs
        max2Par(num1,num2,max2);
        max3Par(num1,num2,num3,max3);
    }else{
        cout<<"Not an Option"<<endl;
    }

    //Clean Up
    
    //Exit stage right!
    return 0;
}
int conver(float litGas, float galGas, float mpg, int milDriv) {
    //Calculating Miles/Gallon
    galGas=litGas*CNVNLTG;
    mpg=milDriv/galGas;
    
    //Display Inputs/Outputs
    cout<<"miles per gallon:"<<endl;
    cout<<fixed<<setprecision(2)<<mpg<<endl;
} 
int fuelEff(float mpg1, float mpg2) {
    if (mpg1>mpg2) {
        cout<<"Car 1 is more fuel efficient"<<endl;
        cout<<endl;
    }
    if (mpg1<mpg2) {
        cout<<"Car 2 is more fuel efficient"<<endl;
        cout<<endl;
    }
}
float conver1(float litGas1, float galGas1, float mpg1, int milDrv1) {
    //Calculating Miles/Gallon
    galGas1=litGas1*CNVNLTG;
    mpg1=milDrv1/galGas1;
    
    return mpg1;
} 
float conver2(float litGas2, float galGas2, float mpg2, int milDrv2) {
    //Calculating Miles/Gallon
    galGas2=litGas2*CNVNLTG;
    mpg2=milDrv2/galGas2;
    
    return mpg2;
} 
float inflate(float crntPri, float prevPri) {
    float     diff, //Difference of Prices in Dollars
              infl; //Inflation Rate as Percentage
    //Calculating Inflation Rate
    diff=crntPri-prevPri;
    infl=(diff/prevPri)*100.0f;
    
    return infl;
}
float predict(float crntPri, float inflRte) {
    //Predicting the Cost of Future Prices
    inflRte=inflRte/100.0f;
    crntPri=crntPri+(crntPri*inflRte);
    return crntPri;
}
int max2Par(float num1, float num2, float max2) {
    //Determine Maximum Number for Two Parameter Function
    if (num1>num2) {
        cout<<"Largest number from two parameter function:"<<endl;
        cout<<fixed<<setprecision(1)<<num1<<endl;
        cout<<endl;
    }else if (num1<num2) {
        cout<<"Largest number from two parameter function:"<<endl;
        cout<<fixed<<setprecision(1)<<num2<<endl;
        cout<<endl;
    }
}
int max3Par(float num1, float num2, float num3, float max3) {
    //Determine Maximum Number for Two Parameter Function
    if (num1>num2 && num1>num3) {
        cout<<"Largest number from three parameter function:"<<endl;
        cout<<fixed<<setprecision(1)<<num1<<endl;
    }else if (num2>num1 && num2>num3) {
        cout<<"Largest number from three parameter function:"<<endl;
        cout<<fixed<<setprecision(1)<<num2<<endl;
    }else if (num3>num2 && num3>num1) {
        cout<<"Largest number from three parameter function:"<<endl;
        cout<<fixed<<setprecision(1)<<num3<<endl;
    }
}