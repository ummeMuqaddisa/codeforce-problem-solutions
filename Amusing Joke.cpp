#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string a,b,c;
    cin>>a>>b>>c;

    string combination=a+b;
    sort(combination.begin(),combination.end());
    sort (c.begin(),c.end());

    if(combination==c)
    {
        cout<<"YES";
    }
    else
    {
        cout<< "NO";
    }

}
