#include<iostream>

using namespace std;

class ABC
{

	public:
	virtual void print()
	{
		cout<<"I am base"<<endl;
	}
	
	void greet()
	{
		cout<<"Hi"<<endl;
	}
};

class PQR:public ABC
{

	public:
	void print()
	{
		cout<<"I am child"<<endl;
	}
	void greet()
	{
		cout<<"Hello"<<endl;
	}
};


int main()
{
	ABC ob1;
	PQR ob2;
	
	ob1.print();
	ob2.print();
	
	
	ABC* p;
	p=&ob1;
	p->greet();
	p->print();
	
	p=&ob2;
	p->greet();
	p->print();
	
	return 0;
	
	
	
}