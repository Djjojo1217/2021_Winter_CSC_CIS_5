/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 22, 2021, 4:42 PM
 * Purpose:  Predicting Cost Given The Inflation Rate
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
float predict(float prevPri, float inflRte);

float inflate(float crntPri, float prevPri);
 
int main(int argc, char** argv) {
    
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
        prevPri=predict(prevPri,inflRte);
        cout<<"Price in one year: $"<<prevPri<<endl;
        //For Two Years After
        prevPri=predict(prevPri,inflRte);
        cout<<"Price in two year: $"<<prevPri<<endl;
        cout<<endl;
    
    //Repeat Function
    cout<<"Again:"<<endl;
    cin>>choice;
    if(choice=='y' || choice=='Y') {
        cout<<endl;
    }
    }while(choice=='y' || choice=='Y');
    //Exit the Program - Cleanup
    return 0;
}

float inflate(float crntPri, float prevPri) {
    float     diff, //Difference of Prices in Dollars
              infl; //Inflation Rate as Percentage
    //Calculating Inflation Rate
    diff=crntPri-prevPri;
    infl=(diff/prevPri)*100.0f;
    
    return infl;
}
float predict(float prevPri, float inflRte) {
    //Predicting the Cost of Future Prices
    inflRte=inflRte/100.0f;
    prevPri=prevPri+(prevPri*inflRte);
}