//q4
#include<iostream>
using namespace std;
  
// Class template with two parameters
template<class T1, class T2>
class Test
{
        T1 a;
        T2 b;
    public:
        Test(T1 x, T2 y)
        {
            a = x;
            b = y;
        }
        void show()
        {
            cout << a << " and " << b << endl;
        }
};
  
// Main Function
int main()
{
    // instantiation with float and int type
    Test <float, int> test1 (7.14, 714);
      
    // instantiation with float and char type
    Test <int, char> test2 (28, 'S');   
      
    test1.show();
    test2.show();
      
    return 0;
}