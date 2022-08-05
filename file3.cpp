#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char input[100];
    int err=0;
    
    ofstream v;
    v.open("file3.txt");
    cout<<"writing to a text file";
    cout<<"\nPLZ,ENTER YOUR NAME:";
    cin.getline(input,100);
    v<<input<<endl;
    cout<<"\nPLZ,ENTER YOUR CONTACT NO:";
    cin>>input;
    cin.ignore();
    v<<input<<endl;   
    v.close();

    ifstream s;
    string kj;
    s.open("file3.txt");
    cout<<"\n\nread a text file";
    while(getline(s,kj))
    {
        cout<<"\n"<<kj;
    }
    s.close();

    return 0;
}