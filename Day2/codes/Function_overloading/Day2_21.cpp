#include<iostream> 
// if i want to give same name to the function and if number of 
// parameters are same then order of parameters must be different 

using namespace std; 

void add(int num1 , float num2)
{
    float result = num1 + num2; 
    cout<<"Result : "<<result<<endl; 
}
void add(float num1 , int num2)
{
    float result = num1 + num2; 
    cout<<"Result : "<<result<<endl; 
}
int main()
{
    ::add(10,20.1f); 
    ::add(10.1f,20); 
    return 0;
}
