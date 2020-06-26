///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool oddDiv(ll x)
{
    ll tmp=x;
    while(tmp%2==0) tmp/=2;
    if(tmp>1) return true;
    else return false;
}
ll isPrime(ll x)
{
    ll res=-1;
    ll limit=sqrt(x)+1;
    for(ll i=2; i<=limit; i++)
    {
        if(x%i==0) return i;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1 || (n!=2 && oddDiv(n)==false))
        {
            cout<<"FastestFinger"<<endl;
            continue;
        }
        if(n==2 || n%2!=0 || n%4==0)
        {
            cout<<"Ashishgup"<<endl;
            continue;
        }
        if(isPrime(n/2)==-1) cout<<"FastestFinger"<<endl;
        else cout<<"Ashishgup"<<endl;
    }
    return 0;
}
