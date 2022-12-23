#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string names,line="";
	ofstream file("Text.txt");
	ifstream file2("Text.txt");
	cout<<"Enter 10 names \n";
	int i=0;
	while(i<10){
		cin>>names;
		file<<names<<endl;
		i++;
	}
	file.close();
    while(getline(file2,names)){
    	line = line+names;
    	line= line+"\n";
	}
reverse(line.begin(),line.end()); 
	cout<<line;

}
