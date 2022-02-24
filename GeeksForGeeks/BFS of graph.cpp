// Problem url: https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1/#


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        int source = 0;
        vector<int> ans;
        vector<int> vis(V, 0);
        vis[source] = 1;
        queue<int> q;
        q.push(source);
        while (!q.empty())
        {
            int node = q.front();
            ans.push_back(node);
            q.pop();
            for (int i = 0; i < adj[node].size(); i++)
            {
                if (vis[adj[node][i]]==0)
                {
                    vis[adj[node][i]]=1;
                    q.push(adj[node][i]);
                }
            }
        }

        return ans;
    }
};

// { Driver Code Starts.
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
} // } Driver Code Ends