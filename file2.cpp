#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string k;
    ifstream v("file1.txt");
    if(v.is_open())
    {
        while(getline(v,k))
        {
            cout<<k<<endl;
        }
        v.close();
    }
    else
    {
        cout<<"file can't open";
    }
    return 0;
}