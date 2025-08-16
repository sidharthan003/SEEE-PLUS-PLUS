
#include<iostream>
#include <cmath>
using namespace std;

class  Complex{
	float real;
	float imaginary;

	
	public:
		
		Complex()
		{
			real = 0;
			imaginary=0;
		}
		Complex(float r,float i) {
			real = r;
			imaginary = i;
		}
		
		float getModulus(){
			
			return sqrt (real * real + imaginary * imaginary);
		}
		float getArgument(){
			return atan(imaginary / real);
		}
		void print()  {
	        if (imaginary >= 0)
	            cout << real << " + " << imaginary << "i" << endl;
	        else
	            cout << real << " - " << -imaginary << "i" << endl;
    	}
            
        static Complex add(Complex c1,Complex c2)
        {
        	Complex c3;
        	c3.real = c1.real+c2.real;
        	c3.imaginary = c1.imaginary+c2.imaginary;
        	return c3;
		}
		
		friend Complex operator+(Complex c1,Complex c2)
        {
        	Complex c3;
        	c3.real = c1.real+c2.real;
        	c3.imaginary = c1.imaginary+c2.imaginary;
        	return c3;
		}
		
		Complex operator*(Complex c2)
        {
        	Complex c3;
        	c3.real = real*c2.real-imaginary*c2.imaginary;
        	c3.imaginary = imaginary*c2.real +  real*c2.imaginary;
        	return c3;
		}
		Complex operator--(int) {
        	return Complex(real, -imaginary);
    	}
    	
    	friend ostream& operator<<(ostream &os,Complex c)
    	{
    		 if (c.imaginary >= 0)
	            cout << c.real << " + " << c.imaginary << "i" << endl;
	        else
	            cout << c.real << " - " << -c.imaginary << "i" << endl;
	        return os;
		}
};
int main(){
	float r,i;
	
	Complex c1(3,4);
	Complex c2(5,6);
	c1.print();
	cout<< "Modulus = "<< c1.getModulus()<< endl;
	cout<< "Argument = "<< c1.getArgument()<< endl;
	
	c2.print();
	cout<< "Modulus = "<< c2.getModulus()<< endl;
	cout<< "Argument = "<< c2.getArgument()<< endl;
	
	Complex c3 = c1+c2;
	c3.print();
	
	Complex c4 = c1*c2;
	c4.print();
	
	Complex c5 = c1--;
	cout<<c5;
	

	return 0;
	
}

