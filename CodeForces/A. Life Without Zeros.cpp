///----Bismillahir Rahmanir Rahim----///
#include<bits/stdc++.h>
using namespace std;
#define Boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

/*
ll removeZero(ll x)
{
    vector<ll>num;
    ll sz,res=0;
    while(x>0)
    {
        if(x%10!=0) num.push_back(x%10);
        x/=10;
    }
    sz=num.size();
    for(ll i=sz-1; i>=0; i--)
    {
        if(i==sz-1) res+=num[i];
        else res=(res*10)+num[i];
    }
    num.clear();
    return res;
}
*/

ll rz(ll x)
{
    ll res=0,mul=1;
    while(x!=0)
    {
        ll rem=x%10;
        if(rem!=0)
        {
            res+=(rem*mul);
            mul*=10;
        }
        x/=10;
    }
    return res;
}
int main()
{
    Boost();
    ll a,b,c;
    cin>>a>>b;
    c=a+b;
    /*
   if(removeZero(a)+removeZero(b)==removeZero(c)) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
    */
   if(rz(a)+rz(b)==rz(c)) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
    return 0;
}
