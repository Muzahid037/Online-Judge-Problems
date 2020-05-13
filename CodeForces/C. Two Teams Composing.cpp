#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n;
        set<ll>st;
        map<ll,ll>mp;
        ll same=0,diff;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            st.insert(x);
            mp[x]++;
            same=max(same,mp[x]);
        }
        diff=st.size();
        //cout<<"same: "<<same<<endl;
        //cout<<"diff: "<<st.size()<<endl;
        ll ans1=min(diff,same-1);
        ll ans2=min(diff-1,same);
        cout<<max(ans1,ans2)<<endl;
    }
}

/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<ll,ll>mp;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,num;
        cin>>n;
        ll a[n+5];
        ll mx=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
            // mx=max(mx,mp[a[i]]);
            if(mx<mp[a[i]])
            {
                mx=mp[a[i]];
                num=a[i];
            }
        }
        if(n==1)
        {
            cout<<"0"<<endl;
        }
        else
        {
            set<ll>dis;
            for(ll i=0; i<n; i++)
            {

                if(a[i]!=num)
                {
                    dis.insert(a[i]);
                }
            }

            ll sz=dis.size();
            if(sz==0)
            {
                cout<<"1"<<endl;
            }
            else
            {
                ll maxTeamMember=n/2;
               //cout<<"num: "<<num<<" mx: "<<mx<<" sz: "<<sz<<endl;
                if(mx==sz)
                {
                    // cout<<"d"<<endl;
                    cout<<min(mx,maxTeamMember)<<endl;
                }
                else if(mx>sz)
                {
                    while(1)
                    {
                        dis.insert(num);
                        if(sz<dis.size())
                        {
                            sz++;
                            mx--;
                        }
                        else
                        {
                            ll p=min(sz,mx);
                            cout<<min(p,maxTeamMember)<<endl;
                            break;
                        }
                        if(mx==sz)
                        {
                            // cout<<"b"<<endl;
                            cout<<min(mx,maxTeamMember)<<endl;
                            break;
                        }
                        else if(mx<sz)
                        {
                            //cout<<"c"<<endl;
                            cout<<min(mx,maxTeamMember)<<endl;
                            break;
                        }
                    }
                }
                else if(mx<sz)
                {
                    //cout<<"c"<<endl;
                    cout<<min(mx,maxTeamMember)<<endl;
                }
            }
        }
        mp.clear();
    }

    return 0;
}

*/
