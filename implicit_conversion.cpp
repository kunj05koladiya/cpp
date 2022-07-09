#include<iostream>
using namespace std;
int main()
{
    int x=10;
    char y='a';

    x=x+y;
    y=x+y;
    float k=x+0.2;
  
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    cout<<"k: "<<k<<endl;
    return 0;
}