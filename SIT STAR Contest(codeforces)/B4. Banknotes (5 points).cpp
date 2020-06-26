#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    BOOST
    int n,ans=0;
    cin>>n;
    ans+=(n/100);
    n=(n%100);
    ans+=(n/10);
    n=(n%10);
    ans+=n;
    cout<<ans<<endl;
    return 0;
}


