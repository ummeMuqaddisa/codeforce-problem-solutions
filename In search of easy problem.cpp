#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int arr[a];
    int count=0;
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<a;i++)
    {
        if(arr[i]==1)
        {
            count++;
        }

    }
    if(count==0)
    {
        cout<<"Easy";
    }
    else
    {
        cout<<"Hard";
    }

}
