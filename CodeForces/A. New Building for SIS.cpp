#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,m,n,o,p,x[1000],y[1000];
    cin>>a>>b>>c>>d>>e;
    for(int i=0; i<e; i++)
    {
        cin>>m>>n>>o>>p;
        x[i]=o-m;

        if(p==n&&m!=o)
        {
            y[i]=2;
        }
        else
        {
            y[i]=p-n;
        }
    }
    for(int k=0; k<e; k++)
    {
        cout<<x[k]+y[k]<<endl;
    }
    return 0;

}
