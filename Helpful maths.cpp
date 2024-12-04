#include <iostream>
using namespace std;

int main()
{
    string a;
    cin>>a;


    if(a.length()==1)
    {
        cout<<a<<endl;;
    }
    else
    {

        for(int i=0; i<a.length()-2; i++)
        {
            for(int j=i; j<a.length(); j++)
            {
                char temp;
                if(a[j]=='+')
                {
                    continue;
                }
                else if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;

                    //cout<<a[i]<< " "<<a[j]<<endl;
                }
            }
        }
        cout<<" "<<endl;
        cout<<a;


    }


}
