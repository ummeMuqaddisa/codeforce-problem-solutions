#include <iostream>
using namespace std;

int main()

{
    int a;
    cin>>a;
    int b;

    int c;
    int arr[4];
    int count=-1;


    while(count!=0)
    {
        a=a+1;
        b=a;
        int i=0;

        while(b>0)
        {

            c=b%10;
            arr[i]=c;
            b=b/10;
            i++;

        }
         count=0;
        for(int i=0; i<4; i++)
        {
            for(int j=i+1; j<4; j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
            }

        }

    }

    cout<<a;



}
