//q1
#include<iostream>
using namespace std;
template <class t>
void Sort_arr(t a[],int n)
{
    int i, j, min; 
    t temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++)
        if (a[j] < a[min])
        min = j;
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    for (i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\n";
};
int main()
{
    int n,i;
    cout<<"Enter no. of elements in array: ";
    cin>>n;
    int arr1[50];
    float arr2[50];
    cout<<"Enter the elements of arr1: ";
    for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the elements of arr2: ";
    for (i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }
    Sort_arr(arr1,n);
    Sort_arr(arr2,n);
    return 0;
}