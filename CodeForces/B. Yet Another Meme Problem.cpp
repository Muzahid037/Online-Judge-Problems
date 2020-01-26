#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int t;
    cin>>t;

    for(long long int i=0; i<t; i++)
    {
        long long int a,b;
        cin>>a>>b;

        long long int ans=0;
        for(long long int i=10; i-1<=b; i*=10)
        {
            ans+=a;
        }
        cout<<ans<<endl;
    }



    return 0;
}
