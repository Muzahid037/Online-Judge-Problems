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
            else
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"Case #"<<k<<": IMPOSSIBLE"<<endl;
        }
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

