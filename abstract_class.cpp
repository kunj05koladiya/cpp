#include<iostream>
using namespace std;
class Shape         //ABSTRACT CLASS...
{
    protected:
    int width,height;
    public:
    virtual int getarea()=0;        //<---ABSTRACT (PURE VIRTUAL FUNCTION)
    //fflush(stdin);
    void setwidth(int w)
    {
        width=w;
    }
    void setheight(int h)
    {
        height=h;
    }
};
class Rectangle:public Shape
{
    public:
    int getarea()
    {
        return(width*height)/2;
    }
};
class Triangle:public Shape
{
    public:
    int getarea()
    {
        return (width*height)/2;
    }
};
int main()
{
    Rectangle r;
    Triangle t;
    r.setwidth(10);
    r.setheight(20);
    cout<<"\n TOTAL RECTANGLE AREA:"<<r.getarea();

    t.setwidth(20);
    t.setheight(30);
    cout<<"\n TOTAL TRIANGLE AREA:"<<t.getarea();
    return 0;  
}