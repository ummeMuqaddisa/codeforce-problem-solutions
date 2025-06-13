#include <iostream>
using namespace std;

int main()
{
    string a;
    getline(cin,a);


    int count=0;
    for(char x='a'; x<='z'; x++)
    {
        for(int i=0; i<a.size(); i++)

        {
            if(a[i]==x)
            {
                count++;
                break;
            }
        }
    }
    cout<<count;
}
