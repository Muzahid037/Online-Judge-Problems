#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


ll facts(ll n,ll k,ll stp)
{
    if(n==stp)
    {
        return stp;
    }
    return n*facts(n-k,k,stp);
}


int main()
{

    ll n;
    string s;
    cin>>n>>s;
    ll k=s.size();

    ll x=n%k;

    if(x==0)
    {
        cout<<facts(n,k,k)<<endl;
    }
    else
    {
        cout<<facts(n,k,x)<<endl;
    }


    return 0;
}
