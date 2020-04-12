#include<bits/stdc++.h>
using namespace std;
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
        string res="";
        for(int i=0; i<n; i++)
        {
            cin>>s>>e;
            vt1.push_back( make_pair(s,e) );
            vt2.push_back( make_pair(s,e) );
        }
        sort(vt1.begin(), vt1.end());
        int edC=0;
        int edJ=0;
        for(int i=0; i<n; i++)
        {
            //cout<<"edc: "<<edC<<" edj: "<<edJ<<endl;
            if((i==0) || (edC<vt1[i].first) || (edC==vt1[i].first))
            {
                edC=vt1[i].second;
                vis[vt1[i]]=1;
            }
            else if((edJ<vt1[i].first) || (edJ==vt1[i].first))
            {
                edJ=vt1[i].second;
                vis[vt1[i]]=2;
            }
            else
            {
                flag=1;
            }
           // cout<<"edc: "<<edC<<" edj: "<<edJ<<endl;
        }
        if(flag==1)
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
        vt1.clear();
        vt2.clear();
        vis.clear();
    }
    return 0;
}



