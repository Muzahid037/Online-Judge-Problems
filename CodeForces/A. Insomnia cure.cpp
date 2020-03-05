#include<bits/stdc++.h>
using namespace std;

map<int,int>mp;

int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;

    for(int i=1; i<=d; i++)
    {
        if(k*i<=d) mp[k*i]=1;
        if(l*i<=d) mp[l*i]=1;
        if(m*i<=d) mp[m*i]=1;
        if(n*i<=d) mp[n*i]=1;
    }

    int cnt=0;
    for(map<int,int>::iterator it=mp.begin(); it!=mp.end(); it++)
    {
        // cout<<it->second<<endl;
        if(it->second==1)
        {
            cnt++;
        }
    }

    cout<<cnt<<endl;



    mp.clear();
    return 0;
}
