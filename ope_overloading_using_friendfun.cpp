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
    friend loc operator+(loc,loc);
};
loc operator+(loc ope1,loc ope2)
{
    loc temp;
    temp.longitude=ope1.longitude+ope2.longitude;
    temp.latitude=ope1.latitude+ope2.latitude;
    return temp;
}
int main()
{
    loc ob1(1,2),ob2(11,22),ob3;
    ob1.showdata();
    ob2.showdata();
    ob3=ob1+ob2;
    ob3.showdata();
    return 0;
}