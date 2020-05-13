#include<bits/stdc++.h>
using namespace std;
struct ANS
{
    int a, b, c;
    ANS(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
};
vector<ANS> V;
int cnt[100];
int main()
{
    int n, i, a;
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>>a;
        cnt[a]++;
    }
    for(i = 1; i <= n/3; i++)
    {
        if(cnt[1] && cnt[3] && cnt[6])
        {
            cnt[1]--;
            cnt[3]--;
            cnt[6]--;
            V.push_back(ANS(1,3,6));
        }
        else if(cnt[1] && cnt[2] && cnt[6])
        {
            cnt[1]--;
            cnt[2]--;
            cnt[6]--;
            V.push_back(ANS(1,2,6));
        }
        else if(cnt[1] && cnt[2] && cnt[4])
        {
            cnt[1]--;
            cnt[2]--;
            cnt[4]--;
            V.push_back(ANS(1,2,4));
        }
        else
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    for(i = 0; i < n/3; i++) cout<<V[i].a<<" "<<V[i].b<<" "<<V[i].c<<endl;
    return 0;
}

/*

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    ll x[n+5];
    map<ll,ll>mp;
    ll flag=0;
    for(ll i=0; i<n; i++)
    {
        cin>>x[i];
        if(x[i]==5 || x[i]==7){flag=1;}
        mp[x[i]]++;
    }
    if(flag==1){cout<<"-1"<<endl;}
    else
    {
        ll groupCount=n/3;
        if(mp[1]==groupCount && mp[2]+mp[3]==groupCount && mp[4]+mp[6]==groupCount && mp[2]>=mp[4] && mp[6]>=mp[3])
        {
            while(mp[4]--)
            {
                cout<<"1 2 4"<<endl;
                mp[2]--;
            }
            while(mp[3]--)
            {
                cout<<"1 3 6"<<endl;
            }
            while(mp[2]--)
            {
                cout<<"1 2 6"<<endl;
            }
        }
        else
        {
            cout<<"-1"<<endl;
        }
        mp.clear();
    }
    return 0;
}

*/

