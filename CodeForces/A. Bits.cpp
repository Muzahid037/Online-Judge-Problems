#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long n,l,r,x,z,ans;
    cin>>n;
    for(long long i=0; i<n; i++)
    {
        cin>>l>>r;
        z=0;
        for(long long i=l; i<=r; i++)
        {
            x=__builtin_popcountll (i);
              if(x>z)
            {
                z=x;
                ans=i;
            }
        }
        cout<<ans<<endl;
    }
//cout<< __builtin_popcount (10);

}
