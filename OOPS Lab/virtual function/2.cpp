//ooplab9 q2
#include<iostream>
using namespace std;
class Employee{
	private:
	string name;
	int id;
	double salary;
	
	public:
		void setData(string n, int i){
			name = n;
			id = i;
		}
		
		virtual void calculateSalary()=0;
};
class Part_Time: private Employee{
	private:
	int number_of_hours;
	double pay_per_hour;
	public:
		Part_Time(int n, double d){
			number_of_hours = n;
			pay_per_hour = d;
		}
		void calculateSalary(){
		cout<<"The employee salary is:  "<<number_of_hours *pay_per_hour <<endl;
	}
	
};
class Regular: private Employee{
	private:
	double DA, HRA , basic_salary;
	public:
	Regular(double d, double h, double b){
		DA = d;
		HRA = h;
		basic_salary = b;
	}
	public:
	void calculateSalary(){
		cout<<"The employee salary is:  "<<DA+ HRA + basic_salary<<endl;
	}
};
int main(){
	Part_Time p(3,4000);
	Regular r(350,2000,300);
	p.calculateSalary();
	r.calculateSalary();
}
