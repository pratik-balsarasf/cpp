#include<typeinfo>
#include<iostream> 

using namespace std; 
class Base 
{
    public: 
    virtual ~Base()
    {   }
}; 
class Derived : public Base 
{

}; 
int main()
{
    Base *ptrBase = NULL; 
    cout<<"Type : "<<typeid(ptrBase).name()<<endl; 
    //cout<<"Type : "<<typeid(*ptrBase).name()<<endl;//std::bad_typeid ( throws exception ) 
    return 0;
}

int main1()
{
    Base *ptrBase = new Derived( ); // upcasting 
    //cout<<"Type : "<<typeid(ptrBase).name()<<endl; 
    cout<<"Type : "<<typeid(*ptrBase).name()<<endl; 
    return 0;
}


