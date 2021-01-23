/* 
 * File:   main.cpp
 * Author: Joseph Ramirez Jr
 * Created on January 17th, 2021, 7:33 PM
 * Purpose: Menu to be utilized in Homework 3
 */

//System Level Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
#include <string>    //String Class
using namespace std; 

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu for Assignment 3 Homework"<<endl;
    cout<<"Type 1 for Gaddis Sorting Names Problem"<<endl;
    cout<<"Type 2 for Gaddis Book Points Problem"<<endl;
    cout<<"Type 3 for Gaddis Bank Charges Sums Problem"<<endl;
    cout<<"Type 4 for Gaddis Race Results Problem"<<endl;
    cout<<"Type 5 for Gaddis Internet Service Package Problem"<<endl;
    cout<<"Type 6 for Savitch Rock Paper Scissors Problem"<<endl;
    cout<<"Type 7 for Savitch Roman Numeral Conversion Problem"<<endl;
    cout<<"Type 8 for Savitch Horoscope Signs Problem"<<endl;
    cin>>choice;
    
    if(choice=='1'){
        //Declare Variables
        string   name1, //First Name to Be Inputted
                 name2, //Second Name
                 name3; //Third Name

        //Initialize Variables
        cout<<"Sorting Names"<<endl;
        cout<<"Input 3 names"<<endl;
        cin>>name1;
        cin>>name2;
        cin>>name3;

        //Alphabetizing the Names
        if (name1>name2 && name2>name3) {
            cout<<name3<<endl;
            cout<<name2<<endl;
            cout<<name1;
        } else if(name1>name3 && name3>name2) {
            cout<<name2<<endl;
            cout<<name3<<endl;
            cout<<name1;
        } else if(name2>name1 && name1>name3) {
            cout<<name3<<endl;
            cout<<name1<<endl;
            cout<<name2;
        } else if(name2>name3 && name3>name1) {
            cout<<name1<<endl;
            cout<<name3<<endl;
            cout<<name2;
        } else if(name3>name2 && name2>name1) {
            cout<<name1<<endl;
            cout<<name2<<endl;
            cout<<name3;
        } else if(name3>name1 && name1>name2) {
            cout<<name2<<endl;
            cout<<name1<<endl;
            cout<<name3;   
        }
    //Exit stage right!
    }else if(choice=='2'){
        //Declare Variables
        unsigned int bookPur, //Number of Books Purchased
                     pntsErn; //Number of Books Earned
    
        //Initialize Variables
        cout<<"Book Worm Points"<<endl;
        cout<<"Input the number of books purchased this month."<<endl;
        cin>>bookPur;
    
        //Number of Points Earned
        switch (bookPur){
            case 0:pntsErn=0;break;
            case 1:pntsErn=5;break;
            case 2:pntsErn=15;break;
            case 3:pntsErn=30;break;
            case 4:pntsErn=60;break;
            default:pntsErn=60;
        }
    
        //Display Inputs/Outputs
        cout<<"Books purchased ="<<setw(3)<<bookPur<<endl;
        cout<<"Points earned   ="<<setw(3)<<pntsErn;
    //Exit stage right!
    }else if(choice=='3') {
        //Declare Variables
        float baseFee, //Base Monthly Fee of Bank in Dollars
              chckRte, //Rate of Check Fees in Dollars
              chckFee, //Total Check Fees for the month in Dollars
              crntBal, //Current Bank Balance in Dollars
               lowFee, //Fee if Balance drops below $400
               newBal; //New Bank Balance in Dollars
       unsigned short int   numChck; //Number of Checks for the Month

        //Initialize Variables
        cout<<"Monthly Bank Fees"<<endl;
        cout<<"Input Current Bank Balance and Number of Checks"<<endl;
        cin>>crntBal;
        cin>>numChck;
        if (numChck<0){
            cout<<"Number of Checks imputted is invalid.";
        }else if(numChck>=0){
            if (crntBal<0) {
                cout<<"ACCOUNT IS OVERDRAWN";
            }else if (crntBal>0){
                if (numChck>=0 && numChck<20) {
                    chckFee=numChck*0.10f;
                }else if (numChck>=20 && numChck<=39) {
                    chckFee=numChck*0.08f;
                }else if (numChck>=40 && numChck<=59) {
                    chckFee=numChck*0.06f;
                }else if (numChck>59) {
                    chckFee=numChck*0.04f;
                }
            baseFee=10;
            crntBal<400?lowFee=15:lowFee=0;

            //Map Inputs to Outputs -> Process
                newBal=crntBal-baseFee-chckFee-lowFee;

                //Display Inputs/Outputs
                cout<<fixed;
                cout<<"Balance     $ "<<setw(8)<<setprecision(2)<<crntBal<<endl;
                cout<<"Check Fee   $ "<<setw(8)<<setprecision(2)<<chckFee<<endl;
                cout<<"Monthly Fee $ "<<setw(8)<<setprecision(2)<<baseFee<<endl;
                cout<<"Low Balance $ "<<setw(8)<<setprecision(2)<<lowFee<<endl;
                cout<<"New Balance $ "<<setw(8)<<setprecision(2)<<newBal;
            }
        }
    //Exit stage right!
    }else if(choice=='4') {
        //Declare Variables
        int     rcrTim1, //Time for Racer 1
                rcrTim2, //Time for Racer 2
                rcrTim3; //Time for Racer 3
        string  racer1,  //Name of Racer 1
                racer2,  //Name of Racer 1
                racer3;  //Name of Racer 1

        //Initialize Variables
        cout<<"Race Ranking Program"<<endl;
        cout<<"Input 3 Runners"<<endl;
        cout<<"Their names, then their times"<<endl;
        cin>>racer1>>rcrTim1;
        cin>>racer2>>rcrTim2;
        cin>>racer3>>rcrTim3;

        //Display Inputs/Outputs
        if (rcrTim1>0 && rcrTim2>0 && rcrTim3>0) {
            if (rcrTim1>rcrTim2 && rcrTim2>rcrTim3) {
                cout<<racer3<<"\t"<<setw(3)<<rcrTim3<<endl;
                cout<<racer2<<"\t"<<setw(3)<<rcrTim2<<endl;
                cout<<racer1<<"\t"<<setw(3)<<rcrTim1;
            } else if (rcrTim1>rcrTim3 && rcrTim3>rcrTim2) {
                cout<<racer2<<"\t"<<setw(3)<<rcrTim2<<endl;
                cout<<racer3<<"\t"<<setw(3)<<rcrTim3<<endl;
                cout<<racer1<<"\t"<<setw(3)<<rcrTim1;
            }else if(rcrTim2>rcrTim3 && rcrTim3>rcrTim1) {
                cout<<racer1<<"\t"<<setw(3)<<rcrTim1<<endl;
                cout<<racer3<<"\t"<<setw(3)<<rcrTim3<<endl;
                cout<<racer2<<"\t"<<setw(3)<<rcrTim2;
            }else if(rcrTim2>rcrTim1 && rcrTim1>rcrTim3) {
                cout<<racer3<<"\t"<<setw(3)<<rcrTim3<<endl;
                cout<<racer1<<"\t"<<setw(3)<<rcrTim1<<endl;
                cout<<racer2<<"\t"<<setw(3)<<rcrTim2;
            }else if(rcrTim3>rcrTim2 && rcrTim2>rcrTim1) {
                cout<<racer1<<"\t"<<setw(3)<<rcrTim1<<endl;
                cout<<racer2<<"\t"<<setw(3)<<rcrTim2<<endl;
                cout<<racer3<<"\t"<<setw(3)<<rcrTim3;
            }else if(rcrTim3>rcrTim1 && rcrTim1>rcrTim2) {
                cout<<racer2<<"\t"<<setw(3)<<rcrTim2<<endl;
                cout<<racer1<<"\t"<<setw(3)<<rcrTim1<<endl;
                cout<<racer3<<"\t"<<setw(3)<<rcrTim3;
            }
        }
    //Exit stage right!
    }else if(choice=='5') {
        //Declare Variables
        float           mnthCh; //Internet Package Base Monthly Charge
        unsigned short  totHrs; //Total Hours Used
        unsigned char     pack, //Internet Package
                        pckHrs, //Include Hours
                        addHrs; //Fee for Additional Hours

        //Initialize Variables
        cout<<"ISP Bill"<<endl;
        cout<<"Input Package and Hours"<<endl;
        cin>>pack;
        cin>>totHrs;
        switch (pack) {
            case 'A':{
                mnthCh=9.95f;
                pckHrs=10;
                addHrs=2;
                break;
            }
            case 'B':{
                mnthCh=14.95f;
                pckHrs=20;
                addHrs=1;
                break;
            }
            case 'C':{
                mnthCh=19.95f;
                pckHrs=0;
                addHrs=0;
                break;
            }
        }
        if(totHrs>pckHrs) {
            mnthCh+=(totHrs-pckHrs)*addHrs;
        }
    
        //Display Inputs/Outputs
        cout<<fixed;
        cout<<"Bill = $ "<<setw(5)<<setprecision(2)<<mnthCh;
    //Exit stage right!
    }else if(choice=='6') {
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
    //Exit stage right!
    }else if(choice=='7') {
        //Declare Variables
        unsigned short numCnvr; //Number to be Converted
        unsigned char    n1000, //Shift 3 places to the left
                          n100, //Remainder of division of 100 then shift 1 left
                           n10, //Remainder of division of 1000 then shift 2 left
                            n1; //Remainder of division by 10

        //Initialize Variables
        cout<<"Arabic to Roman numeral conversion."<<endl;
        cout<<"Input the integer to convert."<<endl;
        cin>>numCnvr;

        //Check for Valid Input
        if (numCnvr>=1000 && numCnvr<=3000){
            //Display Inputs/Outputs
            cout<<numCnvr<<" is equal to ";
            //Map Inputs to Outputs -> Process
            n1000=numCnvr/1000;   
            n100=numCnvr%1000/100;
            n10=numCnvr%100/10;   
            n1=numCnvr%10;      
            //Output of number of 1000's in Roman Numerals
            cout<<(n1000==3?"MMM":
                   n1000==2?"MM":
                   n1000==1?"M":"");
            //Output of number of 100's in Roman Numerals
            cout<<(n100==9?"CM":
                   n100==8?"DCCC":
                   n100==7?"DCC":
                   n100==6?"DC":
                   n100==5?"D":
                   n100==4?"CD":
                   n100==3?"CCC":
                   n100==2?"CC":
                   n100==1?"C":"");
            //Output of number of 10's in Roman Numerals
            cout<<(n10==9?"XC":
                   n10==8?"LXXX":
                   n10==7?"LXX":
                   n10==6?"LX":
                   n10==5?"L":
                   n10==4?"XL":
                   n10==3?"XXX":
                   n10==2?"XX":
                   n10==1?"X":"");
            //Output of number of 1's in Roman Numerals
            cout<<(n1==9?"IX":
                   n1==8?"VIII":
                   n1==7?"VII":
                   n1==6?"VI":
                   n1==5?"V":
                   n1==4?"IV":
                   n1==3?"III":
                   n1==2?"II":
                   n1==1?"1":"");
        }else {
            //Display Inputs/Outputs
            cout<<numCnvr<<" is Out of Range!";
        }
    //Exit stage right!
    }else if(choice=='8') {
        //Declare Variables
        string aries="Aries",
               leo="Leo",
               cancer="Cancer",
               pisces="Pisces",
               scorpio="Scorpio",
               taurus="Taurus",
               sagitt="Sagittarius",
               gemini="Gemini",
               virgo="Virgo",
               libra="Libra",
               capri="Capricorn",
               aqua="Aquarius",
               sign1,
               sign2;

        //Initialize Variables
        cout<<"Horoscope Program which examines compatible signs."<<endl;
        cout<<"Input 2 signs."<<endl;
        cin>>sign1;
        cin>>sign2;

        //Display Inputs/Outputs
        if (sign1==aries && sign2==aries) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Fire signs.";
            }
        if (sign1==aries && sign2==leo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Fire signs.";
            }
        if (sign1==aries && sign2==cancer) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==aries && sign2==pisces) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==aries && sign2==scorpio) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==aries && sign2==taurus) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==aries && sign2==sagitt) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Fire signs.";
            }
        if (sign1==aries && sign2==gemini) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==aries && sign2==virgo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==aries && sign2==libra) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==aries && sign2==capri) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==aries && sign2==aqua) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }

        if (sign1==leo && sign2==aries) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Fire signs.";
            }
        if (sign1==leo && sign2==leo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Fire signs.";
            }
        if (sign1==leo && sign2==cancer) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==leo && sign2==pisces) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==leo && sign2==scorpio) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==leo && sign2==taurus) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==leo && sign2==sagitt) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Fire signs.";
            }
        if (sign1==leo && sign2==gemini) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==leo && sign2==virgo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==leo && sign2==libra) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==leo && sign2==capri) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==leo && sign2==aqua) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }

        if (sign1==cancer && sign2==aries) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==cancer && sign2==leo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==cancer && sign2==cancer) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Water signs.";
            }
        if (sign1==cancer && sign2==pisces) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Water signs.";
            }
        if (sign1==cancer && sign2==scorpio) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Water signs.";
            }
        if (sign1==cancer && sign2==taurus) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==cancer && sign2==sagitt) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==cancer && sign2==gemini) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==cancer && sign2==virgo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==cancer && sign2==libra) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==cancer && sign2==capri) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==cancer && sign2==aqua) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }

        if (sign1==pisces && sign2==aries) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==pisces && sign2==leo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==pisces && sign2==cancer) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Water signs.";
            }
        if (sign1==pisces && sign2==pisces) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Water signs.";
            }
        if (sign1==pisces && sign2==scorpio) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Water signs.";
            }
        if (sign1==pisces && sign2==taurus) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==pisces && sign2==sagitt) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==pisces && sign2==gemini) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==pisces && sign2==virgo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==pisces && sign2==libra) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==pisces && sign2==capri) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==pisces && sign2==aqua) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }

        if (sign1==scorpio && sign2==aries) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==scorpio && sign2==leo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==scorpio && sign2==cancer) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Water signs.";
            }
        if (sign1==scorpio && sign2==pisces) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Water signs.";
            }
        if (sign1==scorpio && sign2==scorpio) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Water signs.";
            }
        if (sign1==scorpio && sign2==taurus) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==scorpio && sign2==sagitt) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==scorpio && sign2==gemini) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==scorpio && sign2==virgo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==scorpio && sign2==libra) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==scorpio && sign2==capri) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==scorpio && sign2==aqua) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }

        if (sign1==taurus && sign2==aries) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==taurus && sign2==leo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==taurus && sign2==cancer) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==taurus && sign2==pisces) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==taurus && sign2==scorpio) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==taurus && sign2==taurus) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Earth signs.";
            }
        if (sign1==taurus && sign2==sagitt) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==taurus && sign2==gemini) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==taurus && sign2==virgo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Earth signs.";
            }
        if (sign1==taurus && sign2==libra) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==taurus && sign2==capri) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Earth signs.";
            }
        if (sign1==taurus && sign2==aqua) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }

        if (sign1==sagitt && sign2==aries) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Fire signs.";
            }
        if (sign1==sagitt && sign2==leo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Fire signs.";
            }
        if (sign1==sagitt && sign2==cancer) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==sagitt && sign2==pisces) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==sagitt && sign2==scorpio) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==sagitt && sign2==taurus) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==sagitt && sign2==sagitt) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Fire signs.";
            }
        if (sign1==sagitt && sign2==gemini) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==sagitt && sign2==virgo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==sagitt && sign2==libra) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==sagitt && sign2==capri) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==sagitt && sign2==aqua) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }

        if (sign1==gemini && sign2==aries) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==gemini && sign2==leo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==gemini && sign2==cancer) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==gemini && sign2==pisces) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==gemini && sign2==scorpio) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==gemini && sign2==taurus) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==gemini && sign2==sagitt) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==gemini && sign2==gemini) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Air signs.";
            }
        if (sign1==gemini && sign2==virgo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==gemini && sign2==libra) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Air signs.";
            }
        if (sign1==gemini && sign2==capri) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==gemini && sign2==aqua) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Air signs.";
            }

        if (sign1==virgo && sign2==aries) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==virgo && sign2==leo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==virgo && sign2==cancer) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==virgo && sign2==pisces) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==virgo && sign2==scorpio) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==virgo && sign2==taurus) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Earth signs.";
            }
        if (sign1==virgo && sign2==sagitt) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==virgo && sign2==gemini) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==virgo && sign2==virgo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Earth signs.";
            }
        if (sign1==virgo && sign2==libra) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==virgo && sign2==capri) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Earth signs.";
            }
        if (sign1==virgo && sign2==aqua) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }

        if (sign1==libra && sign2==aries) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==libra && sign2==leo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==libra && sign2==cancer) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==libra && sign2==pisces) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==libra && sign2==scorpio) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==libra && sign2==taurus) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==libra && sign2==sagitt) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==libra && sign2==gemini) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Air signs.";
            }
        if (sign1==libra && sign2==virgo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==libra && sign2==libra) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Air signs.";
            }
        if (sign1==libra && sign2==capri) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==libra && sign2==aqua) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Air signs.";
            }
        if (sign1==capri && sign2==aries) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==capri && sign2==leo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==capri && sign2==cancer) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==capri && sign2==pisces) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==capri && sign2==scorpio) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==capri && sign2==taurus) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Earth signs.";
            }
        if (sign1==capri && sign2==sagitt) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==capri && sign2==gemini) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==capri && sign2==virgo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Earth signs.";
            }
        if (sign1==capri && sign2==libra) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign1==capri && sign2==capri) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Earth signs.";
            }
        if (sign1==capri && sign2==aqua) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }

        if (sign2==aqua && sign2==aries) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign2==aqua && sign2==leo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign2==aqua && sign2==cancer) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign2==aqua && sign2==pisces) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign2==aqua && sign2==scorpio) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign2==aqua && sign2==taurus) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign2==aqua && sign2==sagitt) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign2==aqua && sign2==gemini) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Air signs.";
            }
        if (sign2==aqua && sign2==virgo) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign2==aqua && sign2==libra) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Air signs.";
            }
        if (sign2==aqua && sign2==capri) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are not compatible signs.";
            }
        if (sign2==aqua && sign2==aqua) {
                cout<<sign1<<" and "<<sign2;
                cout<<" are compatible Air signs.";
            }
        //Exit stage right!
        }else {
            cout<<"Not an Option"<<endl;
        }

    //Clean Up
    
    //Exit stage right!
    return 0;
}