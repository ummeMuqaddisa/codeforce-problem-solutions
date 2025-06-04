#include <iostream>
using namespace std;

int main()
{
    int levels;
    cin>>levels;

    int a;
    cin>>a;

    int arr1[a];

    for(int i=0;i<a;i++)
    {
        cin>> arr1[i];
    }

    int b;
    cin>>b;

    int arr2[b];

        for(int i=0;i<b;i++)
    {
        cin>> arr2[i];
    }



int arr3[a+b];
int j=0;

    for(int i=0;i<a;i++)
     {
         if(arr1[i]>=1 && arr1[i]<=levels)

         {
            arr3[j++]=arr1[i];

         }
     }
     for(int i=0;i<b;i++)
     {
         if( arr2[i]>=1 && arr2[i]<=levels)
         {
             arr3[j++]= arr2[i];

         }
     }
int count=0;
for(int i=1; i<=levels;  i++)
{

     for(int extra=0;extra< j;extra++){
    if(arr3[extra]==i)
    {
       count++;
       break;
    }
     }


}
if(count==levels)
{
    cout<<"I become the guy.";
}
 else
 {
     cout<<"Oh, my keyboard!";
 }















}
