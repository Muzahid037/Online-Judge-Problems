///By pair of pair///
#include<bits/stdc++.h>
using namespace std;
vector<pair<pair<int,int>,int> > vt1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int n,s,e;
        cin>>n;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            cin>>s>>e;
            vt1.push_back(make_pair(make_pair(s,e), i));
        }
        sort(vt1.begin(), vt1.end());
        string ans(n,'0');
        int ed_c=0;
        int ed_j=0;
        for(int i=0; i<n; i++)
        {
            int start=vt1[i].first.first;
            int fin=vt1[i].first.second;
            int id=vt1[i].second;
            if( (ed_c==start) || (ed_c<start) )
            {
                ed_c=fin;
                ans[id]='C';
            }
            else if((ed_j==start) || (ed_j<start))
            {
                ed_j=fin;
                ans[id]='J';
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"Case #"<<k<<": "<<"IMPOSSIBLE"<<endl;
        }
        else
        {
            cout<<"Case #"<<k<<": "<<ans<<endl;
        }
        vt1.clear();
    }
    return 0;
}

/*
///By Structure///
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int s,e,id;
    char ans;
};
bool cmp_s(node lhs, node rhs)
{
    return lhs.s < rhs.s;
}
bool cmp_id(node lhs, node rhs)
{
    return lhs.id < rhs.id;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int n;
        cin>>n;
        struct node p[n];
        for(int i=0; i<n; i++)
        {
            cin>>p[i].s>>p[i].e;
            p[i].id=i;
        }
        sort(p, p+n, cmp_s);
//        for(int i=0; i<n; i++)
//        {
//            cout<<p[i].id<<" "<<p[i].s<<" "<<p[i].e<<endl;
//        }
        int end_c=0;
        int end_j=0;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(end_c<p[i].s || end_c==p[i].s)
            {
                end_c=p[i].e;
                p[i].ans='C';
            }
            else if(end_j<p[i].s || end_j==p[i].s)
            {
                end_j=p[i].e;
                p[i].ans='J';
            }
            else flag=1;
        }
        if(flag==1)cout<<"Case #"<<k<<": IMPOSSIBLE"<<endl;
        else
        {
            sort(p, p+n, cmp_id);
            cout<<"Case #"<<k<<": ";
            for(int i=0; i<n; i++)
            {
                cout<<p[i].ans;
            }
            cout<<endl;
        }
    }
    return 0;
}
*/
