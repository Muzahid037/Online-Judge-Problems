#include<bits/stdc++.h>
using namespace std;

map<int,int>pos;

int main()
{
    int n;
    cin>>n;
    int x[n+5];

    int mx=-1;
    int mn=105;
    int posMx=0,posMn=n-1;
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
        if(x[i]>mx)
        {
            mx=x[i];
            posMx=i;
        }
        if(x[i]<=mn)
        {
            mn=x[i];
            posMn=i;
        }
    }

    // cout<<posMn<<" "<<posMx<<endl;
    int ans;
    if(posMx==0 && posMn==n-1)
    {
        ans=0;
    }
    else
    {
        ans=posMx+((n-1)-posMn);
    }
    if(posMx>posMn)
    {
        ans--;
    }
    cout<<ans<<endl;

    return 0;
}
