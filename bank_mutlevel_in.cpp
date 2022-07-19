#include<iostream>
using namespace std;
class bank
{
    protected:
    int bal=0,dep,with,accno;
    public:
    void acc_no(int num)
    {
        accno=num;
    }
    int getacc_no()
    {
        return accno;
    }
};
class saving_account:public bank
{
    protected:
    public:
    void acc_no1()
    {
        cout<<"\n YOUR A/C NO:"<<accno;
    }
};
class person:public saving_account
{
    public:
    person(int amt)
    {
        bal=amt;
    }
    void deposit(int dep)
    {
        bal+=dep;
    }
    void withdraw(int with)
    {
      
        bal-=with;
    }
    int showbal()
    {
        return bal;
    }
};
int main()
{
    int n,dep,with,accno;
    person ajay(10000);
    ajay.acc_no(192);
    ajay.acc_no1();
  
    cout<<"\n\n _______if you enter deposit amt  :: enter 1________";
    cout<<"\n _______if you enter withdraw amt :: enter 2________";
    cout<<"\n _______if you show your balance  :: enter 9________";
    cout<<"\n ===================================================";
    cout<<"\n -------if you want to exit       :: enter 0--------";
    do
    {
    cout<<"\n enter n:";
    cin>>n;
    switch(n)
    {
        case 0:

            break;

        case 1:
            cout<<"\n deposit amt:";
            cin>>dep;
            ajay.deposit(dep);
            break;

        case 2:
            cout<<"\n withdraw  amt:";
            cin>>with;
            ajay.withdraw(with);
            break;

        case 9:
            cout<<"\n balance is:"<< ajay.showbal();
            break;

        default:
            cout<<"\n wrong choise";
            break;
    }
    } while (n!=0);
}