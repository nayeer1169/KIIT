#include <iostream>
using namespace std;

class employee{
    string name;
    int age;
    int id;
    int DA;
    int HRA;
    int basicSalary;
    public:
    void getdata(){
        cout<<"Enter Name:"<<endl;
        cin>>name;
        cout<<"Enter Age:"<<endl;
        cin>>age;
        cout<<"Enter id:"<<endl;
        cin>>id;
        cout<<"basic salary :"<<endl;
        cin>>basicSalary;
    //     DA=21*basicSalary;
    // HRA=38*basicSalary;
     cout<<"DA="<<endl;
     cin>>DA;
     cout<<"HRA="<<endl;
     cin>>HRA;
        }

        void calculate(){
              DA=21*basicSalary;
    HRA=38*basicSalary;
        }
    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"id :"<<id<<endl;
        cout<<"Basic salary "<<basicSalary<<endl;
        cout<<"DA  "<<DA<<endl;
        cout<<"HRA  "<<HRA<<endl;
    }
    
};

// class gratuary:public employee{
//      int DA;
//      int HRA;
//      int basicSalary;
//      public:
//      void getinfo(){
//     //  cout<<"DA=21*basicSalary"<<basicSalary<<endl;
//     //  cout<<"HRA=38*bacicSalary"<<basicSalary<<endl;
//     DA=21*basicSalary;
//     HRA=38*basicSalary;
    
//     }
//     void displayInfo(){
//         cout<<"DA"<<DA<<endl;
//         cout<<"HRA"<<HRA<<endl;
//     }
// };

int main(){
    employee d;
    d.getdata();
    d.display();
    d.calculate();
    
    return 0;
}