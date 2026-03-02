#include<typeinfo>
#include<iostream> 

using namespace std; 
class Base 
{

}; 
class Derived : public Base 
{

}; 
int main()
{
    Derived *ptrDerived = new Derived( ); 
    //cout<<"Type : "<<typeid(ptrDerived).name()<<endl; 
    cout<<"Type : "<<typeid(*ptrDerived).name()<<endl; 
    return 0;
}

int main4()
{
    Base *ptrBase = new Base( ); 
    //cout<<"Type : "<<typeid(ptrBase).name()<<endl; 
    cout<<"Type : "<<typeid(*ptrBase).name()<<endl; 
    return 0;
}

int main3()
{
    Derived derived; 
    cout<<"Type :"<<typeid(derived).name( )<<endl; 
    return 0;
}

int main2()
{
    Base base; 
    cout<<"Type : "<<typeid(base).name( )<<endl;   
    return 0;
}

int main1()
{
    int num; 
    const type_info &typeN = typeid(num);
    cout<<typeN.name( );   
    return 0;
}
