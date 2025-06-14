#include <iostream>
using  namespace std;
int main()
{
    int teams;
    cin>>teams;

    int arrHome[teams];
    int arrGuest[teams];

    int count=0;

    for(int i=0; i<teams;i++)

    {
        cin>>arrHome[i];
        cin>>arrGuest[i];
    }
    for(int i=0;i<teams; i++)
    {
        for(int j=0;j<teams;j++)
        {
            if(arrHome[i]==arrGuest[j])
            {
                count++;
            }
        }
    }
    cout<<count;
}
