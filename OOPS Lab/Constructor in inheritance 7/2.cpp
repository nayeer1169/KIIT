//WAP to demonstrate the order of call of constructor and destructors in case of multi-level inheritance
#include<iostream>
using namespace std;
class base
{
    int a;
    public:
        base(int b)
        {
            a=b;
            cout<<"\nBase Constructor was Called";
            cout<<"\nA= "<<a;
        }
        ~base()
        {
            cout<<"\nBase Destructor was Called";
        }
};
class base1:public base
{
    int b;
    public:
        base1(int a,int b):base(b)  
        {
            b=a;
            cout<<"\nBase 1 Constructor was Called";
            cout<<"\nB= "<<b;
        }
        ~base1()
        {
            cout<<"\nBase1 Destructor was Called";
        }
};
class derived:public base1
{
    int x;
    public:
    derived(int y,int a,int b):base1(a,y)
    {
        x=y;
        cout<<"\nDerived Construtor was Called";
        cout<<"\nX= "<<x;    }
~derived()
{
    cout<<"\nDerived Destructor was Called";
}
};
int main()
{
    derived d(10,20,21);
}
