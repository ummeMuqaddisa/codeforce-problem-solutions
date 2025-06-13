#include <iostream>
using namespace std;

int main()
{
    long long a;
    cin>>a;

    long long arr[a];

    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
    }


    int max=arr[0];
    int min=arr[0];
    int maxIndex=0;
    int  minIndex=0;



   for(int i=0;i<a;i++)
   {
       if(arr[i]>max)
       {
           max=arr[i];
           maxIndex=i;
       }
   }

   for(int i=0;i<a;i++)
   {
       if(arr[i]<=min)
       {
           min=arr[i];
             minIndex=i;
       }
   }



   int moves= maxIndex+(a-1-minIndex);

   if( maxIndex>minIndex)
   {
       moves--;
   }

   cout<<moves;

}
