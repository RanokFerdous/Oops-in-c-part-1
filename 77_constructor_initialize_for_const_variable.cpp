// when CONST variable are present then we use this method
//for initailize the const constructor


#include<iostream>
#include<conio.h>

using namespace std;

class student
{
    public:
    const int admissionFee;
    const int examFee;
    int id;  // this is normal


    //declare or initialize  the constructor


    student (int x,int y,int z)
    : admissionFee(x),examFee(y)
    {

        cout<<"admission fee= "<<x<<endl;
        cout<<"examFee= "<<y<<endl;
        id=z;
        cout<<"Id="<<id<<endl;
    }
};


int main()
{
    student s1(15000,3000,499);  // student in included in public keyword .
                          // if we not use public we can't access here.
    getch();
}




