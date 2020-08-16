///"--------------------Bismillahir Rahmanir Rahim"-----------------------///
#include<bits/stdc++.h>
using namespace std;
bool vis[10010];
int k=0;
vector<int> m[10010],adj[10010],one,two,tri;
void dfs(int x)
{
    vis[x]=true;
    m[k].push_back(x);
    for(int i=0; i<adj[x].size(); i++)
        if(vis[adj[x][i]]==false)
            dfs(adj[x][i]);
}

int main()
{
    int n,mm,a,b;
    cin>>n>>mm;
    for(int i=0; i<mm; i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=1; i<=n; i++)
    {
        if(vis[i]==false)
        {
            dfs(i);
        }
        k++;
    }
    for(int i=0; i<k; i++)
    {
        if(m[i].size() > 3)
        {
            cout<<"-1"<<endl;
            return 0;
        }
        if(m[i].size()==3)
        {
            tri.push_back(i);
        }
        if(m[i].size()==2)
        {
            two.push_back(i);
        }
        if(m[i].size()==1)
        {
            one.push_back(i);
        }
    }
    if(one.size()<two.size() || (one.size()-two.size())%3!=0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    for(int i=0; i<tri.size(); i++)
    {
        cout<<m[tri[i]][0]<<" "<<m[tri[i]][1]<<" "<<m[tri[i]][2]<<endl;
    }
    for(int i=0; i<two.size(); i++)
    {
        cout<<m[two[i]][0]<<" "<<m[two[i]][1]<<" "<<m[one[i]][0]<<endl;
    }
    for(int i=two.size(); i<one.size(); i+=3)
    {
        cout<<m[one[i]][0]<<" "<<m[one[i+1]][0]<<" "<<m[one[i+2]][0]<<endl;
    }
    return 0;
}


