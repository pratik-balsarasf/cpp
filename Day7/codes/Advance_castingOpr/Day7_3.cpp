#include<iostream> 
using namespace std; 

class Test 
{
    private: 
    int num1; 
    public: 
    Test(void ) : num1(10)
    {   }
    void printRecord( void )
    {
        cout<<this->num1<<endl; 
    }
    // const classname * const this;
    // const Test * const this = &t1  
    void showRecord( void ) const 
    {
        //const Test * const ptr = this; 
        Test * const ptr = const_cast<Test*>(this);
        ptr->printRecord( ); // OK  
    }
}; 
int main()
{
    Test t1; 
    t1.showRecord( ); 
    return 0;
}
