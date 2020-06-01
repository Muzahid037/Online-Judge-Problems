#include<bits/stdc++.h>
using namespace std;
int c[105];
int main()
{
    int n,x,m=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        m=max(m,++c[x]);
    }
    if(m>ceil(n/2.0)) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
