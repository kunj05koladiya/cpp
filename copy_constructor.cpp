#include<iostream>
using namespace std;
class percentage
{
    float per;
    public:
    percentage(float n)
    {
        per=n;
        cout<<"\npercentage:"<<per;
    }
    percentage(percentage & new_per)    //<---copy constructor
    {
        per=new_per.per;
        cout<<"\npercentage:"<<per;
    }
};
int main()
{
    percentage kunj(89.43);
    percentage divyesh(kunj);
    return 0;
}