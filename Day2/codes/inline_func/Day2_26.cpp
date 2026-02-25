#include<iostream> 
using namespace std; 
inline int max(int x , int y)
{
    return x > y ? x : y; 
}
int main()
{
    int a = 10 , b = 20; 
    int maxNum = max(a,b);
    //          x > y ? x : y; 
    cout<<maxNum<<endl;  
    return 0;
}
