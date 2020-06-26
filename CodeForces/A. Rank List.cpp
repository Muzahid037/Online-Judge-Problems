#include<bits/stdc++.h>
using namespace std;
struct team
{
    int p,t;
};
bool cmp(team x,team y)
{
    if(x.p==y.p) return x.t<y.t;
    return x.p>y.p;
}
int main()
{
        int n,k;
        cin>>n>>k;
        team obj[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>obj[i].p>>obj[i].t;
        }
        sort(obj,obj+n,cmp);
        int cnt=1;
        int left=k-2,right=k;
        while(left>=0 && (obj[k-1].p==obj[left].p && obj[k-1].t==obj[left].t))
        {
            cnt++;
            left--;
        }
        while(right<n && (obj[k-1].p==obj[right].p && obj[k-1].t==obj[right].t))
        {
            cnt++;
            right++;
        }
        cout<<cnt<<endl;
    return 0;
}
