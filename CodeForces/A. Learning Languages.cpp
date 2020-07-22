///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;

int vis[105];
int parent[105];
int rnk[105];

int findRoot(int lang)
{
    if(parent[lang]==lang)
    {
        return lang;
    }
    else
    {
        return parent[lang]=findRoot(parent[lang]);
    }
}
void Union(int lang1,int lang2)
{
    int x=findRoot(lang1);
    int y=findRoot(lang2);
    if(x==y)
    {
        return;
    }
    if(rnk[x]==rnk[y])
    {
        parent[y]=x;
        rnk[x]++;
    }
    else if(rnk[x]>rnk[y])
    {
        parent[y]=x;
    }
    else if(rnk[x]<rnk[y])
    {
        parent[x]=y;
    }
}

int main()
{

    int t;
    t=1;
    //cin>>t;
    while(t--)
    {
        for(int i=1; i<105; i++) parent[i]=i;
        int n,m,u,v,ans=0;
        cin>>n>>m;

        for(int i=0; i<n; i++)
        {
            int k;
            cin>>k;
            if(k==0)
            {
                ans++;
                continue;
            }
            cin>>u;
            vis[u]=1;
            for(int j=0; j<k-1; j++)
            {
                cin>>v;
                vis[v]=1;
                Union(u,v);
            }
        }
        if(ans==n)
        {
            cout<<n<<endl;
            return 0;
        }
        for(int i=1;i<=m;i++)
        {
            if(vis[i]==1 && parent[i]==i)
            {
                ans++;
            }
        }
        cout<<ans-1<<endl;

    }
    return 0;
}



/*

#include<bits/stdc++.h>
using namespace std;

int vis[205];
int parent[205];
int language[205];

int findRoot(int lan)
{
    if(parent[lan]==lan)
    {
        return lan;
    }
    else
    {
        return parent[lan]=findRoot(parent[lan]);
    }
}
int main()
{

    int t;
    t=1;
    //cin>>t;
    while(t--)
    {

        for(int i=1; i<=200; i++)
        {
            parent[i]=i;
        }

        int n,m,ans=0;
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            int k;
            cin>>k;
            if(k==0) ans++;
            for(int j=0; j<k; j++)
            {
                cin>>language[j];
                vis[language[j]]=1;
            }
            for(int j=0; j<k-1; j++)
            {
                parent[findRoot(language[j])]=findRoot(language[j+1]);
            }
        }
        if(ans==n)
        {
            cout<<ans<<endl;
        }
        else
        {
            for(int i=1;i<=m;i++)
            {
                if(vis[i]==1)
                {
                    if(parent[i]==i)
                    {
                        ans++;
                    }
                }
            }
            cout<<ans-1<<endl;
        }
    }
    return 0;
}

*/
