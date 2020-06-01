#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define pb push_back
#define NL cout<<"\n"
#define sf scanf
#define sii(a,b) sf("%d%d",&a,&b)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define READ 	freopen("input.txt","r",stdin);
#define WRITE  	freopen("output.txt","w",stdout);

int n,m,k,p;
int i;
int main()
{
    BOOST
    READ
    WRITE

    sii(n,m);

    if( n>m )
    {
        f0(i,m)cout<<"BG";
        f0(i,n-m)cout<<"B";
        NL;
    }
    else
    {
        f0(i,n)cout<<"GB";
        f0(i,m-n)cout<<"G";
        NL;
    }
    return  0;
}
