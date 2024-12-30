#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int arr1[a];
    int arr2[a];
    int count=0;

    for(int i=0;i<a;i++)
    {

        cin>>arr1[i];
        cin>>arr2[i];
    }




    for(int i=0;i<a;i++)
    {
        if(arr1[i]+2<=arr2[i])
        {
           count++;
        }

    }

    cout<<count;


}
