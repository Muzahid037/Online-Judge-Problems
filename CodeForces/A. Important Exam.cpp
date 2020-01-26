#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,sum=0;
    char str1[1005],str2[1005];
    int a[1005],b[1005];
    memset(a, 0, sizeof a);
    cin>>n>>m;
    cin>>str1;
    for(int i=0; i<n-1; i++)
    {
        cin>>str2;
        for(int j=0; j<strlen(str1); j++)
        {
            if(str1[j]==str2[j])
            {
                b[j]=1;
            }
        }
    }
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(b[i]==1)
        {
            sum+=a[i];
        }
    }

    cout<<sum<<endl;
    sum=0;

    return 0;
}
