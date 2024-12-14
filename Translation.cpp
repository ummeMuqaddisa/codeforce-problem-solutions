#include <iostream>
using namespace std;

int main()
{
    string a;
    cin>>a;

    string b;
    cin>>b;
    int j=0;


    int count=0;

    for(int i=a.length()-1;i>=0;i--)
    {
        if(a[i]==b[j])
        {
            count++;

        }
        j++;


    }

if(count==a.length() && count==b.length())
{
    cout<<"YES";
}
else
{
    cout<<"NO";
}
}
