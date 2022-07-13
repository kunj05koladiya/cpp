#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name1,name2,name3;
    cout<<"\n enter first name:";
    getline(cin,name1);
    cout<<"\n enter second name:";
    getline(cin,name2);
    cout<<"\n enter third name:";
    getline(cin,name3);

    cout<<"\n\nhello.."<<name1;
    cout<<"\nhiiii.."<<name2;
    cout<<"\nwhat's up.."<<name3;
    return 0;
}