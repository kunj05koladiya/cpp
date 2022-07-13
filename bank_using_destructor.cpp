#include<iostream>
using namespace std;
class bank
{
    int accno,bal;
    string name;
    public:
    bank(int accno,int bal,string name)
    {
        this->accno=accno;
        this->bal=bal;
        this->name=name;

    }
    ~bank()
    {
        cout<<"\n name is:"<<name;
        cout<<"\t account no:"<<accno;
        cout<<"\t current balance is:"<<bal;
    }
};
int main()
{
    bank a(100,1100,"KUNJ KOLADIYA"),b(101,10200,"HET PATEL");
    return 0;
}