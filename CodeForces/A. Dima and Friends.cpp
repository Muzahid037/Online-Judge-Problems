#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    int fng=0;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        fng+=x;
    }
    n++;
    int ans=0;
    //cout<<n<<" "<<fng<<endl;
    for(int i=1; i<=5; i++)
    {
        if( ((fng+i)%n) !=1 )
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}


