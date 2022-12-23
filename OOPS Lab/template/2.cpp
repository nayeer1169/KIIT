//q2
#include<iostream>
using namespace std;

template<class T1, class T2>
void display(T1 a,T2 b){
    cout << a << " and " << b << endl;
}
int main()
{
    int a1=123, a2= 714;
    float b1=7.14;
    char b2='S'; 
    display(a1,b1);
    display(a2,b2);    
    return 0;
}