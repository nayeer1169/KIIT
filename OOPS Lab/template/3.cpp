//q3
#include<iostream>
using namespace std;
template <class t>
class Sort{
    t a[50];
    int n;
    public:
    Sort(t arr[],int s){
        n=s;
        for(int i=0;i<n;i++){
            a[i]=arr[i];
        }
    }
    void Sort_arr()
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
    }
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
    Sort <int> a1(arr1,n);
    Sort <float> a2(arr2,n);
    a1.Sort_arr();
    a2.Sort_arr();
    return 0;
}
