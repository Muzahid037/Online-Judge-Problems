///"Bismillahir Rahmanir Rahim"

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5];
    int cnt=0,ans=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i==0)
        {
            continue;
        }
        if(a[i-1]<a[i] || a[i-1]==a[i])
        {
            cnt++;
            ans=max(ans,cnt);
        }
        else
        {
            cnt=0;
        }
    }
    cout<<ans+1<<endl;



    return 0;
}
