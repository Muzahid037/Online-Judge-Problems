#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;

int main()
{
    int n;
    cin>>n;
    int x[n+5],y[n+5];
    for(int i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
    }
    int ans=0;
    for(int i=0; i<n; i++)
    {
        int l=0,r=0,u=0,d=0;
        for(int j=0; j<n; j++)
        {
            if(x[i]>x[j] && y[i]==y[j])
            {
                l++;
            }
            if(x[i]<x[j] && y[i]==y[j])
            {
                r++;
            }
            if(x[i]==x[j] && y[i]<y[j])
            {
                u++;
            }
            if(x[i]==x[j] && y[i]>y[j])
            {
                d++;
            }
        }
        if(l>0 && r>0 && u>0 && d>0)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}


