#include <iostream>
using namespace std;
class Student{
    private:
        string name;
        int rollno;
         
    
    public:
        int total[3];
        void getDetails(){
            for(int i=0;i<3;i++){
                cout<<"\nEnter details for student "<<i+1<<": ";
                cout<<"\nName: ";
                cin>>name;
                cout<<"\nRoll no: ";
                cin>>rollno;
                cout<<"\nTotal: ";
                cin>>total[i];
            }
        }
        
};
void getAverage(Student s, int n){
    s.getDetails();
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+s.total[i];
    }
    double average=double(sum)/(double)n;
    cout<<"\nAverage is "<<average;
}
int main()
{
    Student s1;
    getAverage(s1,3);


    return 0;
}
