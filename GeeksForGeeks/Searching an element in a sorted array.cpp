#include<bits/stdc++.h>
using namespace std;

int flag=-1;
vector<int>a;

int bin_src(int n,int k)
{
    int lo,mid,hi;
    lo=0;
    hi=n-1;

    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        if(a[mid]==k)
        {
            flag=1;
            break;
        }
        else if(a[mid]>k)
        {
            hi=mid-1;
        }
        else if(a[mid]<k)
        {
            lo=mid+1;
        }
    }
    return flag;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        int ans;
        ans=bin_src(n,k);

        cout<<ans<<endl;
        flag=-1;
        a.clear();
    }

    return 0;
}
