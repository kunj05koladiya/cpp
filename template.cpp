#include<iostream>
using namespace std;
template<class T>
void display(T a)
{
    cout<<"\ndispaly template:"<<a;
}
template<class A,class B>
void display(A a,B b)
{
    cout<<"dispaly template1:"
        <<a<<"\n"
        <<b<<"\n";
}
// void display(char a) 
// {
//     cout<<"\nexplicitly display:"<<a;
// }
int main()
{
    display(12.45);
    display(100);
    display('A');
    display('B',34.89);
    return 0;
}