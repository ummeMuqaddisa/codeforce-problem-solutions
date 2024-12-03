#include <iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int a=0;


    for(int i=0;i<x;i++)
    {
       string s;
       cin>>s;

       if(s=="X++" || s=="++X")
       {
           a=a+1;
       }
       else
       {
           a=a-1;
       }


    }
    cout<<a;



}

