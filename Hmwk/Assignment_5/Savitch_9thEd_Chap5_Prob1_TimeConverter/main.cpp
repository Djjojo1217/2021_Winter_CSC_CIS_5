/* 
 * File:  main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 25, 2021, 7:42 AM
 * Purpose:  Time Conversion for 12-hour Notation
 */
 
 //Function Prototypes
 char day(int milHr);
 int hour(int milHr);
 
 //System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    int       milHr, //Military Hour 
              stdHr, //Standard Hour
             minute; //Minute
    unsigned char    partDay, //AM or PM
             choice; //Repeat Function or Not
     
    //Intialize the Variables
    cout<<"Military Time Converter to Standard Time"<<endl;
    cout<<"Input Military Time hh:mm"<<endl;
    do{ //Do-While Loop for Repeating the Program
        cin>>milHr;
        cin.ignore();
        cin>>minute;
        
        //Conversion of Time
        stdHr=hour(milHr);
        
        //Display the Outputs
        if(day(milHr)=='A'){
            cout<<milHr<<":"<<minute<<" = "<<stdHr<<":"<<minute<<" AM"<<endl;
        }
            cout<<milHr<<":"<<minute<<" = "<<stdHr<<":"<<minute<<" PM"<<endl;
        if (day(milHr)=='C') {
            cout<<"You Don't Know What You Are doing!"<<endl;
        }
        
        //Repeat the Program
        cout<<"would you like to convert another time (y/n)"<<endl;
        cin>>choice;
        
    
    }while(choice=='y');
             
    //Exit Program
    return 0;
}

char day(int milHr) { //Determining AM or PM
    //Declare Variables
    char partDay; //AM or Pm
    
    if (milHr>=00 || milHr<12) {
        partDay=='A';
    }else if (milHr>=12 || milHr<24) {
        partDay=='P';
    }else if (milHr>=24) {
        partDay=='C';
    }
    return partDay;
}

int hour(int milHr) {   //Converting Military Time to Standard Time
    //Declare Variables
    int stdHr; //Standard Hour of Time
    
    //Mapping the Outputs
    if (milHr=00) {
        stdHr=milHr+12;
    }else if (milHr>00 || milHr<=12) {
        stdHr=milHr;
    }else if (milHr>12 || milHr<24) {
        stdHr=milHr-12;
    }
    return stdHr;
}