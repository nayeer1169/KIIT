//q5
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter values for a and b:";
    cin>>a>>b;
    try
    {
        if(b!=0)
            cout<<a/b<<endl;
        else
            throw(b);
    }
    catch(int j)
    {
        cout<<"Exception caught: Divide by Zero"<<endl;
    }
    return 0;
} 