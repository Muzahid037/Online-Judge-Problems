/// Bismillahir Rahmanir Rahim ///
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        int n,k,x;
        cin>>n>>k;
        vector<int>a,b;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        for(int i=0; i<n; i++)
        {
            cin>>x;
            b.push_back(x);
        }
        sort(b.begin(),b.end(),greater<int>());
        //reverse(b.begin(),b.end());
        while(k--)
        {
            if(a[0]>=b[0])
            {
                break;
            }
            else
            {
                int tmp=a[0];
                a[0]=b[0];
                b[0]=tmp;
                sort(a.begin(),a.end());
                sort(b.begin(),b.end(),greater<int>());
//                reverse(b.begin(),b.end());
            }
        }
        ll ans=0;
        for(int i=0; i<n; i++)
        {
            ans+=a[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}

