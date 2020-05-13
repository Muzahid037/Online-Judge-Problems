#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mx=1000000007;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll b[n+5];
    ll maxPos=0,minPos=mx,maxPosCount=1,minPosCount=1;
    for(ll i=0; i<n; i++)
    {
        cin>>b[i];
        if(b[i]==maxPos) maxPosCount++;
        if(b[i]==minPos) minPosCount++;
        if(b[i]>maxPos)
        {
            maxPos=b[i];
            maxPosCount=1;
        }
        if(b[i]<minPos)
        {
            minPos=b[i];
            minPosCount=1;
        }
    }
    ll diff=maxPos-minPos;
    if(diff==0) cout<<diff<<" "<<(n*(n-1))/2<<endl;
    else cout<<diff<<" "<<maxPosCount*minPosCount<<endl;
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mx=1000000007;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll b[n+5];
    ll maxPos=0,minPos=mx;
    for(ll i=0; i<n; i++)
    {
        cin>>b[i];
        maxPos=max(maxPos,b[i]);
        minPos=min(minPos,b[i]);
    }
    ll maxPosCount=0,minPosCount=0;
    for(ll i=0; i<n; i++)
    {
        if(b[i]==maxPos) maxPosCount++;
        if(b[i]==minPos) minPosCount++;
    }
    if(maxPosCount==n) cout<<maxPos-minPos<<" "<<(maxPosCount*(maxPosCount-1))/2<<endl;
    else cout<<maxPos-minPos<<" "<<maxPosCount*minPosCount<<endl;
    return 0;
}
*/
