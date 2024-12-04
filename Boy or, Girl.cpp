#include <iostream>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int count=0;

    for(int i=0;i<a.length();i++)
    {
        for(int j=i+1;j<a.length();j++)
        {

             if(a[i]==a[j])
            {
                count--;
                break;
            }

        }
        count++;
    }
    if((count%2==0))
    {
        cout<<"CHAT WITH HER!";

    }
    else{
        cout<<"IGNORE HIM!";

    }

}
