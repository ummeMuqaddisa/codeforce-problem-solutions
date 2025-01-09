#include <iostream>
using namespace std;

int main()
{
    int juice;
    cin>>juice;
    float sum=0;

    for(int i=0;i<juice;i++)
    {
        int a;
        cin>>a;

        sum=sum+a;
    }

    cout<<sum/juice;
}
