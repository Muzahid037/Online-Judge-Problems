#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int gcd(int a,int b)
{
    if(a%b==0)
    {
        return b;
    }
    else
        return gcd(b,a%b);
}
int main()
{
    int x;
    cin>>x;
    int a[x+5],b[x+5],c[x+5];
    int ans=0;
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=x; j++)
        {
            for(int k=1; k<=x; k++)
            {
                int x=gcd(i,j);
                ans+=gcd(x,k);
                //cout<<x<<endl;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}

