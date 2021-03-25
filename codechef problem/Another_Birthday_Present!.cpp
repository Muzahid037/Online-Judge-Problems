#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool cmp(ll x,ll y)
{
    return x>y;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,x;
        cin>>n>>k;
        vector<ll>vt;
        for(ll i=0; i<n; i++)
        {
            cin>>x;
            vt.push_back(x);
        }
        ll flag=0;
        for(ll i=0; i<n-k; i++)
        {
            vector<ll>tmp;
            for(ll j=i; j<i+k+1; j++)
            {
                tmp.push_back(vt[j]);
                cout<<vt[j]<<" ";
            }
            cout<<endl;
            //cout<<is_sorted(tmp.begin(),tmp.end(),cmp)<<" "<<is_sorted(tmp.begin(),tmp.end())<<endl;
            if((is_sorted(tmp.begin(),tmp.end(),cmp))==false && (is_sorted(tmp.begin(),tmp.end()))==false)
            {
                flag=1;
                //break;
            }
        }
        if(flag==1)
        {
            cout<<"no"<<endl;
        }
        else
        {
            cout<<"yes"<<endl;
        }
    }
    return 0;
}


