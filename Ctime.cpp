#include <cstdlib>
#include <iostream>
#include "Ctime.h"
#include <iomanip>

using namespace std;

Ctime Ctime::add(Ctime t2)
//************************
// object of type Ctime
// starts function outside of header file
//**************************
{

long t1Seconds;
long t2Seconds;
long t3Seconds;
//*******************
// var's(lonog), three of them
//**********************

Ctime temp;
//******************
// object of type Ctime
//*******************
            
    t1Seconds = ((long)hours)*3600 + minutes*60 + seconds;
    t2Seconds = ((long)t2.hours)*3600 + t2.minutes*60 + t2.seconds;
    t3Seconds = t1Seconds + t2Seconds;
//**************************************
// line one: gets hours from Ctime.h converts it to a long
// multiplies by 3600, adds minutes from Ctime.h, multiplies 
// by 60 and adds seconds
// Line two: takes object from param(hours) multiplies it by 3600
// adds miunutes from the same object, multiplies by 60 and adds
// seconds from object of type t2
//line three: adds t1 and t2seconds to get t3seconds
//***************************************
            
    temp.hours = t3Seconds / 3600;
    temp.minutes = t3Seconds % 3600 / 60;
    temp.seconds = t3Seconds % 3600 % 60;
    
//*******************
//  takes objects of type temp
//  (hours,minutes and seconds)
//  then takes the result of t1/2 seconds(t3)
//  and to find the corresponding object
// it divides hours by 3600(how many secs are in an hour)
// min's,  mod 3600 to get the remainder, then divided by 60, 
//  the number of min's in an hour
//  secs mod by 3600 and 60 to get the number of secs
//*****************************
            
return temp;


}
