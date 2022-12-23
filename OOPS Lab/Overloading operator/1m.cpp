#include <iostream>
using namespace std;
class distance{
	private:
		int feet , inches;
    
    public:
    	void readDistance(){
        cout<<"Enter feet:";
		cin>>feet;
		cout<<"Enter inches:";
		cin>>inches;    		
		}
	    
	    void dispDistance(){
	    	cout<<"Feet:"<<feet<<"\t"<<"Inches:"<<inches<<endl;
		}
		Distance operator+(Distance& dist1){
			Distance tempD;
			tempD.inches=inches + disp1.inches;
			tempD.feet=feet+dist1.feet+ (tempD.inches/12);
			tempD.inches=tempD.inches % 12;
			return tempD;
		}
};
int main(){
	Distance D1,D2,D3;

	cout<<"Enter first diatance:"<<endl;
	D1.readDistance();
	cout<endl;
	
	count<<"Enter second distance:"<<endl;
	D2.readDistance();
	cout<<endl;
	
	D3= D1 + D2;
	cout<<"Total distance:"<<endl;
	D3.dispDistance();
	return 0;
}
