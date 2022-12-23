#include <iostream>
using namespace std;

class A {
    public:
    string s;
    int leng;
    A() {
        s = "";
        leng = 0;
    }
    A(string x) {
        s = x;
        leng = x.length();
    }
    void join(A &x, A &y) {
        s = x.s + y.s;
        leng = s.length();
    }
    void display() {
        cout << "String: " << s << endl;
        cout << "Length: " << leng << endl;
    }
};

int main() {
    A a("Hello"), b("World"), c;
    c.join(a, b);
    c.display();
    return 0;   
}
