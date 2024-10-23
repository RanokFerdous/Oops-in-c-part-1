//here the code for the destructor learning . i write example code here because  i can't create any project .
// there are 3 different file . when i create project then we uses 3 diff file for run this code.

//1st file : main.cpp

#include<iostream>
#include "myfirstclass.h"

using namespace std;

int main()

{
    MyFirstClass obj;
    ob.display();
    return 0;
}

//2nd file: myfirstclass.h file

#ifndef MYFIRSTCLASS_H   //CHEEK define or not define

#define MYFIRSTCLASS_H

#include "myfirstclass.h"

class MyFirstClass
{
public:
    //  *************remember constructor and destructor is called automatically.

    MyFirstClass ();  // call constructor
    ~MyFirstClass();// call  destructor . ******destructor call always in the last.
    void display();// it is called before the destructor
};

#endif // MYFIRSTCLASS_H



// 3rd file of this project or code

//myfirstclass.cpp

#include "myfirstclass.h"

#include <iostream>

using namespace std;

MyFirstClass ::MyFirstClass()  // constructor  -> has no return type.  it AUTOMATICALLY called
{
    cout<<"Constructor is called"<<endl;
}


MyFirstClass ::~MyFirstClass()  // destructor -> has no return type.  *******it AUTOMATICALLY CALLED
{
    cout<<"destructor is called"<<endl;
}

void MyFirstClass::display () //   IT HAS RETURN TYPE AND TYPE IS VOID
{
    cout<<"display is called"<<endl;
}









