//building a new progect file .  *******this  can't work here because i can't create any project

// a project has 3 part:main.cpp file,   header file,  another cpp file


// at first main.cpp filebuf

//main.cpp

#include<iostream>

#include "myfirstclass.h"  // header file . this line present all 3 file

using namespace std;

int main()
{
    myFirstClass obj1; // it call 2nd to 3 rd file

    obj1.display();
}


//myfirstclass.h   file . the 2nd file

#ifndef    MYFIRSTCLASS_H  // cheeck  define or not
#define    MYFIRSTCLASS_H

#include "myfirstclass.h"   //  present all 3 file

class MyFirstClass
{
    public:
    myFirstClass();
    void display();

};

#endif // MYFIRSTCLASS_H


//  -------------- 3rd file  :  myfirstclass.cpp

#include "myfirstclass.h"  // this line present all 3 file

#include<iostream>
using namespace std;

// class_name::class_member

myFirstClass::myFirstClass()
{
    cout<<"inside the constructor\n";
}

myFirstClass::display()
{
    cout<<"Inside the display function\nthis is the display function call\n"<<endl;
}



