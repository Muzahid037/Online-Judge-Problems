///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
        int x,a;
        cin>>x;
        vector<int>n[3];
        for(int i=0; i<x; i++)
        {
            cin>>a;
            if(a<0) n[0].pb(a);
            else if(a>0) n[1].pb(a);
            else n[2].pb(a);
        }
        if(n[1].size()==0)
        {
            for(int i=0;i<2;i++)
            {
                n[1].pb(n[0].back());
                n[0].pop_back();
            }
        }
        if(n[0].size()%2==0)
        {
            n[2].pb(n[0].back());
            n[0].pop_back();
        }
        for(int i=0;i<3;i++)
        {
            cout<<n[i].size()<<" ";
            for(auto j:n[i]) cout<<j<<" ";
            cout<<endl;
        }

       ///----sol:1----///
        /*
        int x,a;
        cin>>x;
        vector<int>z,n,p;
        for(int i=0; i<x; i++)
        {
            cin>>a;
            if(a==0) z.pb(a);
            else if(a<0) n.pb(a);
            else p.pb(a);
        }
        if(p.size()==0)
        {
          p.pb(n[n.size()-1]);
          n.pop_back();
          p.pb(n[n.size()-1]);
          n.pop_back();
        }
        if(n.size()%2==0)
        {
            z.pb(n[n.size()-1]);
            n.pop_back();
        }
        cout<<n.size()<<" ";
        for(auto i : n) cout<<i<<" ";
        cout<<endl;
        cout<<p.size()<<" ";
        for(auto i : p) cout<<i<<" ";
        cout<<endl;
        cout<<z.size()<<" ";
        for(auto i : z) cout<<i<<" ";
        cout<<endl;

        */
    return 0;
}

