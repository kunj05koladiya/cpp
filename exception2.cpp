#include<iostream>
using namespace std;                        //EXCEPTION HANDING
int main()
{
    int sn,s,a,e,b,sp,ec,g,total,err=0;
    float per;
    string name;
    do
    {
        try
        {
            cout<<"ENTER STUDENT NAME:";
            getline(cin,name);
            cout<<"ENTER SEAT NO.";
            cin>>sn;

            cout<<"enter statics mark:"<<endl;
            cin>>s;
            if(!(s>=0&&s<=100))
            {
                throw(s);
            }
            cout<<"enter accounts mark:"<<endl;
            cin>>a;
            if(!(a>=0&&a<=100))
            {
                throw(a);
            }
            cout<<"enter english mark:"<<endl;
            cin>>e;
            if(!(e>=0&&e<=100))
            {
                throw(e);
            }
            cout<<"enter economics mark:"<<endl;
            cin>>ec;
            if(!(ec>=0&&ec<=100))
            {
                throw(ec);
            }
            cout<<"enter b.a. mark:"<<endl;
            cin>>b;
            if(!(b>=0&&b<=100))
            {
                throw(b);
            }
            cout<<"enter s.p&c.c. mark:"<<endl;
            cin>>sp;
            if(!(sp>=0&&sp<=100))
            {
                throw(sp);
            }
            cout<<"enter gujarati mark:"<<endl;
            cin>>g;
            if(!(g>=0&&g<=100))
            {
                throw(g);
            }
            total=s+a+e+b+sp+ec+g;
            per=(total*100)/700;
            
            
            cout<<"\n\n**********************************************";
            cout<<"\n-------------------RESULT---------------------";
            cout<<"\n==============================================";
            cout<<"\nName:"<<name;
            cout<<"\tSeat No:"<<sn;
            cout<<"\n----------------------------------------------";
            cout<<"\nGUJARATI    : "<<g;
            cout<<"\nENGLISH     : "<<e;
            cout<<"\nECONOMICS   : "<<ec;
            cout<<"\nB.A         : "<<b;
            cout<<"\nSTAT        : "<<s;
            cout<<"\nA/C         : "<<a;
            cout<<"\nS.P & C.C   : "<<sp;
            cout<<"\n--------------------------------------------";
            cout<<"\nTotal Marks:"<<total;
            cout<<"\nPercentage:"<<per;
            cout<<"\n********************************************";
            err=0;
        }
        catch(int e)
        {
            cout<<"INVALID MARKS!"<<endl;
            err=1;
        }
    }while(err);
    return 0;
}