#include <iostream>
using namespace std;

int main()
{

    long long c;
    cin>>c;
    int r;
     int moves;


    long long arr1[c], arr2[c];


    for(int i = 0; i < c; i++) {
        cin >> arr1[i]>>arr2[i];
    }






     for(int i=0;i<c; i++)
     {

         long long a=arr1[i];
         long long b=arr2[i];

         r=a%b;

        moves=(b-r)%b;

     cout<<moves<<endl;
     }


}
