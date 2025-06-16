#include <iostream>
using  namespace std;

int main()
{
    int a;
    cin>>a;

    int arr1[a];
    int arr2[a];
    int arr3[a];

     for(int i=0;i<a;i++)
     {
         cin>>arr1[i];
         cin>>arr2[i];
         cin>>arr3[i];
     }

     for(int i=0;i<a; i++)
     {
         if((arr1[i]==arr2[i]+arr3[i]) || (arr2[i]==arr1[i]+arr3[i]) || (arr3[i]==arr1[i]+arr2[i]))
         {
             cout<<"YES"<< endl;
         }
         else
         {
             cout<< "NO"<<endl;
         }
     }


}
