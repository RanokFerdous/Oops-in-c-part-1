// 3 file needed here . i code a dry code here because i can't create a projec here.

//

//1st file : main.cpp

#include<iostream>
#include "myfirstclass.h"

using namespace std;
//---------------------------------------------------------------------------------------------------------------     MAIN PART OF THIS CODE
int main()                 //*********line for selector operator                                                      HERE WE USE SELECTOR.
{                         // we are using different thing for this 2 line code for using selector
    MyFirstClass ob;
     ob.display();         // MyFirstClass ob;
    return 0;             //MyFirstClass *p=&ob;
                          // p-> display();
                          //return 0;

}

//-----------------------------------------------------------------------------------------------------------------------------
//2nd file myfirstclass.h

#ifndef MYFIRSTCLASS_H
#define MYFIRSTCLASS_H
#include "myfirstclass.h"

class MyFirstClass
{
public:
    void display();   //******this function can use everywhere of this code

};

#endif // MYFIRSTCLASS_H




//3rd file: myfirstclass.cpp

#include  "myfirstclass.h"

#include<iostream>
using namespace std; // because we print something here or we use cout which is included in using namespace std;

void  MyFirstClass::display()
{
    cout<<"display is called\n";
}













