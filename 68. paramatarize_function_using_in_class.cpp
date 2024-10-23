#include<bits/stdc++.h>
using namespace std;

class student
{
public:
    int id;
    double gpa;

    void setValue(int x,double y)
    {
        id=x;
        gpa=y;
    }

    void display()
    {
        cout<<id<<" "<<gpa<<endl;
    }


};


    int main()
    {
        //class_name object;

        student Alim,kabil;
        Alim.setValue(32,3.32);
        Alim.display();

    }
