#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t;
    cin>>t;

    string s;
    cin>>s;
for(int j=0;j<t;j++){

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='B' && s[i+1]=='G')
        {
            swap(s[i],s[i+1]);
            i++;
        }

    }
}
    cout<<s;


}
