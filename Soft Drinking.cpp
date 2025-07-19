#include <iostream>
using namespace std;

int main()
{
    int friends;
    cin>> friends;

    int bottle;
    cin>>bottle;

    int ml;
    cin>>ml;

    int lime;
    cin>>lime;

    int slice;
    cin>>slice;

    int salt;
    cin>>salt;

    int nl;
    cin>>nl;
    int np;
    cin>>np;

    int total_drink=(bottle* ml);


    int total_slice=lime*slice;
    int drink_toast=total_drink/nl;

    int toast=(total_drink/ friends);
    int limes_enough=(salt/np);

    int desired_toast=min(drink_toast,min( total_slice,limes_enough));
    int per_friend=desired_toast/friends;



    cout<<per_friend;





    }
