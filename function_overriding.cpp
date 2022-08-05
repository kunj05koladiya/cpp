#include<iostream>
using namespace std;        //RUN TIME POLYMORPHISM
class Base
{
    public:
    virtual void display()
    {
        cout<<"base class is invoked"<<endl;
    }
};
class Derived:public Base
{
    public:
    void display()
    {
        cout<<"derived class is invoked"<<endl;
    }
};
int main()
{
    Base *p,a;
    Derived b;
    p=&a;
    p->display();
    p=&b;
    p->display();
    
}