///"--------------------Bismillahir Rahmanir Rahim"-----------------------///
#include<bits/stdc++.h>
using namespace std;
#define Boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
void solve()
{
    int n,f=0;
    cin>>n;
    string s;
    cin>>s;
    int ans[n+5]={0};
    vector<int>zeroIndex,oneIndex;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0') zeroIndex.pb(i+1);
        else oneIndex.pb(i+1);
    }
    int subNum=1;
    while(!zeroIndex.empty() && !oneIndex.empty())
    {
        int zeroNakiOne=0;; // z is first, !z is 2nd
        if(zeroIndex.front() < oneIndex.front())
        {
            zeroNakiOne = 0;
        }
        else
        {
            zeroNakiOne = 1;
        }
        int cur = -1;
        while(1)
        {
            if(zeroNakiOne==1)
            {
                if(lower_bound(oneIndex.begin(),oneIndex.end(),cur)==oneIndex.end()) break;
                int tmp=*(lower_bound(oneIndex.begin(),oneIndex.end(),cur));
                cur=tmp;
                oneIndex.erase((lower_bound(oneIndex.begin(),oneIndex.end(),cur)));
                ans[cur]=subNum;
                zeroNakiOne=0;
            }
            else
            {
                if(lower_bound(zeroIndex.begin(),zeroIndex.end(),cur)==zeroIndex.end()) break;
                int tmp=*(lower_bound(zeroIndex.begin(),zeroIndex.end(),cur));
                cur=tmp;
                zeroIndex.erase((lower_bound(oneIndex.begin(),oneIndex.end(),cur)));
                ans[cur]=subNum;
                zeroNakiOne=1;
            }
        }
        subNum++;
    }
    while(!zeroIndex.empty())
    {
        ans[zeroIndex.front()]=subNum;
        zeroIndex.erase(zeroIndex.begin());
        subNum++;
    }
    while(!oneIndex.empty())
    {
        ans[oneIndex.front()]=subNum;
        oneIndex.erase(oneIndex.begin());
        subNum++;
    }
    cout<<subNum-1<<endl;
    for(int i=1; i<=n; i++)
    {
        if(i==n) cout<<ans[i]<<endl;
        else cout<<ans[i]<<" ";
    }
}
int main()
{
    Boost();
    int t;
    t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}


/*
int ft0=zeroIndex.front();
        int ft1=oneIndex.front();
        ///cout<<ft0<<" "<<ft1<<endl;
        if(ft0<ft1)
        {
            ans[ft0]=subNum;
            zeroIndex.erase(zeroIndex.begin());
            zeroNakiOne=0;
        }
        else
        {
            ans[ft1]=subNum;
            oneIndex.erase(oneIndex.begin());
            zeroNakiOne=1;
        }
*/
