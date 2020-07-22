///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n;
        vector<ll>a;
        for(ll i=0; i<n; i++)
        {
            cin>>x;
            a.pb(x);
        }
        ll r=n-1;
        while(r>0 && a[r-1]>=a[r]) r--;
        while(r>0 && a[r-1]<=a[r]) r--;
        cout<<r<<endl;
    }
    return 0;
}

