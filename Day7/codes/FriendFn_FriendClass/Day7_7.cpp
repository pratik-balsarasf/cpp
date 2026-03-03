#include<iostream> 
using namespace std; 
class A 
{
    public: 
    void add( void); 
};
class B 
{
    private: 
    int num1; 
    int num2; 
    public: 
    B( void ) : num1(10) , num2(20)
    {   }
    friend void A :: add( ); 
}; 
void A :: add( )
{
    B obj; 
    int res = obj.num1 + obj.num2; 
    cout<<"res : "<<res;  
}
int main()
{
    A obj; 
    obj.add( ); 
    return 0;
}
