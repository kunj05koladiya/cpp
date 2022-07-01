#include<iostream>
using namespace std;
class example
{
    int m,n;
    public:
    void set_mn(int x,int y)
    {
        m=x;
        n=y;
    }
    void get_mn()
    {
        cout<<"\n m:"<<m;
        cout<<"\n n:"<<n;
    }
    example add(example e1,example e2)
    {
        example v;
        v.m=e1.m+e2.m;
        v.n=e1.n+e2.n;
        return v;
    }
};
int main()
{
    example e1,e2,e3;
    e1.set_mn(1,2);
    e2.set_mn(11,22);
    e3=e3.add(e1,e2);
    e3.get_mn();
}

