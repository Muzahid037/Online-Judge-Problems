#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(k==1)
        {
            cout<<n<<endl;
            continue;
        }
        else if(k>=n)
        {
            cout<<"1"<<endl;
        }
        else
        {
            ll lim=sqrt(n)+1;
            ll mx=-1;
            for(ll i=2; i<=lim; i++)
            {
                if(n%i==0)
                {
                    if(i>mx && i<=k) mx=i;
                    ll d=n/i;
                    if(d>mx && d<=k) mx=d;
                }
            }
            //cout<<mx<<endl;
            if(mx==-1)
            {
                cout<<n<<endl;
            }
            else
            {
                cout<<n/mx<<endl;
            }
        }
    }
    return 0;
}

