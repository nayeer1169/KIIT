//ooplab9 q4
#include<iostream>
using namespace std;
class base{
    public:
        virtual void display()=0;
};
class derived1: public base{
    public:
        void display(){
            cout<<"This is 1st derived class!"<<endl;            
        }
};
class derived2: public base{
    public: 
        void display(){
            cout<<"This is 2nd dericed class!"<<endl;
        }
};
int main(){
    derived1 d1;
    derived2 d2;
    d1.display();
    d2.display();
    return 0;
}
