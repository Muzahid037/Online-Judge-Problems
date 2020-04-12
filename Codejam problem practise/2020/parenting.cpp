#include<bits/stdc++.h>
using namespace std;
map<int,int>st,ed;
vector<pair<pair<int,int>,int> > vt1;
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
        for(int i=0; i<n; i++)
        {
            cin>>s>>e;
            vt1.push_back(make_pair(make_pair(s,e), i));
        }
        sort(vt1.begin(), vt1.end());
        string ans(n,'0');
        for(int i=0; i<n; i++)
        {
            int start=vt1[i].first.first;
            int fin=vt1[i].first.second;
            int id=vt1[i].second;
            if( (ed[1]==start) || (ed[1]<start) )
            {
                ed[1]=fin;
                ans[id]='C';
            }
            else if((ed[2]==start) || (ed[2]<start))
            {
                ed[2]=fin;
                ans[id]='J';
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"Case #"<<k<<": "<<"IMPOSSIBLE"<<endl;
        }
        else
        {
            cout<<"Case #"<<k<<": "<<ans<<endl;
        }
        st.clear();
        ed.clear();
        vt1.clear();
    }
    return 0;
}




