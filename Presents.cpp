#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;

    int arr[a];

    for(int i=1;i<=a;i++)
    {

        cin>>arr[i];
    }

     int i=1;
    while(i<=a)
    {

      for(int j=1;j<=a;j++)
    {
        if(i==arr[j])
        {
            cout<<j<<" ";
            i++;
        }
    }
    }



}
