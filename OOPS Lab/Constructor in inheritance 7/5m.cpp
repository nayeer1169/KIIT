#include<iostream>
using namespace std;
class Account
{
    protected:
    int accNo;
    string name;
    int bal;
    virtual void deposit(int)=0;
    virtual void withdraw(int)=0;
    virtual void disBal()=0;
};
class Savings:public Account
{
    int minBal;
    public:

    Savings(int a, int n,string m,int j)            
    {
        accNo=a;
        name=m;
        bal=n;
        minBal=j;
    }
    void deposit(int n)
    {
        bal+=n;
    }
    void withdraw(int n)
    {
        if(bal<=minBal)
        {
            cout<<"Low Balance"<<endl;
        }
        else{
            bal-=n;
        }
    }
    void disBal()
    {
        cout<<"Balance= "<<bal;
    }
};
class Current:public Account
{
    int odue;
    public:
    Current(int a, int n,string m)
    {
        accNo=a;
        name=m;
        bal=n;
        odue=0;
    }
    void deposit(int n)
    {
        bal+=n;
    }
    void withdraw(int n)
    {
        bal-=n;
        if(bal<0)
        {
            odue=(-1)*bal;
        }
    }
    void disBal()
    {
        cout<<"Balance= "<<bal;
    }
};
int main()
{
    int a,b,m;
    string n;
    cout<<"Enter Account no.: ";
    cin>>a;
    cout<<"Account holder name: ";
    cin>>n;
        cout<<"Account Balance: ";
        cin>>b;
        cout<<"Enter the MIn balance: ";
        cin>>m;
    Savings s(a,b,n,m);
    Current c(a,b,n);
    cout<<"Balance of saving account: ";s.disBal();cout<<endl;
    cout<<"Balance of current account: ";c.disBal();cout<<endl;

}
