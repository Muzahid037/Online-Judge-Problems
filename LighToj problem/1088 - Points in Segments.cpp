#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n,q;
        scanf("%d%d",&n,&q);
        int x[n+5];
        for(int j=0; j<n; j++)
        {
            scanf("%d",&x[j]);
        }
        printf("Case %d:\n",i);
        for(int j=0; j<q; j++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            int* low=lower_bound(x,x+n,a);
            int* high=upper_bound(x,x+n,b);
            printf("%d\n",high-low);
        }
    }
    return 0;
}


