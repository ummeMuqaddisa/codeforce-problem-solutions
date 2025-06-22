#include <iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;

    int y;
    cin>>y;

    int partyGo=240-y;

    int solve=0;
    int count=0;

    for(int i=1;i<=x;i++)
    {
        solve=solve+i*5;

        if(solve>partyGo)
        {
            break;
        }

        count++;
    }

    cout<<count;
}
