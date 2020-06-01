#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,a,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
    }
    if(sum%n==0) cout<<n<<endl;
    else cout<<n-1<<endl;
    return 0;
}

