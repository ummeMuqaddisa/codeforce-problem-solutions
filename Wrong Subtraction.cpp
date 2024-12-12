#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;

    int c;
    cin>>c;


    for(int i=0;i<c;i++)
    {
        int b=a%10;

        if(b!=0)
        {
            a=a-1;
        }
        else
        {
            a=a/10;
        }
    }
    cout<<a;

}
