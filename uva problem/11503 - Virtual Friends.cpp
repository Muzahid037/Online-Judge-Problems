///Bismillahir Rahmanir Rahim
/**
 *    author: s0L0
 *
**/
#include <bits/stdc++.h>
using namespace std;

map<string,int>mp;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;

        for(int j=0;j<n;j++)
        {
            string x,y;
            cin>>x>>y;

            mp[x]+=mp[y];
            mp[y]+=mp[x];
            mp[x]++;
            mp[y]++;

            cout<<(mp[x]+mp[y])<<endl;
        }
        mp.clear();
    }



    return 0;
}
