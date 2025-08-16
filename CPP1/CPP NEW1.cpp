#include <iostream>
#include <cmath>  

using namespace std;

class Integer
{
    private:
        int n;

    public:
        void setN(int);
        int getN();
        void inc();
        void dec();
        int get_sq();
        int get_sqroot();
        int get_twice();
        int get_neg();
        int get_recip();
};

void Integer::setN(int n)
{
    this->n = n;
}

int Integer::getN()
{
    return n;
}

void Integer::inc()
{
    n++;
}

void Integer::dec()
{
    n--;
}

int Integer::get_sq()
{
    return n * n;
}

int Integer::get_sqroot()
{
    return sqrt(n);
}

int Integer::get_twice()
{
    return n * 2;
}

int Integer::get_neg()
{
    return -n;
}

int Integer::get_recip()
{
    return 1 / n;  
}

int main(){
  
    Integer i;
    
    i.setN(5);
    cout<<"i = "<<i.getN()<<endl;
    i.inc();
    cout<<"i = "<<i.getN()<<endl;
    i.inc();
    cout<<"i = "<<i.getN()<<endl;
    i.dec();
    cout<<"i = "<<i.getN()<<endl;
    i.dec();
    cout<<"i = "<<i.getN()<<endl;
    i.get_twice();
    cout<<"2i = "<<i.get_twice()<<endl;
    i.get_neg();
    cout<<"-i = "<<i.get_neg()<<endl;
    i.get_sq();
    cout<<"i^2 = "<<i.get_sq()<<endl;
    i.get_sqroot();
    cout<<"i^0.5 = "<<i.get_sqroot()<<endl;
    i.get_recip();
    cout<<"1/i = "<<i.get_recip()<<endl;
    
    
    
    return 0;
}
