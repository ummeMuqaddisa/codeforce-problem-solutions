#include <iostream>
using namespace std;

int main()
{
  long long int a;
    cin>>a;

    int  arr1[a];
    int arr2[a];

    for(int i=0;i<a;i++)
    {
       cin>>arr1[i];
       cin>>arr2[i];
    }
    int i=0;
    int j=0;

    int count=0;
    int max=0;
    while(j<a)
    {
        count=count+ arr2[j]-arr1[i];

        i++;
        j++;

        if(count>max)
        {
            max=count;
        }
    }
    cout<<max;
}
