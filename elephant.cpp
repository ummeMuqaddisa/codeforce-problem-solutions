#include <iostream>
using namespace std;

int main()
{

    int b;
    cin>>b;
    int arr[]={5,4,3,2,1};
    int a=b;
    int count=0;
    int i=0;
    while(a!=0)
    {
      if(arr[i]<=a)
      {
          a=a-arr[i];
          count++;
      }
      else
        i++;
    }
    cout<<count;
}
