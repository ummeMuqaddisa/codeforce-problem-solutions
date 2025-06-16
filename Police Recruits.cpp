#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;

    int arr[a];

    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }

int count=0;
int available=0;

    for(int i=0;i<a;i++)
    {
        if(arr[i]>0)

        {
            available=available+arr[i];
        }
        else if(arr[i]<0)
        {
            if(available>0)
            {
                available--;
            }
            else
            {
                count++;
            }
        }
    }
    cout<< count;
}
