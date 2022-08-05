#include<iostream>
#include<string>
using namespace std;
class savingacc
{
    int dep,with;
    int bal=5000;
    string name;
    int accno;
    public:
    void setname(string n)
    {
        name=n;
    }
    void setaccno(int a)
    {
        accno=a;
    }
    string getname()
    {
        return name;
    }
    int getaccno()
    {
        return accno;
    }
    void setdeposit(int d)
    {
        dep=d;
    }
    void setbalance(int b)
    {
        bal=b;
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
    void display()
    {
        cout<<"\n balance is:"<<bal;
    }
};
class currentacc
{
    int dep,bal=9000;
    string name;
    int accno;
    public:
     void setname(string n)
    {
        name=n;
    }
    void setaccno(int a)
    {
        accno=a;
    }
    string getname()
    {
        return name;
    }
    int getaccno()
    {
        return accno;
    }
    void setdeposit(int d)
    {
        dep=d;
    }
    void setbalance(int b)
    {
        bal=b;
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
    void display()
    {
        cout<<"balance is:"<<bal;
    }
};
class person:public savingacc,public currentacc
{
    int bal;
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
    int choice;
    cout<<"\nenter the type of a/c:";
    cout<<"\n1.current";
    cout<<"\n2.saving";

    cout<<"\nenter choice:";
    cin>>choice;

    switch(choice)
    {
        case 1:
        {
            currentacc v;
            string h;
            cout<<"\nenter the name of the a/c holder:";
            cin>>h;
            v.setname(h);

            int k,dep,with;
            cout<<"a/c no:";
            cin>>k;
            v.setaccno(k);
            cout<<"\n\na/c name:"<<v.getname();
            cout<<"\na/c no:"<<v.getaccno();
            cout<<"\n\nbalance:"<<v.showbal();
            do
            {
                cout<<"\n\n1.deposit:";
                cout<<"\n2.withdraw:";
                cout<<"\n3.exit";
                cout<<"\n enter choice:";
                cin>>choice;
                switch(choice)
                {
                    case 1:
                    cout<<"\nenter deposit:";
                    cin>>dep;
                    v.deposit(dep);
                    v.display();
                    break;

                    case 2:
                    cout<<"\nenter withdraw amt:";
                    cin>>with;
                    v.withdraw(with);
                    v.display();
                    break;
                }         
                      
            }while(choice!=3);
            break;
        }
        case 2:
        {
            savingacc s;
            string h;
            cout<<"\nenter the name of the a/c holder:";
            cin>>h;
            s.setname(h);

            int k,dep,with;
            cout<<"a/c no:";
            cin>>k;
            s.setaccno(k);
            cout<<"\n\na/c name:"<<s.getname();
            cout<<"\na/c no:"<<s.getaccno();
            cout<<"\n\nbalance:"<<s.showbal();
            do
            {
                cout<<"\n\n1.deposit:";
                cout<<"\n2.withdraw:";
                cout<<"\n3.exit";
                cout<<"\n enter choice:";
                cin>>choice;
                switch(choice)
                {
                    case 1:
                    cout<<"\nenter deposit amt:";
                    cin>>dep;
                    s.deposit(dep);
                    s.display();
                    break;

                    case 2:
                    cout<<"\nenter withdraw amt:";
                    cin>>with;
                    s.withdraw(with);
                    s.display();
                    break;
                }                
            }while(choice!=3);
            break;
        }
    }

}