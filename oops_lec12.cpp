#include <iostream>
#include <string>
using namespace std;

class compare_string {
public:
    string s;

    compare_string(string s) {
        this->s = s;
        // this->t = t;
    }

    bool operator >(const compare_string &p) {
        return (s > p.s);
    }

    bool operator <(const compare_string &p) {
        return (s < p.s);
    }

    bool operator ==(const compare_string &p) {
        return (s == p.s);
    }

    string operator +(const compare_string &p) {
        return (s+p.s);
    }
};

int main() {
    compare_string obj1("abc");
    compare_string obj2("abc");

    if (obj1 < obj2) {
        cout << "1st string is less than 2nd string" << endl;
    }
    if (obj1 > obj2) {
        cout << "1st string is greater than 2nd string" << endl;
    }
    if (obj1 == obj2) {
        cout << "1st string is equal to 2nd string" << endl;
    }

    compare_string ans = obj1 + obj2;
    cout << "Concatenated string: " << ans.s << endl;

    return 0;
}
