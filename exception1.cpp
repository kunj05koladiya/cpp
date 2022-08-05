#include<iostream>
using namespace std;                        //EXCEPTION HANDING
double Zerodivision(int x,int y)
{
    if(y==0)
    {
        throw"division by zero!";
    }
    return (x/y);
} 
int main()
{
    int a=10,b=0,c=0;
    try
    {
        c=Zerodivision(a,b);
        cout<<c<<endl;
    }
    catch(const char* message)
    {
        cerr<<message<<endl;
    }
    return 0;
}