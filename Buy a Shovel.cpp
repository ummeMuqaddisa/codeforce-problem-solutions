#include <iostream>
using namespace std;

int main()
{
    int shovelPrice;
    cin>>shovelPrice;
    int rValue;
    cin>>rValue;


int i;
    for(i=1;i<10;i++)
    {
        if(shovelPrice*i%10==0 || shovelPrice*i%10==rValue)
        {

            break;
        }
            }

cout<<i;
}
