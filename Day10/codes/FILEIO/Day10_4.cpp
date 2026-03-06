#include<iostream> 
#include<fstream>
using namespace std; 
void write( void )
{
    ofstream fout("file1.txt"); 
    fout<<"Hello world"; 
    fout.close( ); 
}; 
void read( void )
{
    ifstream fin("file1.txt"); 
    string line; 
    while(getline(fin , line))
    {
        cout<<line<<endl; 
    }
    fin.close( ); 
}
int main()
{
    //write( ); 
    read( ); 
    return 0;
}
