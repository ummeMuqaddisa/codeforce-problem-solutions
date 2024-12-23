#include<iostream>
using namespace std;

int main()
{
   int x;
   cin>>x;

   int a;
   cin>>a;

   int arr[x];

   for(int i=0;i<x;i++)
   {
       cin>>arr[i];
   }

   int sum=0;
   for(int i=0;i<x;i++)
   {
       if(arr[i]>a)
       {
           sum=sum+2;
       }
       else if(arr[i]<=a)
        {
            sum=sum+1;
        }

}
cout<<sum;



}
