/*

#include<bits/stdc++.h>
using namespace std;


class student
{
private:
    char stdname[50];
    int stdno;

public:
    void getvalue()
    {
        cout<<"enter your name:";
        cin>>stdname;
        cout<<"enter your stdno :";
        cin>>stdno;
    }

    void displayvalue()
    {
        cout<<"name is:"<<stdname<<endl;
        cout<<" roll no is :"<<stdno<<endl;
    }
};

int main(){

cout<<"                 LECTURE CLASS: 1"<<endl;
//code:1
student s1;
s1.getvalue();
s1.displayvalue();










//Class
// A group of objects that share common properties for data part and some program part are collectively
//called as class

// A class is thus a collection of objects similar types.
}

*/

/*
 #include <iostream>
 using namespace std;
 enum designFlags {
    BOLD = 1,
    ITALICS = 2,
    UNDERLINE = 4
 };
 int main()
{
    cout<<"               Lecture :4 Enum    "<<endl;

    int myDesign = BOLD | UNDERLINE;
        //    00000001
        //  | 00000100
        //  ___________
        //    00000101
    cout << myDesign;
    return 0;
 }


 #include <iostream>
 using namespace std;
 enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
 int main()
 {
    week today;
    today = Sunday;
    cout << "Day " << today+1;
    return 0;
 }
*/

//  TOPIC : MANIPULATOR -> SETW() , endl
/*

#include<bits/stdc++.h>
using namespace std;
int main()
{

    cout<<"           manipulator setw() and endl "<<endl;

    int m,n,p;
    m=2597;

    n=14;
    p=175;

      cout<<setw(5)<<m<<endl;
    cout<<setw(5)<<n<<endl;
    cout<<setw(5)<<p<<endl;
/*
    cout<<setw(10)<<"basic"<<setw(10)<<basic<<endl;
    cout<<setw(10)<<"allowance"<<setw(10)<<allowance<<endl;
    cout<<setw(10)<<"total="<<setw(10)<<total;



}
*/


/*
Function Overloading
 Function overloading means two or more functions can have the same name but
either the number of arguments or the data type of arguments has to be different.
Return type has no role because function will return a value when it is called and at
compile time compiler will not be able to determine which function to call.

*/


/*
#include <iostream>
 using namespace std;
 // Function arguments are of different data type
 long add(long, long);
float add(float, float);
 int main() {
 long a, b, x;
float c, d, y;
 cout << "Enter two integers\n";
cin >> a >> b;
 x = add(a, b);
 cout << "Sum of integers: " << x << endl;
 cout << "Enter two floating point numbers\n";
cin >> c >> d;
 y = add(c, d);
 cout << "Sum of floats: " << y << endl;
 return 0;
}

 long add(long x, long y) {
 long sum;
 sum = x + y;
 return sum;
}


 float add(float x, float y) {
 float sum;
 sum = x + y;
 return sum;
 }


 */

 //  TOPIC: reference variable.
 /*REFERENCE VARIABLES:
 C++interfaces a new kind of variable known as the reference variable.
 A references variable provides an alias (alternative name) for a
 previously defined variable. For example, if we make the variable
  sum a reference to the variable total, then sum and total can be used
interchangeably to represent the variable


 Syntax:
Datatype & reference_ name=variable name;
 Example:
 float total=1500;
float &sum=total;



Example:
 int n[10];
int &x=n[10];
char &a=’\n’;


 Memory Management Operator

 C uses malloc and calloc functions to allocate memory dynamically at run time. Similarly it
uses the functions Free() to free dynamically allocated memory. We use dynamic allocation
techniques when it is not known in advance how much of memory space as needed.
 C++ also support those functions it also defines two unary operators new and delete that
perform the task of allocating and freeing the memory in a better and easier way.
 The new operator can be used to create objects of any type.


Syntax:
pointer variable =new datatype;

 Example:
 p=new int;
q=new int;
 Where p is a pointer of type int and q is a pointer of type float.

 int *p=new int;
 float *p=new float;

Subsequently, the statements
 *p=25;
 *q=7.5;

 Assign 25 to the newly created int object and 7.5 to the float object. We can also initialize the
memory using the new operator.

 Syntax:
 int *p=new int(25);
float *q =new float(7.5);

 new can be used to create a memory space for any data type including user defined such as
arrays, structures, and classes. The general form for a one-dimensional array is:

 pointer-variable =new data types [size];

 creates a memory space for an array of 10 integers.

 If a data object is no longer needed, it is destroyed to release the memory space   reuse.
 Syntax: delete pointer-variable;

 Example:
 delete p;
delete q;

 If we want to free a dynamically allocated array ,we must use the following form of delete.
 delete [size] pointer-variable; or
 delete [] pointer variable;


 Advantages of new and delete over malloc( ) and free( )
  new automatically allocates enough memory to hold an object of the specified type. You do
not need to use sizeof.
 new automatically returns a pointer of the specified type. You do not need to use an explicit
type cast the way you did when you allocate memory using malloc().
 both new and delete can be overloaded, enabling you to easily implement your own custom
allocation system.
 it is possible to initialize a dynamically allocated object.
 you no longer need to include < cstdlib > with your program.
 */


 /*

 public and private topic:

 The members that have been declared as private can be accessed only from with in the class.
On the other hand, public members can be accessed from outside the class also. The data
hiding is the key feature of oops. The use of keywords private is optional by default, the
members of a class are private



 class item
{
 int member;
 float cost;
public:
 };
 void getldata (int a ,float b) {
 member=a;
 cost=b;
 }
void putdata (void)
 {
 cout<<member<<” ”<<cost;
 }
 void main()
 {
 item x;
 x.getdata(2, 3.5);
 x.putdata();
 }

 */

 /*
 // LECTURE :7

  TOPIC : CONSTRUCTOR :



  What is the use of Constructor

 The main use of constructors is to initialize objects. The function of
 initialization is automatically carried out by the use of a special member
 function called a constructor.

 General Syntax of Constructor

 Constructor is a special member function that takes the same name as the class name.

 The syntax generally is as given below:
 <class name> {arguments};

 The default constructor for a class X has the form
 X::X()
 In the above example the arguments is optional.

 A constructor is declared and defined as follows:




//class with a constructor
    class integer {
        int m, n;
public:
        integer (void); //constructor declared ------------------------
};
    integer :: integer(void) {
          m=0;
          n=0;
 }




// A::A() /*[without no body] will be called when you create object for class A
 Invokes the default constructor of the compiler to create the object a.

 The constructor functions have some characteristics:

  They should be declared in the public section.
  They are invoked automatically when the objects are created.
  They don't have return types, not even void and therefore they cannot return values.
  They cannot be inherited, though a derived class can call the base class constructor.
  Like other C++ function, they can have default arguments,
  Constructor can't be virtual.
  An object with a constructor can't be used as a member of union.



 */


 // default constructor code
/*

 #include<bits/stdc++.h>
 using namespace std;

 class abc
 {
 private:
    char nm[10];

 public:
    abc()
    {
        cout<<"enter your name: ";
        cin>>nm;
    }

    void display()
    {
        cout<<"name is :"<<nm<<endl;
    }
 };

 int main()
 {
     abc d;
     d.display();
     return 0;
 }


 //PARAMETERIZED CONSTRUCTOR:

 //  demo examle
class integer {
 int m,n;
public:
 integer (int x, int y);
 --------
 ---------
};
 integer:: integer (int x, int y) {
 m=x;
 n=y;
}


*/

/*
//    CODE : 1 CLASS WITH CONSTRUCTOR    3RD PAGE OF LECTURE 7.

#include<bits/stdc++.h>
using namespace std;

class integer
{
private:
    int m,n;

public:
    integer( int,int); //

    void display()
    {
        cout<<"m="<<m;
        cout<<"n ="<<n;
    }
};

integer:: integer ( int x,int y)  //  class_name:: class_name ( parameter)
{
    m=x;
    n=y;
}

int main()
{
    integer int1 (0,100); // implicit call
    integer int2=integer ( 25,75); // explicit constructor

    cout<<"\n object1"<<endl;
    int1.display();
    cout<<"\n object2"<<endl;
    int2.display();


}

*/

/*
// code 2: another example of consturctor

#include<bits/stdc++.h>
using namespace std;

class abc
{
private:
    char nm[10];
    int age;
    public:
      abc(){};

      abc( char x[], int y);

      void get()
      {
          cout<<"entre your name:";
          cin>>nm;
          cout<<"enter your age: ";
          cin>>age;
      }
    void display()
    {
        cout<<nm<<endl;
        cout<<age<<endl;
    }
};

 abc:: abc( char x[], int y)

{
    strcpy( nm,x);
    age=y;

    }


int main()
{
    abc l;
    abc m= abc( "computer", 32923);

    l.get();
    l.display();
    m.display();
}

*/

/*
//code : 3   OVERLOADDED CONSTRUCTOR

 #include<bits/stdc++.h>
 using namespace std;

 class sum
 {
 private :
    int a,b;
    float c,d;
    double e;

 public:
    sum()
    {
        cout<<"enter a:";
        cin>>a;
        cout<<"enter b:";
            cin>>b;


    }
    void display()
    {
        cout<<" a ="<<a<<endl;
        cout<<" b ="<<b<<endl;
    }

    sum ( int a, int b);
    sum ( int a, float d,double e);
 };


 sum :: sum ( int x, int y)
 {
     a= x;
     b= y;

     cout<<" sum = "<<a+b<<endl;
 }

 sum :: sum ( int r, float p, double q)

{
   a=r;
   d=p;
   e=q;

   cout<<"sum is :"<<double (a+b+e)<<endl;
}

int main()
 {
     sum l;
     l.display();

     sum m= sum( 10,20);
     sum n = sum( 15,25.3,324.2);
 }

*/

// code 4 : COPY CONSTRUCTOR

// Copy Constructor
 //Copy constructor is
 //1. a constructor function with the same name as the class
 //2. used to make deep copy of objects.
/*
 #include<bits/stdc++.h>
 using namespace std;

 class Exforsys
 {
private :

    int a;

public:
    Exforsys()
    {

    }

    Exforsys( int w)
    {
        a=w;
    }

    Exforsys ( Exforsys &e)
    {
        a=e.a;
        cout<<" Example of copy constructor"<<endl;
    }

    void result ()
    {
        cout<<a<<endl;
    }

 };

 int main()
 {
     Exforsys e1(50);
     Exforsys e3(e1);

     e3.result();
     return 0;
 }


 //  LECTURE 8: STATIC CLASS MEMBER


//(i) Only a single copy of the static data member is used by all the objects.
 //(ii) It can be used within the class but its lifetime is the whole program.

  For making a data member static, we require:
 (a) Declare it within the class.
 (b) Define it outside the class
 For example,
 Class student
 {
 static int count; //declaration within class--------------------------------------------------
};
 The static data member is defined outside the class as:
 int student :: count; //definition outside class

 We can also initialize the static data member at the time of its definition as:
 int student :: count = 0;

 //A static member function can access only the static members of a class.

  Class student
 {
 static int count;
 int a;
 ----------------
public :
    ---------------------------------
static void showcount(void) //static member function
 {
  cout<<"count="<<count<<”\n”;
 }
 };
 int student ::count=0;

 */
 //  CODE FOR EXAM *****************

/*
 #include<bits/stdc++.h>
 using namespace std;

 class alpha
 {
 private:
    int id;

    static int count;

 public:
    alpha()
    {
        count++;
        id=count;
    }

    void print ()
    {
        cout<<"MY id is:"<<id<<endl;
        cout<<"count is :"<<count<<endl;
    }
 };

 int alpha ::count =0; // defination of count

 int main()
 {
     alpha a1;
     a1.print();

     alpha a2,a3;

     a2.print();
    // alpha a3;

     a3.print();
     return 0;

 }
 /*
 //answer: MY id is:1
count is :1
MY id is:2
count is :3
MY id is:3
count is :3
*/

/*   //************VIP FOR EXAM
#include<bits/stdc++.h>
using namespace std;

class test
{
    int code;
    static int cnt; // static member variable

public:
    void setcode(void){
    code=++cnt;
    }

    void showcode (void)
    {
        cout<<"object member :"<<code<<endl;
    }

    static void showcount (void )
    {
        cout<<"count ="<<cnt<<endl;
    }


};

int test:: cnt;

int main()
{
    test t1,t2;
    t1.setcode();
    t2.setcode();
    test::showcount();
    test t3;
    t3.setcode();

    test::showcount();
// NOTE: ++cnt or cnt++ . this type of code , the cnt value not fixed . it will be the last update valu
  // BUT: t1, t2,t3 has 3 separate value and uniqe value.

    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;

    //answer: are here:
    //count =2
//count =3
//object member :1
//object member :2
//object member :3

}

*/



//  FRINED FUNCTION

//   A friend function is used for accessing the non-public members of a class. A class can allow non
//member functions and other classes to access its own private data, by making them friends. Thus, a
//friend function is an ordinary function or a member of another class.

/*
//  code  : FRIEND FUCNTION USING FOR ACCESSING private member .....
#include<bits/stdc++.h>
using namespace std;

class exForFriend
{
private:
    int a,b;

public:
    void test()
    {
        a=100;
        b=200;
    }

    friend int compute ( exForFriend e1);
};


int compute( exForFriend e1)
{
    return int  (( e1.a + e1.b)-5);
}

int main()
{
    exForFriend e;

    e.test();

    cout<<" the resutl is :"<<compute( e)<<endl;
}

//output: the resutl is :295.
*/

//  STRUCTURE OF FRIEND CLASS IS:

/*
 FRIEND CLASSES
 In C++ , a class can be made a friend to another class. For example,


 class TWO; // forward declaration of the class TWO
 class ONE
 {


 ………………………
 …………….
 public:
 ……………..
 ……………..
 friend class TWO; // class TWO declared as friend of class ONE
};

 Now from class TWO, all the member of class ONE can be accessed

 */

//  topric : passing object to function.....
/*
#include<bits/stdc++.h>
using namespace std;

class samp
{
    int i;
public:
    samp (int n){ i=n;}  //  for a , i==10 and for b , i==2
    int get_i (){return i;}

};

int sqr_it( samp o)
{
    return o.get_i() * o.get_i();
}



int main(){


    cout<<"     LECTURE:09 ->  passing object to fucntion/n returning object from function "<<endl;

//  passing object to function

samp a(10), b(2);  // a and b  are oject which value are 10 and 2
cout<<sqr_it(a)<<endl;  //100
cout<<sqr_it(b)<<endl;//4
return 0;


}
*/

// topic : passing obje to fucntion--->> using address pass.

/*
//  using address passing
#include<bits/stdc++.h>
using namespace std;

class samp
{
    int i;
public:
    samp( int n){ i=n;}

    int get_i() {return i;}
};

int sqr_it ( samp *o)
{
    return ( o->get_i() * o->get_i());
}

int main(){

     samp a(10);
     cout<< a.get_i() * a.get_i()<<endl;  //100
     cout<<sqr_it( &a)<<endl; // passing address to sqr_it//100

// outptu: 100 100.


}
*/

//   TOPIC : PASSING OBJECT FROM FUCNTION

// Remember that when an object is returned by a
//function, a temporary object is automatically created which holds the return value.
// It is this object that
//is actually returned by the function. After the value is returned, this object is
//******* destroyed.


/*

//CODE : RETURNING OBJECT FROM FUCNTION

 #include<bits/stdc++.h>
 using namespace std;

 class samp
 {
     char s[80];
 public:

     void show(){cout<<s<<" \n";}

     void set (char *str){ strcpy (s,str);
     }

 };


 samp input()
 {
     char s[89];
     samp str;  // str is a object of class samp
     cout<<"enter your string: ";
     cin>>s;
     str.set(s);
     return str;

 }




 int main(){
    samp ob;
    ob =input();
    ob.show();
    return 0;



// iput : ranok
// output: ranok

 }


 */



 // Lecture :10 Reference
 /*  c++ contains a feature that is related to pointer : reference.

3 way that reference can be used .
  1. a reference can be passed to a fucntion
  2. a reference can be passed to a fucntion.
  3.an independent reference can be created.

 */

// code :01  ( the most important use of a reference is as a parameter to a function )

/*
#include<bits/stdc++.h>
using namespace std;

void f( int &n); // declare a reference parameter

int main()
{
    int i=0;
    f(i);
    cout<<"here is i's new value :"<<i<<endl;
    return 0;
}

void f( int &n)
{
    n=100;
}

// output: 100
*/
//  code :2
/*
#include<bits/stdc++.h>
using namespace std;

void swaping( int &p, int &q)
{
    swap ( p,q);
}
int main(){

    int a=10,b=20;

    cout<<"before swapping value:"<<a<<" "<<b<<endl;

    swaping( a,b);

    cout<<"After swapping value:"<<a<<" "<<b<<endl;



}

*/


//  topic : passing reference to objects ( lecture :10 ->paze 2


// When you pass an object by reference, no copy is made, and therefore its destructor function is not
//called when the function returns.


//code :1   sir why destrucing 1 are printed 2 times?????????....

#include<bits/stdc++.h>
using namespace std;

class myclass {

    int who;
public:
    myclass (int i)
    {
        who =i;
        cout<<"Constructing "<<who<<endl;
    }

    ~myclass()
    {
        cout<<"Destructing"<< who<<endl;
    }

    int id()
    {
        return who;
    }

};

void f( myclass o)  //  *****if we write void f( myclass &o) then
// destructing 1 printed just 1 time........
{
    cout<<"received "<<o.id()<<endl;
}


int main(){

    myclass x (1);
    f(x);
    return 0;

}

//output:
//Constructing 1
//received 1
//Destructing1
//Destructing1


//  code 2 :

//  same as code 1 : just void f( myclass o) is replaced to
//        void f ( myclass &o)  then output: will be below 3 line:

//Constructing 1
//received 1
//Destructing1
