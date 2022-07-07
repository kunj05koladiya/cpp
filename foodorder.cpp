#include<iostream>
using namespace std;
class foodorder
{
    int n,i;
    public:
    void menu();
    void  order();
};
void foodorder::menu()
{
    cout<<"\n_________BROWN DOSA_________";             cout<<"\t\t______BROWN DOSA_______";
    cout<<"\n----------------------------";             cout<<"\t\t-----------------------";
    cout<<"\n-------SOUTH INDIAN---------";             cout<<"\t\t------COLD DRINK-------";
    cout<<"\nNO.       MENU         PRICE";             cout<<"\t\tNO.      MENU     PRICE";
    cout<<"\n1     SIMPLE PAPER     40/-";              cout<<"\t\t10    BUTTER MILK  20/-";
    cout<<"\n2     BUTTER PAPER     60/-";              cout<<"\t\t11    COCA-COLA    25/-";
    cout<<"\n3     GARLIC PAPER     80/-";              cout<<"\t\t12    PEPSI        25/-";
    cout<<"\n4     MAISUR          100/-";              cout<<"\t\t13    THUMS-UP     25/-";
    cout<<"\n5     BUTTER MAISUR   120/-";              cout<<"\t\t-----------------------";
    cout<<"\n6     GOTALO          120/-";
    cout<<"\n7     JINI ROL        160/-";
    cout<<"\n8     PALAK ROL       170/-";
    cout<<"\n9     PIZZA DOSA      190/-";
    cout<<"\n----------------------------";

            cout<<"\n\n||--FOR CONFERMING ORDER PRESS 0--||";   
}
void foodorder::order()
{
    int qty,price,total=0,dis,gst,netamt;
    for(i=1;i<14;i++)
    {
        cout<<"\n\nenter n:";
        cin>>n;
        if(n!=0)
        {
        cout<<"\nenter qty:";
        cin>>qty;
        }
        if(n==1)
        {
            cout<<"\nyour choise is SIMPLE PAPER";
           
            price=qty*40;
            cout<<"\nprice is:"<<price;
        }
        else if(n==2)
        {
            cout<<"\nyour choise is BUTTER PAPER";
           
            price=qty*60;
            cout<<"\nprice is:"<<price;
        }
        else if(n==3)
        {
            cout<<"\nyour choise is GARLIC PAPER";
           
            price=qty*80;
            cout<<"\nprice is:"<<price;
        }
        else if(n==4)
        {
            cout<<"\nyour choise is MAISUR";
           
            price=qty*100;
            cout<<"\nprice is:"<<price;
        }
        else if(n==5)
        {
            cout<<"\nyour choise is BUTTER MAISUR";
           
            price=qty*120;
            cout<<"\nprice is:"<<price;
        }
        else if(n==6)
        {
            cout<<"\nyour choise is GOTALO";
           
            price=qty*120;
            cout<<"\nprice is:"<<price;
        }
        else if(n==7)
        {
            cout<<"\nyour choise is JINI ROL";
           
            price=qty*160;
            cout<<"\nprice is:"<<price;
        }
        else if(n==8)
        {
            cout<<"\nyour choise is PALAK ROL";
           
            price=qty*170;
            cout<<"\nprice is:"<<price;
        }
        else if(n==9)
        {
            cout<<"\nyour choise is PIZZA DOSA";
           
            price=qty*190;
            cout<<"\nprice is:"<<price;
        }
        else if(n==10)
        {
            cout<<"\nyour choise is BUTTER MILK";
           
            price=qty*20;
            cout<<"\nprice is:"<<price;
        }
        else if(n==11)
        {
            cout<<"\nyour choise is COCA-COLA";
           
            price=qty*25;
            cout<<"\nprice is:"<<price;
        }
        else if(n==12)
        {
            cout<<"\nyour choise is PEPSI";
           
            price=qty*25;
            cout<<"\nprice is:"<<price;
        }
        else if(n==13)
        {
            cout<<"\nyour choise is THUMS-UP";
           
            price=qty*25;
            cout<<"\nprice is:"<<price;
        }
        else if(n==0)
        {
            break;
        }
        else
        {
            cout<<"\n\n WRONG CHOISE";
        }
       total+=price; 
    }
    dis=(total*10)/100;
    gst=(total*18)/100;
    netamt=(total-dis)+gst;
    cout<<"\n\n ---------------------------";
    cout<<"\n TOTAL AMOUNT IS:"<<total;
    cout<<"\n DIS:"<<dis;
    cout<<"\n GST:"<<gst;
    cout<<"\n\n YOUR BILL IS:"<<netamt;
    cout<<"\n --||THANKS FOR VISITING||--";
    cout<<"\n ---------------------------";
}
    
int main()
{
    foodorder v;
    v.menu();
    v.order();
}