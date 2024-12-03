#include <iostream>
using namespace std;

int main()
{
    int arr[5][5];
    int a;
    int b;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
           cin>>arr[i][j];
        }
    }


    int count=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i][j]==1)
            {
                a=i;
                b=j;
            }
        }
    }

    while(a!=2 || b!=2)
    {
        if (a>2)
        {
           a--;
           count++;
        }
        else if(a<2)
        {
            a++;
            count++;
        }
        else if(b>2)
        {
            b--;
            count++;
        }
        else if(b<2)
        {
            b++;
            count++;
        }

    }
    cout<<endl;
    cout<<count;





}

