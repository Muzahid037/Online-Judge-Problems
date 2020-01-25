#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100];
vector<bool> v;

int main()
{
    int n;
    cin>>n;
    v.assign(n, false);
    int t,u,v;

        for(int j=1;j<=n;j++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
        }




    return 0;
}
