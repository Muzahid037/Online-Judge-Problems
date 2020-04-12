#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,ans;
    cin>>n;
    ans=n;
    while(n--)
    {
        cin>>x;
        if(x==1)
        {
            ans--;
        }
    }
    cout<<ans<<endl;
    return 0;
}
