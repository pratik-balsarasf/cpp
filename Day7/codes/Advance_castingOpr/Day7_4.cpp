#include<iostream> 
using namespace std; 
class Complex 
{
    private: 
    int real; 
    int imag; 
    public: 
    Complex(void ) : real(0) , imag(0)
    {   }
    Complex(int real , int imag) : real(real) , imag(imag)
    {   }
    void printRecord( void )
    {
        cout<<"Real : "<<real<<endl; 
        cout<<"Imag : "<<imag<<endl; 
    }
}; 
int main()
{
    Complex c1(10,20);
    //c1.printRecord( ); //10 20  
    //Complex *ptrComplex = &c1; // OK 
    
    //int *itrComplex = &c1; // NOT OK 

    int *itrComplex = reinterpret_cast<int*>(&c1); // NOT OK 
    *itrComplex = 100; 
    itrComplex = itrComplex + 1; 
    *itrComplex = 200; 
    c1.printRecord( ); 
    return 0;
}
