#include<iostream> 
using namespace std; 
class Base 
{
    private: 
    int num1; 
    int num2; 
    public: 
    void setNum1( int num1 )
    {
        this->num1 = num1; 
    }  
    void setNum2(int num2)
    {
        this->num2 = num2; 
    }
    void printRecord( void )
    {
        cout<<"num1 : "<<num1<<endl;
        cout<<"num2 : "<<num2<<endl;  
    }

}; 
class Derived : public Base 
{
    private:
    int num3; 
    public: 
    void setNum3( int num3)
    {
        this->num3 = num3; 
    } 
    void printRecord( void )
    {
        Base::printRecord( ); 
        cout<<"num3 : "<<num3<<endl; 
    }
}; 
int main()
{
    Base *ptrBase = new Base( ); 
    ptrBase->setNum1(10); 
    ptrBase->setNum2(20); 
    //Derived *ptrDerived = (Derived*)ptrBase; 
    Derived *ptrDerived = static_cast<Derived*>(ptrBase);
    ptrDerived->setNum3(30); // NOT RECC 
    ptrDerived->printRecord( ); 
    return 0;
}

int main4()
{
    Base *ptrBase = new Derived( ); 
    ptrBase->setNum1(10); 
    ptrBase->setNum2(20); 
    //ptrBase->printRecord( ); //10 20 
    Derived *ptrDerived = static_cast<Derived*>(ptrBase); 
    ptrDerived->setNum3(30); 
    ptrDerived->printRecord( ); // 10 20 30 
    return 0;
}
int main3()
{
    Base *ptrBase = new Derived( ); 
    ptrBase->setNum1(10); 
    ptrBase->setNum2(20); 
    //ptrBase->printRecord( ); //10 20 
    Derived *ptrDerived = (Derived*)ptrBase; 
    ptrDerived->setNum3(30); 
    ptrDerived->printRecord( ); // 10 20 30 
    return 0;
}

int main2()
{
    Derived *ptrDerived = new Derived( ); 
    ptrDerived->setNum1(10); 
    ptrDerived->setNum2(20); 
    ptrDerived->setNum3(30); 
    ptrDerived->printRecord( ); //10 20 30 
    return 0;
}

int main1()
{
    Base *ptrBase = new Base(); 
    ptrBase->setNum1(10); 
    ptrBase->setNum2(20); 
    ptrBase->printRecord( ); 
    return 0;
}
