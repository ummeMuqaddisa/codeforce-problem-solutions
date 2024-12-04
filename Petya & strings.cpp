#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    string s1;
    string s2;
    cin>> s1;
    for ( int i = 0; i < s1.length(); i++){
        if (islower(s1[i]))
             s1[i] = toupper(s1[i]);
    }
    cin>>s2;
    for ( int i = 0; i < s2.length(); i++){
        if (islower(s2[i]))
             s2[i] = toupper(s2[i]);
    }

    if(s1<s2)
    {
        cout<<"-1";
    }
    else if(s1>s2)
    {
        cout<<"1";
    }
    else
        cout<<"0";

}

