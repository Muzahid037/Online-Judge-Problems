
#include<bits/stdc++.h>
using namespace std;

long long arr[10005],a, b, c, d, e, f;
long long hexbn(long long n)
{
    long long i;
    for(i=0; i<=n; i++)
    {

        if( i == 0 )
        {
            arr[i]=a;
            continue;
        }
        if( i== 1 )
        {
            arr[i]=b;
            continue;
        }
        if( i == 2 )
        {
            arr[i]=c;
            continue;
        }
        if( i == 3 )
        {
            arr[i]=d;
            continue;
        }
        if( i == 4 )
        {
            arr[i]=e;
            continue;
        }
        if( i == 5 )
        {
            arr[i]=f;
            continue;
        }
        //if(i<=5){continue;}
        arr[i]=arr[i-1] + arr[i-2] +arr[i-3]+arr[i-4] +arr[i-5] + arr[i-6];
        arr[i]=arr[i]% 10000007;

    }


    return arr[i-1];
    //  cout<<arr[i-1]<<endl;
}

int main()
{
    long long t,n,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b>>c>>d>>e>>f>>n;

        cout<<"Case "<<i<<": "<<hexbn(n)% 10000007<<endl;
    }
    return 0;
}
