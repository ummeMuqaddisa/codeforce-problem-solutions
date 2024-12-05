#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    string s;
    cin>>s;
    int count=0;

    for(int i=0; i<s.length(); i++)
    {

        if(s[i]==s[i+1])
        {
            count++;


        }


    }
    cout<<count;
}
