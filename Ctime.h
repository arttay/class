#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

class Ctime
{
//*****************************
// declares a class called Ctime 
//*****************************

      public:
             Ctime();
             ~Ctime();
             int getHours();
             int getMinutes();
             int getSeconds();
             void setHours(int);
             void setMinutes(int);
             void setSeconds(int);
             Ctime add(Ctime);
//***********************************
// member functions of class Ctime 
//************************************
      private:
              int hours;
              int minutes;
              int seconds;
//************************
// member var's of class Ctime
//*****************************
};

inline Ctime::Ctime()
{
}
//************************
// constructor
//***************************
inline Ctime::~Ctime()
{
}
//**************************
//de(con)structor
//****************************
inline int Ctime::getHours()
{
       return hours;
       }
inline int Ctime::getMinutes()
{
       return minutes;
}
inline int Ctime::getSeconds()
{
       return seconds;
       }       
//**********************
// accessers 
//***********************
inline void Ctime::setHours(int hr)
{
       hours=hr;
       }
inline void Ctime::setMinutes(int min)
{
 minutes=min;      
}
inline void Ctime::setSeconds(int sec)
{
 seconds=sec;      
}
//***************************
// mutatorsr 
//**************************
