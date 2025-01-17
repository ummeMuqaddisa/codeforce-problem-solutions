#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;

    int arr1[a];
    int arr2[a];

    for(int i=0;i<a;i++)
    {
        cin>>arr1[i];
        cin>>arr2[i];
    }



    int i=0;
    int j=0;
    int moves=0;


    while(i<a && j<a)
    {

        if(arr1[i]%arr2[j]!=0)
        {
           moves++;
           arr1[i]=arr1[i]+1;
        }
        else if(arr1[i]%arr2[j]==0)
        {
            cout<< moves <<endl;
            moves=0;

            i++;
            j++;

        }
    }

}
