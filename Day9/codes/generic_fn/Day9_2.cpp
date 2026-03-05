#include<iostream> 
using namespace std; 
template<typename T> 
void swap_object(T *a , T *b)
{
    T temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
}

int main()
{
    int a = 10 , b = 20;
    swap_object<int>(&a,&b); 
    cout<<"a : "<<a<<endl; 
    cout<<"b : "<<b<<endl; 
    double x = 1.3 , y = 2.1; 
    swap_object(&x,&y); 
    cout<<"x : "<<x<<endl; 
    cout<<"y : "<<y<<endl; 
    return 0;
}
