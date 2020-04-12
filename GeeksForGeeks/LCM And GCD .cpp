#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int gcd(ll a,ll b)
{
    if(a==0)
    {
        return b;
    }
    else if(b==0)
    {
        return a;
    }
    else if(a==b)
    {
        return a;
    }
    else if(a>b)
    {
        return gcd(a-b,b);
    }
    else
    {
        return gcd(a,b-a);
    }
}
int gcdEuclidean(ll a,ll b)
{
    if(b>a)
    {
        swap(a,b);
    }
    if(a%b==0)
    {
        return b;
    }
    else
    {
        return gcdEuclidean(b,a%b);
    }
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll gcdAns=gcd(a,b);
        ll lcmAns=(a*b)/gcdAns;
        cout<<lcmAns<<" "<<gcdAns<<endl;
    }
    return 0;
}
