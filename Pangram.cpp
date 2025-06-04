#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    cin.ignore();





    // string p;
    // cin>>p;


    string s;
    getline(cin,s);


    for(int i=0; i<a; i++)
    {
        s[i]=tolower(s[i]);
    }

//cout<<p;
int count=0;
for(char x='a';x<='z';x++)
{




    for(int i=0;i<a;i++)
    {
        if(s[i]==x)
        {
            count++;
            break;
        }
    }
}





    if(count==26)
    {
        cout<<"yes";
    }

 else
 {
     cout<<"no";
 }
}
