#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int up=0;
    int low=0;
     for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            low++;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            up++;
        }
    }
    //cout<<up<<endl;
    //cout<<low<<endl;

    if(low>=up)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;
            }

        }
    }

    else if(low<up)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]=s[i]-32;
            }

        }
    }


    cout<<s;


}
