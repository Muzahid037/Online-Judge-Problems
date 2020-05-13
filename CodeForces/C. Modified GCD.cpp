#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b;
    cin>>a>>b;
    ll gc=__gcd(a,b);
    ll limit=sqrt(gc)+1;
    vector<ll>factors;
    for(ll i=1; i<=limit; i++)
    {
        if(gc%i==0)
        {
            factors.push_back(i);
            factors.push_back(gc/i);
        }
    }
    sort(factors.begin(),factors.end());
    ll sz=factors.size();
    ll n;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        ll l,h,m;
        cin>>l>>h;
        ll low=0,high=sz-1,mid,ans=-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            //cout<<low<<" "<<high<<" "<<mid<<endl;
            if(factors[mid]>=l && factors[mid]<=h)
            {
                ans=mid;
                low=mid+1;
            }
            else if(factors[mid]<l) low=mid+1;
            else if(factors[mid]>h) high=mid-1;
        }
        if(ans>=sz || ans<0) cout<<"-1"<<endl;
        else cout<<factors[ans]<<endl;
    }
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b)
{
    if(a<b)swap(a,b);
    if(b==0)return a;
    else return gcd(b,a%b);
}
int main()
{
    ll a,b;
    cin>>a>>b;
    ll gc=gcd(a,b);
    //cout<<gc<<endl;
    set<ll>factors;
    for(ll i=1; i<=min(gc,100000000LL); i++)
    {
        if(a%i==0 && b%i==0)
        {
            factors.insert(i);
            ll x = a /  i;
            ll y = b / i;
            //cout<<i<<" "<<x<<" "<<y<<endl;

            if(a % x == 0 && b % x == 0)
            {
                factors.insert(x);
            }
            if(a % y == 0 && b % y == 0)
            {
                factors.insert(y);
            }
        }
    }
    //for(set<ll>::iterator it=factors.begin(); it!=factors.end(); it++) cout<<*it<<" ";
    vector<ll>vt;
    for(set<ll>::iterator it=factors.begin(); it!=factors.end(); it++) vt.push_back(*it);
    ll szvt=vt.size();
    //cout<<szFactors<<endl;
    ll n;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        ll l,h,m;
        cin>>l>>h;
        ll low=0,high=szvt-1,mid,ans=-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            //cout<<low<<" "<<high<<" "<<mid<<endl;
            if(vt[mid]>=l && vt[mid]<=h)
            {
                ans=mid;
                low=mid+1;
            }
            else if(vt[mid]<l)
            {
                low=mid+1;
            }
            else if(vt[mid]>h)
            {
                high=mid-1;
            }

        }
        if(ans>=szvt || ans<0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<vt[ans]<<endl;
        }
    }

    return 0;
}
*/
