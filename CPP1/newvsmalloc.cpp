#include<iostream>

using namespace std;

class ABC
{

	int a,b,c;
	public:
	ABC()
	{
		a=5;
		b=6;
		c=8;
		cout<<"I am called"<<endl;
	}
	void print()
	{
		cout<<"a, b, c = "<<a<<", "<<b<<", "<<c<<endl;
	}
};
int main()
{
	ABC ob1;
	ob1.print();
	
	ABC *ob2 = new ABC();
	ob2->print();
	
	ABC *ob3 = (ABC*)malloc(sizeof(ABC));
	ob3->print();
	
	return 0;
	
}