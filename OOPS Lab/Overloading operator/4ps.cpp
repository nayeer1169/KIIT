//4
#include <iostream>
#include <string.h>
using namespace std;

class Sentence{
    private:
        string *str;
        string abc;
    public:
        Sentence(){
            str = new string[1];
        }
        ~Sentence(){}
        void input(){
            cout << "Enter string: ";
            getline(cin, abc);
            str[0] = abc;
        }
        Sentence operator +(Sentence test){
            Sentence temp;
            temp.abc = str[0] + test.str[0];
            return temp;
        }
        void show(){
            cout << "Added string: " << abc;
        }
};

int main(){
    Sentence a,b,c;
    a.input();
    b.input();
    c = a+b;
    c.show();

    return 0;
}
