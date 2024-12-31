#include <iostream>
using namespace   std;

int main()
{
    long long a;
    cin>>a;


    long long sum=0;

     if(a%2==0){
        sum=a/2;
    }
    else
        sum=-(a/2+1);

    cout<<sum;
}
