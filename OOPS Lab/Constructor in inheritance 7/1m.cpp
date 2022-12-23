//WAP to demonstrate the order of call of construction and destructor in case of multiple inheritance
#include <iostream>
using namespace std;

class base1
{
public:
  base1 ()
  {
    cout << " constructor of class base1\n";
  }
    ~base1 ()
  {
      cout << " destructor of class base1\n";
  }
};

class base2
{
    public:
    base2()
    {
        cout << " constructor of class base2\n";
    }
    ~base2()
    {
        cout << " destructor of class base2\n";
    }
};
class derive1: public base1, public base2{
	public:
		derive1(){
			cout<<"constructor of class derive1\n";
		}
		
		~derive1(){
			cout<<"destructor of class derive1\n";	
		}
};
int main(){
	derive1 x;
	cout<<"Destructor are:"<<endl;
}

