#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int number_of_cards_on_the_table;
    cin>>number_of_cards_on_the_table;


    vector<int> cards(number_of_cards_on_the_table);


    for(int i=0; i<number_of_cards_on_the_table; i++)
    {
        cin>>cards[i];
    }
    // for(int i=0; i<number_of_cards_on_the_table; i++)
    // {
    //    cout<<cards[i];
    //}


    int left=0;
    int right=number_of_cards_on_the_table-1;

    int sereja_total=0;
    int dima_total=0;
    bool serejas_turn=true;

    for(int i=0; i<number_of_cards_on_the_table; i++)
    {

        int count=0;
        if(cards[left]<cards[right])
        {
            count=cards[right];
            right--;
        }
        else
        {
            count=cards[left];
            left++;
        }

        if(serejas_turn)
        {
            sereja_total= sereja_total+count;
        }
        else
        {
            dima_total=dima_total+count;
        }

        serejas_turn=!serejas_turn;
    }
    cout<<sereja_total<<" "<<dima_total;


}
