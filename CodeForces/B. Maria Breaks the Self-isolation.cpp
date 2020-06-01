#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,now=1,cnt=0;;
        cin>>n;
        ll a[n+10];
        for(ll i=0; i<n; i++) cin>>a[i];
        sort(a,a+n);
        for(ll i=0; i<n; i++)
        {
            if(a[i]>now+cnt)
            {
                cnt++;
                continue;
            }
            if(a[i]<=now+cnt)
            {
                now+=cnt;
                now++;
                cnt=0;
            }
            else break;
        }
        cout<<now<<endl;
    }
    return  0;
}
