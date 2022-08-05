#include<iostream>
using namespace std;                    //STATIC
class Statcount
{
    static int stcount;
    public:
    void set_stcount (int n)
    {
        stcount=n;
    }
    void counter()
    {
        stcount++;
    }
    void get_stcount()
    {
        cout<<"\n"<<stcount;
    }
};
int Statcount::stcount=0;
int main()
{
    Statcount obj1,obj2,obj3;
    obj1.set_stcount(5);
    obj1. get_stcount();
    obj2.counter();
    obj2.counter();
    obj2.counter();
    obj2.set_stcount(15);
    obj3.counter();
    obj3.counter();
    obj3.counter();
    obj3.get_stcount(); 
}