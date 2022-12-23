#include<iostream>
using namespace std;
class bird
{
public:
    void bdis(){
        cout<<"Birds have wings"<<endl;
    }
};
class peacock:public bird
{
    public:
    void pcdis(){
        cout<<"Peacock is a flightless bird"<<endl;
    }
};
class peahen:public peacock
{
    public:
    void phdis(){
        cout<<"Peahen is a female peacock"<<endl;
    }
};
class bat:public bird
{
    public:
    void batdis(){
        cout<<"Bat's are not birds"<<endl;
    }
};
class aves:public bird,public bat
{
    public:
    void avdis(){
        cout<<"Birds belong in aves family but bats don't"<<endl;
    }
};
int main(){
    class bird a;
    class peacock b;
    class peahen c;
    class bat d;
    class aves e;
    a.bdis();
    b.pcdis();
    b.bdis();
    c.phdis();
    c.pcdis();
    c.bdis();
    d.batdis();
    d.bdis();
    e.avdis();
    e.batdis();
}
