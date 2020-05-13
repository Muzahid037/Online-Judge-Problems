#include<bits/stdc++.h>
using namespace std;
int cntRow[105],cntCol[105];
int main()
{
    int n,m;
    cin>>n>>m;
    char ch;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>ch;
            if(ch=='*')
            {
                cntRow[i]++;
                cntCol[j]++;
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(cntRow[i]==1)
        {
            cout<<i<<" ";
            break;
        }
    }
    for(int j=1; j<=m; j++)
    {
        if(cntCol[j]==1)
        {
            cout<<j<<" ";
            break;
        }
    }
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char ch;
    vector<pair<int,int> > pos;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>ch;
            if(ch=='*')
            {
                pos.push_back(make_pair(i,j));
            }
        }
    }
    int x,y;
    if(pos[0].first==pos[1].first)
    {
        x=pos[2].first;
    }
    else if(pos[0].first==pos[2].first)
    {
        x=pos[1].first;
    }
    else
    {
        x=pos[0].first;
    }
       if(pos[0].second==pos[1].second)
    {
        y=pos[2].second;
    }
    else if(pos[0].second==pos[2].second)
    {
        y=pos[1].second;
    }
    else
    {
        y=pos[0].second;
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}
*/
