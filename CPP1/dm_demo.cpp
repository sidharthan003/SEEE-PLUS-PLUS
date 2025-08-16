#include<iostream>

using namespace std;

int* getInt()
{
	int* a = new int;
	*a=5;
	return a;
}

int main()
{
	int *p,q=6;
	
	p=getInt();
	
	cout<<q<<endl;  
	cout<<*p<<endl;
	
	delete p;
	
	return 0;
	
}