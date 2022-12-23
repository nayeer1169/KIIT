#include<iostream>
#include<fstream >
using namespace std ;
int main(){
string names,line="";
	ofstream file("Text.txt");
	int i=0;
	while(i<10){
		cin>>names;
		file<<names<<endl;
		i++;
	}
	
	ifstream file2 ("Text.txt");
	while(getline(file2,names)){
line = line+names;
line = line+"\n";
	}
		for(int i=0;i<line.length();i++){
			if(line.at(i)>=97&&line.at(i)<123){
				line.at(i)=line.at(i)-32;
			}
		}
		cout<<line;
}
