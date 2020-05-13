#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+5];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int ans=0,j=0;
    while(m>0 && j<n)
    {
        if(a[j]<0)
        {
            ans+=abs(a[j]);
            m--;
        }
        j++;
    }
    cout<<ans<<endl;
    return 0;
}
