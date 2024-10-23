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

        //-----------------------------------------------------------
    // DEFAULT constructor  : it is using to store any important or any sentence to help the people
    //1.it has no paramater.
    //2.class name is same.
    //3.

    student ()
    {
        cout<<"defalult constuctor is here"<<endl;
    }

    };


    int main()
    {

        //default contructor call
       // student ();  or
       student ob;


        student Alim(102,3.22);

        Alim.display();

        student kabil(103,3.24);
        kabil.display();

    }

