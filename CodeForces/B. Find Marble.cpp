///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
void bfs(int startNode,vector<int> &level,vector<bool> &visit,const vector< vector<int> > &adj)
{
    queue<int>nodes;
    nodes.push(startNode);
    level[startNode]=0;
    visit[startNode]=true;
    while(!nodes.empty())
    {
        int traversedNow=nodes.front();
        nodes.pop();
        for(auto adOfTraversedNow:adj[traversedNow])
        {
            if(visit[adOfTraversedNow]==true) continue;
            visit[adOfTraversedNow]=true;
            level[adOfTraversedNow]=level[traversedNow]+1;
            nodes.push(adOfTraversedNow);
        }
    }
}
int main()
{
    int n,s,t,x;
    cin>>n>>s>>t;
    vector<int>level(n+5,-1);
    vector<bool>visit(n+5,false);
    vector< vector<int> > adj(n+5, vector<int>());
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        adj[i].push_back(x);
    }
    bfs(s,level,visit,adj);
    cout<<level[t]<<endl;
    return 0;
}


/*

///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,s,t;
        cin>>n>>s>>t;
        int mov[n+5],ini=s,ans=0;;
        for(int i=1; i<=n; i++) cin>>mov[i];
        while(1)
        {
            if(ini==t)
            {
                cout<<ans<<endl;
                break;
            }
            else if(ans>0 && ini==s)
            {
                cout<<"-1"<<endl;
                break;
            }
            ini=mov[ini];
            ans++;
        }
    return 0;
}

*/
