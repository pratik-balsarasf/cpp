#include<iostream>
using namespace std; 
class Complex 
{
    private: 
    int real; 
    int imag; 
    public: 
    Complex( void ): real(0) , imag(0)
    {   
        cout<<"Complex( void )"<<endl; 
    }
    //this = &c2 
    //other = c1 
    Complex(const Complex &other)
    {
        cout<<"Complex(const Complex &other)"<<endl; 
        this->real = other.real; 
        this->imag = other.imag; 
    }
    Complex(int real , int imag) : real(real) , imag(imag)
    {   
        cout<<"Complex(int real , int imag)"<<endl; 
    }
    void printRecord( void )
    {
        cout<<"Real : "<<real<<endl;
        cout<<"Imag : "<<imag<<endl;   
    }
}; 
int main()
{
    Complex c1(10,20); 
    Complex c2(c1); //on c2 object copy ctor will get called 
    c2.printRecord( ); 
    return 0;
}

int main4()
{
    Complex c1(10,20); 
    Complex c2; 
    c2 = c1; //assignment (no copy ctor will get called )
    return 0;
}

int main3()
{
    Complex c1(10,20); 
    Complex c2 = c1; //initialization (on c2 object copy ctor will get called )
    return 0;
}

int main2()
{
    Complex c1(10,20); //on c1 object parameterized ctor will get called 
    return 0;
}

int main1()
{
    Complex c1; //on c1 parameterless ctor will get called 
    return 0;
}
