//
// 3 file needed here . i code a dry code here because i can't create a projec here.

//
                                            ****CONST OBJECT DECLARE IN A PROJECT******
//1st file : main.cpp

#include<iostream>
#include "myclassdemo.h"

using namespace std;

int main()
{
   const MyClassDemo ob;    //  const declare
     ob.display();
     return 0;
}



//-----------------------------------------------------------------------------------------------------------------------------
//2nd file myfirstclass.h

#ifndef MYCLASSDEMO_H
#define MYCLASSDEMO_H
#include "myclassdemo.h"

class MyClassDemo
{
public:
    void display() const;   //******this function can use everywhere of this code

};

#endif // MYFIRSTCLASS_H




//3rd file: myfirstclass.cpp

#include  "myclassdemo.h"

#include<iostream>
using namespace std; // because we print something here or we use cout which is included in using namespace std;

void  MyClassDemo::display() const
{
    cout<<"I am a constructor function";
}


//NOTE: const can call only const function .
// it can't call any non-const function




