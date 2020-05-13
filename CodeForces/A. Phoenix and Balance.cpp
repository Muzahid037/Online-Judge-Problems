#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int md=n/2;
        int x[n+10];
        for(int i=1; i<=n; i++)
        {
            x[i]=pow(2,i);
        }
        int s=x[n-1];
        int b=x[n];
        for(int i=1;i<md;i++)
        {
            b+=x[i];
        }
        for(int i=md;i<n-1;i++)
        {
            s+=x[i];
        }
        cout<<abs(b-s)<<endl;
    }

    return 0;
}

