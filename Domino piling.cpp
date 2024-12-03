#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cin>>a >>b;

    int arr[a];

    for(int i=0; i<a; i++)
    {
        int x;
        cin>>x;
        arr[i]=x;
    }

    int c=arr[b-1];
    int count=0;

    for(int i=0; i<a; i++)
    {
        if(c<=arr[i] && arr[i]>0 )
        {
            count++;

        }

    }
    cout<<count;


}
