#include<iostream>
using namespace std;
class result
{
    int m[10],s[10],g[10],i;
    float total[10],per[10];
public:
    void enterdata()
    {
        cout<<"\n enter m[i]:";
        cin>>m[i];
        cout<<"\n enter s[i]:";
        cin>>s[i];
        cout<<"\n enter g[i]:";
        cin>>g[i];
    }
    void entertp()
    {
        total[i]=m[i]+s[i]+g[i];
        per[i]=total[i]/3;
    }
    void printdata()
    {
        cout<<"\n m[i]:"<<m[i];
        cout<<"\n s[i]:"<<s[i];
        cout<<"\n g[i]:"<<g[i];
        cout<<"\n total[i]:"<<total[i];
        cout<<"\t per[i]:"<<per[i];
    }
};
int main()
{
    int i;
    result v[i];
    for(i=1;i<=3;i++)
    {
        v[i].enterdata();
        v[i].entertp();
    }
    for(i=1;i<=3;i++)
    {
        v[i].printdata();
    }
}