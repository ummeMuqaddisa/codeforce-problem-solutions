#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    char arr[a];


    int countA=0;
    int countD=0;


    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<a;i++)
    {
        if(arr[i]=='A')
        {
            countA++;
        }
        else if(arr[i]=='D')
        {
            countD++;
        }
    }

    if(countA>countD)
    {
       cout<<"Anton";
    }
    else if(countA<countD)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
}
