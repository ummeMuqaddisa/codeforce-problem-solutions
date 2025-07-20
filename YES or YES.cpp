#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;

    string arr[a];

    //Taking inputs
    for (int i = 0; i < a; ++i)
    {
        cin >> arr[i];
    }

    //Checking each string
    for(int i=0; i<a; i++)
    {
        string s=arr[i];


        //Converting to uppercase
        for(int j=0; j<s.size(); j++)
        {
            if (s[j] >= 'a' && s[j] <= 'z')
            {
                s[j] = s[j] - ('a' - 'A');
                //s[j] = toupper(s[j]);

            }
        }
        if(s=="YES")
        {
            cout<<"YES"<<endl ;
        }
        else
        {
            cout<<"NO"<<endl ;
        }


    }
}
