#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream v("file1.txt");
    if(v.is_open())
    {
        v<<"my name is kunj";
        v<<"\ni am living in pasodara-patiya";
        v<<"\ni like to eat vegetables only";
        v<<"\ni like to speak english";
        v.close();
    }
    else
    {
        cout<<"file can't open";
    }
    return 0;
}