///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    int a[n+5];
    map<int,int>pos;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==i) ans++;
        pos[a[i]]=i;
    }
    if(ans==n) cout<<n<<endl;
    else
    {
        int add=1;
        for(int i=0; i<n; i++)
        {
            //cout<<a[i]<<" "<<i<<" "<<pos[i]<<endl;
            if(a[i]!=i && a[i]==pos[i])
            {
                add++;;
                break;
            }
        }
        cout<<ans+add<<endl;
    }
    return 0;
}
