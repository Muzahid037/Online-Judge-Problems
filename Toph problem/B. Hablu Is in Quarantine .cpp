#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<int,int>mp;
int main()
{
    char ch;
    int n,p;
    cin>>n;
    int id=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>ch;
            if(ch=='c')
            {
                mp[id]=1;
            }
            id++;
        }
    }
    int x,flag=0;
    cin>>x;
    vector<int>vt,sol;

    for(int i=0; i<x; i++)
    {
        cin>>p;
        sol.push_back(p);
    }
    int idx=0;
    for(int i=0; i<x; i++)
    {
        if(mp[sol[i]]==1 && flag==0)
        {
            flag=1;
        }
        else if(flag==1 && mp[sol[i]]==0)
        {
            vt.push_back(sol[i]);
            idx++;
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0; i<idx; i++)
        {
            cout<<vt[i]<<" ";
        }
    }
    mp.clear();
    return 0;
}

/*
 id=1;
 for(int i=0; i<n; i++)
 {
     for(int j=0; j<n; j++)
     {
         cout<<id<<" "<<mp[id]<<"--";
         id++;
     }
     cout<<endl;
 }
 */
