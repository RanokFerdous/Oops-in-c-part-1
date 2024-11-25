#include <iostream>
using namespace std;

class father {  //base class
    int age;
    char name[20];

public:
    void get();
    void show();
};

void father::get() {
    cout << "Your father's name, please: ";
    cin >> name;
    cout << "Enter the age: ";
    cin >> age;
}

void father::show() {
    cout << "My father's name is: " << name << endl;
    cout << "My father's age is: " << age << endl;
}

class mother {
    char name[20];
    int age;

public:
    void get();
    void show();
};



void mother::get() {
    cout << "Mother's name, please: ";
    cin >> name;
    cout << "Mother's age, please: ";
    cin >> age;
}

void mother::show() {
    cout << "My mother's name is: " << name << endl;
    cout << "My mother's age is: " << age << endl;
}

class daughter : public father, public mother {
    char name[20];
    int number;

public:
    void get();
    void show();
};

void daughter::get() {
    father::get();
    mother::get();
    cout << "Child's name: ";
    cin >> name;
    cout << "Child's standard: ";
    cin >> number;
}

void daughter::show() {
    father::show();
    mother::show();
    cout << "My name is: " << name << endl;
    cout << "My standard is: " << number << endl;
}

int main() {
    daughter d1;
    d1.get();
    d1.show();
    return 0;
}
