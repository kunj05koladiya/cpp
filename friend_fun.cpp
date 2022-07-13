#include<iostream>
using namespace std;
class box
{
private:
    int length;
public:
    box():length(0)
    {
    }
    friend int printlength(box);
};
int printlength(box v)
{
    v.length+=100;
    return v.length;
}
int main()
{
    box v;
    cout<<"length of box:"<<printlength(v)<<endl;
    return 0;
}