#include<iostream>
#include<fstream>
using namespace std ;

class Student{
	string name ;
	int age;
public:
	void getdata(){
		cout<<"Enter name ";
		cin>>name;
		cout<<"Enter age ";
		cin>>age;
	}
	void showdata(){
		cout<<"name is "<<name;
		cout<<endl<<"Age is "<<age; 
	}
};


int main(){
	ofstream file("text.txt");
	Student s;
	s.getdata();
	ofstream file1("Text.txt");
	ifstream file2("Text.txt");
	file1.write((char*)&s,sizeof(s));
	file2.read((char*)&s,sizeof(s));
	s.showdata();
	
}
