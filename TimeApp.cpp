#include <cstdlib>
#include <iostream>
#include "Ctime.h"
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{


    char colon;    
    int hrs;
    int mins;
    int secs;
//******************************************
// sets 4 var's, three int's and one char 
//******************************************
    
    
    Ctime firstT;
    Ctime secondT;
    Ctime answerT;
//***************************
// declares three objects of type Ctime
//******************************
    cout << "Enter the first time in the format of HH:MM:SS\n\n";
    cin >> hrs >> colon >> mins >> colon >> secs;
//*************************************
// asks user for input, 
// the program gets var: hrs, colon, min and sec
//**************************************
    
    firstT.setHours(hrs);
    firstT.setMinutes(mins);
    firstT.setSeconds(secs);
//**************************
// sets hrs, mins, and sec to paramaters 
// of object(of Ctime) functions, setHours, setMinutes
// and set Seconds
//**************************
    
    cout << "Enter the second time in the same format\n\n";
    cin >> hrs >> colon >> mins >> colon >> secs;
//*******************************
// gets input a second time for it to be added
//********************************
    secondT.setHours(hrs);
    secondT.setMinutes(mins);
    secondT.setSeconds(secs);
//******************************
// sets hrs, mins, and secs to params of 
// the second object created above 
//********************************
    
    
cout << "the totals are: " <<endl;
    
    answerT = firstT.add(secondT);
    cout << "Hours:" << answerT.getHours()<<endl;
    cout << "Minutes:" <<answerT.getMinutes()<<endl;
    cout << "Sconds:" <<answerT.getSeconds()<<endl;
//*************************************
// outputs the addition of the hrs, mins and secs from
// the input from the users 
// hte calculation is made in Ctime.cpp
//***********************************
   
   
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
