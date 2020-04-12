#include<bits/stdc++.h>
using namespace std;
map<int,int>st,ed;
vector< pair <int,int> > vt1,vt2;
map<pair<int, int>, int> vis;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int n,s,e;
        cin>>n;
        int flag=0;
        string ans="",res="";
        for(int i=0; i<n; i++)
        {
            cin>>s>>e;
            vt1.push_back( make_pair(e,s) );
            vt2.push_back( make_pair(e,s) );
        }
        sort(vt1.begin(), vt1.end());
        for(int i=0; i<n; i++)
        {
            //cout<<vt[i].first<<" "<<vt[i].second<<endl;

            //cout<<"st[1]: "<<st[1]<<" ed[1]: "<<ed[1]<<endl;
            //cout<<"st[2]: "<<st[2]<<" ed[2]: "<<ed[2]<<endl;
            if(st[1]==0 && ed[1]==0)
            {
                st[1]=vt1[i].second;
                ed[1]=vt1[i].first;
                //ans+="C";
                vis[vt1[i]]=1;
            }
            else if( ed[1]==vt1[i].second || ed[1]<vt1[i].second || (st[1]>vt1[i].second && st[1]>=vt1[i].first) )
            {
                if(st[1]>vt1[i].second)
                {
                    st[1]=vt1[i].second;
                }
                if(ed[1]<vt1[i].first)
                {
                    ed[1]=vt1[i].first;
                }
                // ans+="C";
                vis[vt1[i]]=1;
            }
            else if(st[2]==0 && ed[2]==0)
            {
                st[2]=vt1[i].second;
                ed[2]=vt1[i].first;
                // ans+="J";
                vis[vt1[i]]=2;
            }
            else if(ed[2]==vt1[i].second || ed[2]<vt1[i].second || (st[2]>vt1[i].second && st[2]>=vt1[i].first) )
            {
                if(st[2]>vt1[i].second)
                {
                    st[2]=vt1[i].second;
                }
                if(ed[2]<vt1[i].first)
                {
                    ed[2]=vt1[i].first;
                }
                // ans+="J";
                vis[vt1[i]]=2;
            }
            else
            {
                flag=1;
            }
            //cout<<"st[1]: "<<st[1]<<" ed[1]: "<<ed[1]<<endl;
            //cout<<"st[2]: "<<st[2]<<" ed[2]: "<<ed[2]<<endl;
        }

        //cout<<vis.size()<<endl;
        if(flag==1 || vis.size()!=n)
        {
            cout<<"Case #"<<k<<": "<<"IMPOSSIBLE"<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(vis[vt2[i]]==1)
                {
                    res+="C";
                }
                else
                {
                    res+="J";
                }
            }
            cout<<"Case #"<<k<<": "<<res<<endl;

        }

        st.clear();
        ed.clear();
        vt1.clear();
        vt2.clear();
        vis.clear();

    }
    return 0;
}



