#include <iostream>
using namespace std;

int main()
{
    int a;//3
    cin>>a;

    int b;//17
    cin>>b;

    int c;//4
    cin>>c;


   int sum=0;;

   for(int i=1;i<=c;i++)
   {
      sum=sum+(i*a);
   }

   if(sum>b)
   {
   int borrow=sum-b;
    cout<<borrow;
   }
   else if(sum<=b)
   {
       cout<<'0';
   }



}
