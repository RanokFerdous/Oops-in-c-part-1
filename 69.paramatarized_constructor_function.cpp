    #include<bits/stdc++.h>
    using namespace std;

    class student
    {
    public:

        int id;
        double gpa;



        void display()
        {
            cout<<"Id="<<id<< endl<<"gpa="<<gpa<<endl;
        }

        //using consturctor



        student (int x,double y)
        {
            id=x;
           gpa=y;
        }

    };


    int main()
    {
        student Alim(102,3.22);

        Alim.display();

        student kabil(103,3.24);
        kabil.display();

    }
