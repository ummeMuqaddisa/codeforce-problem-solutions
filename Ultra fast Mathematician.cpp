#include <iostream>
using namespace std;

int main()
{
    string a;
    cin>>a;
    string b;
    cin >>b;


    for(int i=0;i<a.length();i++)
    {
        if(a[i]!=b[i])
        {
            cout<<1;
        }
        else if(a[i]==b[i])
        {
            cout<<0;
        }
    }
}
