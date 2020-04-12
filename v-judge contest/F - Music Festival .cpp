#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{
    int n,m,x;
    cin>>n;
    vector<int>v[n+5];
    for(int i=0; i<n; i++)
    {
        cin>>m;
        for(int j=0; j<m; j++)
        {
            cin>>st>>en>>x;
            mp[x]
        }
        sort(v[i].begin(),v[i].end());
        reverse(v[i].begin(),v[i].end());
    }
    for(int i=0; i<n; i++)
    {
        for(vector<int>::iterator j=v[i].begin(); j!=v[i].end(); j++)
        {
            cout<<*j<<" ";
        }
    }



    return 0;
}
