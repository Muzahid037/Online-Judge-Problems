#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,j,i=1,ans;
    cin>>n;
    ans=n/2;
    ans=n%2==0?ans:(-1)*(ans+1);
    cout<<ans<<endl;
}

