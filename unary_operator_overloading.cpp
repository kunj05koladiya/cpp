#include<iostream>
using namespace std;
class loc
{
    int longitude,latitude;
    public:
    loc()
    {
        longitude=0;
        latitude=0;
    }
    loc(int lg,int lt)
    {
        longitude=lg;
        latitude=lt;
    }
    void showdata()
    {
        cout<<"\nlongitude:"<<longitude;
        cout<<"\nlatitude:"<<latitude;
    }
    loc operator++();
};
loc loc :: operator++()
{
    loc temp;
    temp.longitude=longitude++;
    temp.latitude=latitude++;
    return temp;
}
int main()
{
    loc ob1(10,20),ob3;
    ob1.showdata();
    ++ob1;
    ob3=ob1;
    ob3.showdata();
    return 0;
}