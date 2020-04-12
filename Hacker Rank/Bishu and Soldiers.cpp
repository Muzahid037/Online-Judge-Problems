#include<bits/stdc++.h>
using namespace std;
vector<int>a;

int main()
{
    int n;
    cin>>n;
    int x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);
    }

    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        cin>>x;
        int idx;
        if(x>a[n-1])
        {
            idx=n-1;
        }
        else
        {
            vector<int>::iterator lower,upper;
            upper=upper_bound(a.begin(),a.end(),x);

            idx=upper-a.begin()-1;

        }
        cout<<idx+1<<" ";
        int ans=0;
        for(int j=0;j<=idx;j++)
        {
            ans+=a[j];
        }
        cout<<ans<<endl;
    }



    return 0;
}
