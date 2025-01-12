
// lecture :10
// topic : using pointer to objects

//topic : this pointer, new, delete, destructor

// code 1: using printer to objects
/*
#include<bits/stdc++.h>
using namespace std;

class samp
{
    int a,b;
public:
    samp( int n,int m){ a=n; b=m;}

    int  get_a(){ return a;}

    int  get_b (){ return b;}
};

int main()
{
    samp ob[4]=
    {
        samp(1,2),
        samp(3,4),
        samp( 5,6),
        samp(7,8)
    };

    int i;
    samp *p;  //  --->>
    p= ob; // get starting address of array

    for( int i=0;i<4;i++)
    {
        cout<<p->get_a()<<" ";
        cout<<p->get_b()<<endl;
        p++; // advance of next objects.
    }


}
*/
/*j output:
1 2
3 4
5 6
7 8

*/



//  TOPIC : THIS  pointer

//describe :this is a pointer that is automatically passed to any
//member function when it is called, and it points to the object that generates the call.
//

//vip*******.t is important to understand that only member functions are passed a this pointer. For example, a
//friend does not have a this pointer.


//  code for :  topic: this pointer
/*

#include<bits/stdc++.h>
using namespace std;

class inventory {

    char item [20];
    double cost;
    int on_hand;

public:

    inventory( char *i, double c, int o)
    {
        strcpy ( this->item, i);
        this->cost =c;

        this->on_hand=o;
    }
    void show();


};

void inventory:: show()
{
    cout<<this->item<<endl; // use this access members
    cout<<"$"<<this->cost<<endl;

    cout<<"on hand: " <<this->on_hand<<endl;
}


int main()
{

    //inventory ob;

    inventory ob( "laptop", 1200.50, 5);
    //this->show();

    ob.show();

    /*

    output:
    laptop
$1200.5
on hand: 5

}


*/





  // ****************TOPIC : NEW AND DELETE


  //n C++, you
//can allocate memory using new and release it using delete. These operator take the general form

 /*
  p-var = new type;
 delete p-var;

 Here type is the type of the object for which you want to allocate memory and p-var is a pointer to
that type. new is an operator that returns a pointer to dynamically allocated memory that is large
enough to hold an object of type type. delete releases that memory when it is no longer needed.

*/



//  code : ********example of new and delete

//code :1
/*
#include<bits/stdc++.h>
using namespace std;
int main(){

    int *p;

    p = new int; // allocate room for integer

    //if( !(p==0))
    if( !p)  //---->>>>
    {
        cout<<" Allocation error"<<endl;
        return 1;
    }

    *p =1000;

    cout<<" here integer p is "<<*p<<endl;

    delete p; //release memory.

//  outptu:    here integer p is 1000



}
*/


// code 2 : new and delete topic

/*
#include<bits/stdc++.h>
using namespace std;

class samp
{
    int a,b;
public:

    void set_ij( int m, int n)
    {
        a=m;
        b=n;
    }

    int get_product( )
    {
        return (a*b);
    }
};


int main(){

     samp *p;

     p= new samp;  // allocate room for object

     if( !p)
     {
         cout<<" Allocation error \n";
         return 1;
     }
     //  pointer using arror operator for indicating function


     p->set_ij(4,5);
     cout<< "Product is: "<<p->get_product()<<endl;

     delete p;
     return 0;



//ouptput: Product is: 20.

}

*/



//*****************topic : destructor


// code 1: for destructor learing
/*
#include<bits/stdc++.h>
using namespace std;

class myclass
{
    int a;
public:
    myclass (); //constructor
   ~ myclass(); //destructor

   void show();
};

myclass :: myclass()
{
    cout<<" constructor is called"<<endl;
    a=10;
}

myclass ::~myclass()
{
    cout<<"Destructor is called "<<endl;
}

//void show()

void myclass :: show()   //  *******VIP LINE IN CODE .....
{
    cout<<" the value a is : "<<a<<endl;
}


int main()
{
    myclass ob;

    ob.show();
    return 0 ;
}
*/
//outptu:
 //constructor is called
// the value a is : 10
//Destructor is called



/* the pdf code is below : this is wrong code . the right is below of this code

#include<bits/stdc++.h>
using namespace std;


class alpha
{
public:
    int count=0;
    alpha ()
    {
        count++;
        cout<<"\n no of object created: "<<count<<endl;
    }

    ~alpha ()
    {
        cout<<"\n no of object distroyed :"<<count<<endl;
        count--;
    }
};

int main()
{
    cout<<" \n \n Enter main:"<<endl;
    alpha A1,A2,A3,A4
    {
        cout<<"enter block 1:"<<endl;
        alpha A5;
    }

    {
        cout<<"\n \n enter block2\n";
        alpha A6;
    }

    cout<<"\n re-enter main"<<endl;
    return 0;


}

*/

/*

//  right code is here:

#include <iostream>
using namespace std;

class alpha
{
public:
    // Static variable to track the count across all objects
    static int count;

    // Constructor
    alpha()
    {
        count++;
        cout << "\nNo of objects created: " << count << endl;
    }

    // Destructor
    ~alpha()
    {
        cout << "\nNo of objects destroyed: " << count << endl;
        count--;
    }
};

// Initialize the static variable
int alpha::count = 0;

int main()
{
    cout << "\n\nEnter main:" << endl;

    alpha A1, A2, A3, A4; // Create 4 objects

    { // Block 1
        cout << "Enter block 1:" << endl;
        alpha A5; // Create 1 object inside block 1
    } // A5 is destroyed here

    { // Block 2
        cout << "\n\nEnter block 2:" << endl;
        alpha A6; // Create 1 object inside block 2
    } // A6 is destroyed here

    cout << "\nRe-enter main" << endl;

    return 0; // Remaining objects (A1, A2, A3, A4) are destroyed here
}
*/

/*  output :
Enter main:

No of objects created: 1

No of objects created: 2

No of objects created: 3

No of objects created: 4
Enter block 1:

No of objects created: 5

No of objects destroyed: 5


Enter block 2:

No of objects created: 5

No of objects destroyed: 5

Re-enter main

No of objects destroyed: 4

No of objects destroyed: 3

No of objects destroyed: 2

No of objects destroyed: 1


*/


// code : 2  ( topic : constructor and destructor )
/*
#include<bits/stdc++.h>
using namespace std;
int x=1;
class abc    //  z*********  WRONG CODE IS THIS
{
public:
    abc()
    {
        x--;
        cout<<"constructor the no "<<x<<endl;
    }

    ~abc()
    {
        cout<<"destructor the no :"<<x<<endl;
        x--;
    }
};


int main(){
   abc l1,l2,l3,l4;

   cout<<l1<<" "<<l2<<" "<<l3<<" "<<l4<<endl;

return 0 ;

}

*/


//RIGHT CODE
/*
#include <iostream>
using namespace std;

// Global variable
int x = 1;

class abc
{
public:
    // Constructor
    abc()
    {
        cout << "Constructor called, object no: " << x << endl;
        x++; // Increment x for each new object
    }

    // Destructor
    ~abc()
    {
        x--; // Decrement x before destruction
        cout << "Destructor called, object no: " << x << endl;
    }
};

int main()
{
    abc l1, l2, l3, l4; // Create 4 objects

    // Output object memory addresses (not supported with object variables directly)
    cout << &l1 << " " << &l2 << " " << &l3 << " " << &l4 << endl;

    return 0; // Destructors will be called automatically when objects go out of scope
}

*/
/*  outpput:

Constructor called, object no: 1
Constructor called, object no: 2
Constructor called, object no: 3
Constructor called, object no: 4
0x61fe3f 0x61fe3e 0x61fe3d 0x61fe3c
Destructor called, object no: 4
Destructor called, object no: 3
Destructor called, object no: 2
Destructor called, object no: 1
*/







// LECTURE : 11
// TOPIC:  OPERATOR OVERLOADDING
/*
 We can overload all the C++ operators except the following:
  Class members access operator (. , .*)
  Scope resolution operator (: :)
  Size operator(sizeof)
  Condition operator (? :)


 DEFINING OPERATOR OVERLOADING:


 //Operator precedence and associativity
 // For example, the multiplication operator will enjoy higher precedence than the
addition operator

*/





