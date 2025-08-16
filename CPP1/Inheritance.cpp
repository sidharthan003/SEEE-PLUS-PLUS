#include<iostream>

using namespace std;

class Rectangle 
{
	protected:
		int l,b;
	public:
		Rectangle(int l,int b)
		{
			this->l=l;
			this->b=b;
		}
		
		int getArea()
		{
			return l*b;
		}
};

class Box : public Rectangle
{
	private :
		int h;
	public:
		Box(int l,int b,int h):Rectangle(l,b)
		{
			this->h=h;
		}
		
		int getArea()
		{
			return 2*(l*b+b*h+l*h);
		}
		
		int getVolume()
		{
			return l*b*h;
		}
	
};

int main()
{
	Rectangle r(5,3);
	cout<<"\nArea : "<<r.getArea();
	
	Box b(2,3,5);
	cout<<"\nArea : "<<b.getArea();
	cout<<"\nVolume : "<<b.getVolume();
	return 0;
}