#include<iostream>
using namespace std;
int main()
{
    int contest;
    cin>>contest;

    int score[contest];
    for(int i=0;i<contest;i++)
    {
        cin>>score[i];
    }

    int max_score=score[0];
    int min_score=score[0];
    int count=0;

    for(int i=1;i<contest;i++)
    {
        if(max_score<score[i])
        {
            max_score=score[i];
            count++;
        }
        if(min_score>score[i])
        {
            min_score=score[i];
            count++;
        }
    }
    cout<<count;
}
