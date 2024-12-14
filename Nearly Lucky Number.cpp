#include <iostream>
using namespace std;

 int main()
 {
     long long int a;
     cin>>a;
     int b;

     int c=0;
     while(a>0)
     {
         b=a%10;

         if(b==4 || b==7 )
         {
             c++;
         }

         a=a/10;
     }
     if(c==4 || c==7)
     {
         cout<<"YES";
     }
     else
     {
         cout<<"NO";
     }


 }
