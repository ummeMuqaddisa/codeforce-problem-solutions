#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int count=0;

    for(int i=0;i<n;i++)
    {
       int c=0;
       for(int j=0;j<3;j++)
       {
           int a;
           cin>>a;
           if(a==1)
           {
              c++;
           }
       }
       if(c>=2)

       {
           count++;
       }
    }
    cout<<count;

}
