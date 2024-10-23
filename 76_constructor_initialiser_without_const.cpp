

// constructor initailize in a same file so that we can understand
//this topic easily

#include<iostream>
#include<conio.h>  // for getch();

using namespace std;

class student {

    public:
        int admissionfee;

    //constructor

    student (int x)
    {
        admissionfee=x;
        cout<<admissionfee<<endl;
    }




};


int main()
{
    student s1(15000);
    getch();
}
