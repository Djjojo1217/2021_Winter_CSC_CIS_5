/* 
 * File:  main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 25, 2021, 7:42 AM
 * Purpose:  Time Conversion for 12-hour Notation
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    int      crntHr, //Hour of time
            crntMin, //Minute of time
             aftrHr, //Hour of time
            aftrMin, //Minute of time
            waitTim; //Waiting Time
    char    partDay, //AM or PM
             choice; //Repeat Function or Not
             
    do {
    //Initialize or input i.e. set variable values
    cout<<"Enter hour:"<<endl;
    cin>>crntHr;
    cout<<endl;
    cout<<"Enter minutes:"<<endl;
    cin>>crntMin;
    cout<<endl;
    cout<<"Enter A for AM. P for PM:"<<endl;
    cin>>partDay;
    cout<<endl;
    cout<<"Enter waiting time:"<<endl;
    cin>>waitTim;
    cout<<endl;
    
    //Map inputs -> outputs
    aftrMin=crntMin+waitTim;
    if (aftrMin<60){
        aftrHr=crntHr;
    }else if (aftrMin>=60) {
        aftrHr=crntHr+(aftrMin/60);
        if (aftrHr>=12 && partDay=='A'){
            if (aftrHr>12) {
                aftrHr=aftrHr-12;
            }else{
                
            }
            partDay=='P';
        }
        if (aftrHr>=12 && partDay=='P') {
            if (aftrHr=12) {
                aftrHr=aftrHr;
            }
            if (aftrHr>12) {
                aftrHr=aftrHr-12;
            }
            partDay=='A';
        }
        aftrMin=aftrMin%60;
    }
    //Display the outputs
    if (partDay='A') {
        if(aftrMin>=10 && crntMin>=10){
            if(crntHr<10) {
                if (aftrHr<10){
                    cout<<"Current time = 0"<<crntHr<<":"<<crntMin<<" AM"<<endl;
                    cout<<"Time after waiting period = 0"<<aftrHr<<":"<<aftrMin<<" AM"<<endl;
                    cout<<endl;
                }else if (aftrHr>=10){
                    cout<<"Current time = 0"<<crntHr<<":"<<crntMin<<" AM"<<endl;
                    cout<<"Time after waiting period = "<<aftrHr<<":"<<aftrMin<<" AM"<<endl;
                    cout<<endl;
            }
            }
            if (crntHr>=10) {
                cout<<"Current time = "<<crntHr<<":"<<crntMin<<" AM"<<endl;
                cout<<"Time after waiting period = "<<aftrHr<<":"<<aftrMin<<" AM"<<endl;
                cout<<endl;
            }
            if(aftrHr<10) {
                cout<<"Current time = "<<crntHr<<":"<<crntMin<<" AM"<<endl;
                cout<<"Time after waiting period = 0"<<aftrHr<<":"<<aftrMin<<" AM"<<endl;
                cout<<endl;
            }
        }else if (aftrMin>=10 && crntMin<10){
            if(crntHr<10) {
                if (aftrHr<10){
                    cout<<"Current time = 0"<<crntHr<<":0"<<crntMin<<" AM"<<endl;
                    cout<<"Time after waiting period = 0"<<aftrHr<<":"<<aftrMin<<" AM"<<endl;
                    cout<<endl;
                }else if (aftrHr>=10){
                    cout<<"Current time = 0"<<crntHr<<":0"<<crntMin<<" AM"<<endl;
                    cout<<"Time after waiting period = "<<aftrHr<<":"<<aftrMin<<" AM"<<endl;
                    cout<<endl;
            }
            }
            if (crntHr>=10) {
                cout<<"Current time = "<<crntHr<<":0"<<crntMin<<" AM"<<endl;
                cout<<"Time after waiting period = "<<aftrHr<<":"<<aftrMin<<" AM"<<endl;
                cout<<endl;
            }
            if(aftrHr<10) {
                cout<<"Current time = "<<crntHr<<":0"<<crntMin<<" AM"<<endl;
                cout<<"Time after waiting period = 0"<<aftrHr<<":"<<aftrMin<<" AM"<<endl;
                cout<<endl;
            }
        }else if (aftrMin<10 && crntMin>=10) {
            if(crntHr<10) {
                if (aftrHr<10){
                    cout<<"Current time = 0"<<crntHr<<":"<<crntMin<<" AM"<<endl;
                    cout<<"Time after waiting period = 0"<<aftrHr<<":0"<<aftrMin<<" AM"<<endl;
                    cout<<endl;
                }else if (aftrHr>=10){
                    cout<<"Current time = 0"<<crntHr<<":"<<crntMin<<" AM"<<endl;
                    cout<<"Time after waiting period = "<<aftrHr<<":0"<<aftrMin<<" AM"<<endl;
                    cout<<endl;
            }
            }
            if (crntHr>=10) {
                cout<<"Current time = "<<crntHr<<":"<<crntMin<<" AM"<<endl;
                cout<<"Time after waiting period = "<<aftrHr<<":0"<<aftrMin<<" AM"<<endl;
                cout<<endl;
            }
            if(aftrHr<10) {
                cout<<"Current time = "<<crntHr<<":"<<crntMin<<" AM"<<endl;
                cout<<"Time after waiting period = 0"<<aftrHr<<":0"<<aftrMin<<" AM"<<endl;
                cout<<endl;
            }
        }else if (aftrMin<10 && crntMin<10) {
            if(crntHr<10) {
                if (aftrHr<10){
                    cout<<"Current time = 0"<<crntHr<<":0"<<crntMin<<" AM"<<endl;
                    cout<<"Time after waiting period = 0"<<aftrHr<<":0"<<aftrMin<<" AM"<<endl;
                    cout<<endl;
                }else if (aftrHr>=10){
                    cout<<"Current time = 0"<<crntHr<<":"<<crntMin<<" AM"<<endl;
                    cout<<"Time after waiting period = "<<aftrHr<<":"<<aftrMin<<" AM"<<endl;
                    cout<<endl;
            }
            }
            if (crntHr>=10) {
                cout<<"Current time = "<<crntHr<<":0"<<crntMin<<" AM"<<endl;
                cout<<"Time after waiting period = "<<aftrHr<<":0"<<aftrMin<<" AM"<<endl;
                cout<<endl;
            }
            if(aftrHr<10) {
                cout<<"Current time = "<<crntHr<<":0"<<crntMin<<" AM"<<endl;
                cout<<"Time after waiting period = 0"<<aftrHr<<":0"<<aftrMin<<" AM"<<endl;
                cout<<endl;
            }
        }
    if (partDay='P'){
        if(aftrMin>=10 && crntMin>=10){
            if(crntHr<10) {
                if (aftrHr<10){
                    cout<<"Current time = 0"<<crntHr<<":"<<crntMin<<" PM"<<endl;
                    cout<<"Time after waiting period = 0"<<aftrHr<<":"<<aftrMin<<" PM"<<endl;
                    cout<<endl;
                }else if (aftrHr>=10) {
                    cout<<"Current time = 0"<<crntHr<<":"<<crntMin<<" PM"<<endl;
                    cout<<"Time after waiting period = "<<aftrHr<<":"<<aftrMin<<" PM"<<endl;
                    cout<<endl;
            }
            if (crntHr>=10) {
                cout<<"Current time = "<<crntHr<<":"<<crntMin<<" PM"<<endl;
                cout<<"Time after waiting period = "<<aftrHr<<":"<<aftrMin<<" PM"<<endl;
                cout<<endl;
            }
            if(aftrHr<10) {
                cout<<"Current time = "<<crntHr<<":"<<crntMin<<" PM"<<endl;
                cout<<"Time after waiting period = 0"<<aftrHr<<":"<<aftrMin<<" PM"<<endl;
                cout<<endl;
            }
            }
        }}else if (aftrMin>=10 && crntMin<10){
            if(crntHr<10) {
                if (aftrHr<10){
                    cout<<"Current time = 0"<<crntHr<<":0"<<crntMin<<" PM"<<endl;
                    cout<<"Time after waiting period = 0"<<aftrHr<<":"<<aftrMin<<" PM"<<endl;
                    cout<<endl;
                }else if (aftrHr>=10){
                    cout<<"Current time = 0"<<crntHr<<":0"<<crntMin<<" PM"<<endl;
                    cout<<"Time after waiting period = "<<aftrHr<<":"<<aftrMin<<" PM"<<endl;
                    cout<<endl;
            }
            }
            if (crntHr>=10) {
                cout<<"Current time = "<<crntHr<<":0"<<crntMin<<" PM"<<endl;
                cout<<"Time after waiting period = "<<aftrHr<<":"<<aftrMin<<" PM"<<endl;
                cout<<endl;
            }
            if(aftrHr<10) {
                cout<<"Current time = "<<crntHr<<":0"<<crntMin<<" PM"<<endl;
                cout<<"Time after waiting period = 0"<<aftrHr<<":"<<aftrMin<<" PM"<<endl;
                cout<<endl;
            }
        }else if (aftrMin<10 && crntMin>=10) {
            if(crntHr<10) {
                if (aftrHr<10){
                    cout<<"Current time = 0"<<crntHr<<":"<<crntMin<<" PM"<<endl;
                    cout<<"Time after waiting period = 0"<<aftrHr<<":0"<<aftrMin<<" PM"<<endl;
                    cout<<endl;
                }else if (aftrHr>=10){
                    cout<<"Current time = 0"<<crntHr<<":"<<crntMin<<" PM"<<endl;
                    cout<<"Time after waiting period = "<<aftrHr<<":0"<<aftrMin<<" PM"<<endl;
                    cout<<endl;
            }
            }
            if (crntHr>=10) {
                cout<<"Current time = "<<crntHr<<":"<<crntMin<<" PM"<<endl;
                cout<<"Time after waiting period = "<<aftrHr<<":0"<<aftrMin<<" PM"<<endl;
                cout<<endl;
            }
            if(aftrHr<10) {
                cout<<"Current time = "<<crntHr<<":"<<crntMin<<" PM"<<endl;
                cout<<"Time after waiting period = 0"<<aftrHr<<":0"<<aftrMin<<" PM"<<endl;
                cout<<endl;
            }
        }else if (aftrMin<10 && crntMin<10) {
            if(crntHr<10) {
                if (aftrHr<10){
                    cout<<"Current time = 0"<<crntHr<<":0"<<crntMin<<" PM"<<endl;
                    cout<<"Time after waiting period = 0"<<aftrHr<<":0"<<aftrMin<<" PM"<<endl;
                    cout<<endl;
                }else if (aftrHr>=10){
                    cout<<"Current time = 0"<<crntHr<<":"<<crntMin<<" PM"<<endl;
                    cout<<"Time after waiting period = "<<aftrHr<<":"<<aftrMin<<" PM"<<endl;
                    cout<<endl;
            }
            }
            if (crntHr>=10) {
                cout<<"Current time = "<<crntHr<<":0"<<crntMin<<" PM"<<endl;
                cout<<"Time after waiting period = "<<aftrHr<<":0"<<aftrMin<<" PM"<<endl;
                cout<<endl;
            }
            if(aftrHr<10) {
                cout<<"Current time = "<<crntHr<<":0"<<crntMin<<" PM"<<endl;
                cout<<"Time after waiting period = 0"<<aftrHr<<":0"<<aftrMin<<" PM"<<endl;
                cout<<endl;
            }
        }
    }
    
    //Repeat Function
    cout<<"Again:"<<endl;
    cin>>choice;
    if (choice=='y') {
        cout<<endl;
    }
    }while(choice=='y');
    
    //Exit stage right or left!
    return 0;
}