#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(int x,int y)
{
    if(x%y==0)
    {
        return y;
    }
    else
    {
        return gcd(y,x%y);
    }
}
int main()
{
    ll n;
    cin>>n;
    getchar();
    while(n--)
    {
        ll num[105];

        string s;
        getline(cin,s);

        istringstream ss(s);

        ll idx=0;
        while(ss>>num[idx])
        {
            idx++;
        }

        ll ans=0;
        for(ll i=0; i<idx-1; i++)
        {
            for(ll j=i+1; j<idx; j++)
            {
                ll z=gcd(num[i],num[j]);
                ans=max(ans,z);
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
