#include<iostream>
#include<fstream>
using namespace std ;
int main(){
	ofstream file("Text.txt");
	ifstream file2("Text.txt");
	string name ,line="";
	int i=0;
	while(i<10){
		cin>>name;
		file<<name<<endl;
		i++;
	}
	int ch=0,wo=0,li=0,up=0,lo=0,dig=0,sp=0;
	while(getline(file2,name)){
		line = line+name;
		li++;
	}	
	cout<<li;
}
