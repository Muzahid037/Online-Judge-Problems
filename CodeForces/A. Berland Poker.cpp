#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int eachPlayerCards=n/k;
        if(m>eachPlayerCards)
        {
            int winnerJokerPaise=eachPlayerCards;
            int bakiJoker=m-winnerJokerPaise;
            int bakiPlayer=k-1;
            int bakidrMaxiJoker=ceil((double)bakiJoker/(double)bakiPlayer);
            cout<<abs(winnerJokerPaise-bakidrMaxiJoker)<<endl;
        }
        else cout<<m<<endl;
    }
    return  0;
}
