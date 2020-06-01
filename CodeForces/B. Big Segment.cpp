#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,idx,mx=0,mn=1000000009;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        if(x<mn)
        {
            mn=x;
            idx=-1;
        }
        if(y>mx)
        {
            mx=y;
            idx=-1;
        }
        if(x==mn && y==mx) idx=i+1;
    }
    cout<<idx<<endl;
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mxy=0,idx=0;
    cin>>n;
    vector<vector<int> > mat(n, vector<int> (3));
    for(int i=0; i<n; i++)
    {
        cin>>mat[i][0]>>mat[i][1];
        mat[i][2]=i+1;
        mxy=max(mxy,mat[i][1]);
    }
    sort(mat.begin(),mat.end());
    while(idx<n && mat[idx][0]==mat[0][0])
    {
        if(mat[idx][1]==mxy)
        {
            cout<<mat[idx][2]<<endl;
            return 0;
        }
        idx++;
    }
    cout<<"-1"<<endl;
    return 0;
}
*/

///--------------------------------------------------------///

/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct seg
{
    ll x,y,id;
};
bool cmp(seg a,seg b)
{
    if(a.x==b.x) return a.y>b.y;
    else return a.x<b.x;
}
int main()
{
    ll n,maxy=0;
    cin>>n;
    seg ins[n+10];
    for(ll i=0; i<n; i++)
    {
        cin>>ins[i].x>>ins[i].y;
        ins[i].id=i+1;
        maxy=max(maxy,ins[i].y);
    }
    sort(ins,ins+n,cmp);
    if(ins[0].y==maxy) cout<<ins[0].id<<endl;
    else cout<<"-1"<<endl;
}
*/

///------------------------------------------------------------///

/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct seg
{
    int x,y,id;
};
bool cmp(seg a,seg b)
{
    return a.x<b.x;
}
int main()
{
    ll n;
    cin>>n;
    seg ins[n+10];
    for(ll i=0; i<n; i++)
    {
        cin>>ins[i].x>>ins[i].y;
        ins[i].id=i+1;
    }
    sort(ins,ins+n,cmp);
    ll xleft=ins[0].x,idx=0;
    while(ins[idx].x==xleft)
    {
        ll flag=1;
        for(ll i=0; i<n; i++)
        {
            if(ins[idx].y>=ins[i].y) continue;
            else
            {
                flag=0;
                i=n-1;
            }
        }
        if(flag==1)
        {
            cout<<ins[idx].id<<endl;
            return 0;
        }
        idx++;
    }
    cout<<"-1"<<endl;
    return 0;
}
*/
