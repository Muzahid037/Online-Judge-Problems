#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

map<ll,ll>pos,mp;
vector<ll>v;

int main()
{
    ll n;
    cin>>n;
    ll x[n+5];
    int flag=0;
    for(ll i=0; i<n; i++)
    {
        cin>>x[i];
        if(pos[x[i]]==0){
        pos[x[i]]=i+1;
        }
        else
        {
            flag=1;
            v.push_back((i+1)-pos[x[i]]);
        }
                                                        ///7///2 1 4 2 2 4 1
    }

    if(flag==0)
    {
        cout<<"1"<<endl;
    }
    else
    {
   sort(v.begin(),v.end());
   cout<<v[v.size()-1]+1<<endl;
    }


    pos.clear();
    return 0;
}
