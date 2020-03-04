#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n,m,sum[26][200005],ans[26];
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>s;

        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<26; j++)sum[j][i]=sum[j][i-1];
            sum[s[i]-'a'][i]++;
        }
        memset(ans,0,sizeof(ans));
        while(m--)
        {
            int x;
            scanf("%d",&x);
            for(int i=0; i<26; i++)ans[i]+=sum[i][x];
        }
        for(int i=0; i<26; i++)ans[i]+=sum[i][n];
        for(int i=0; i<26; i++)printf("%lld ",ans[i]);
        printf("\n");
    }
    return 0;
}
