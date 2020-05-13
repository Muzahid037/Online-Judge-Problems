#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n,m;
    cin>>n>>m;
    int ans=0,limit=max(n,m);
    for(int i=0; i<=limit; i++)
    {
        for(int j=0; j<=limit; j++)
        {
            if( (i*i+j)==n && (i+j*j)==m ) ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
