#include <iostream>

using namespace std;
class complex{
	public:
		int real,imag;
		complex() {
			real=0;
			imag=2;
		}
		complex(int x){
			real = x;
			imag = 3;
		}
		complex(int x,int y){
			real = x;
			imag = y;
		}
		~complex(){
			cout<<"Destructor invoked"<< endl;
		}
		void Display() {
			cout<< real <<" + "<< imag <<" i "<<endl;
		}
};
int main(){
	complex a,b(1),c(2.3);
	a.Display();
	b.Display();
	c.Display();
	return 0;
}
