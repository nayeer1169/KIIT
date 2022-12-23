//q6
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n;
    cout<<"Enter address of array to be accessed: ";
    cin>>n;
    try
    {
        if(n<0 || n>5){
            throw(n);
        }
        else
            cout<<arr[n];
    }
    catch(int j)
    {
        cout<<"Exception caught: Array Out of bound";
    }
    
}