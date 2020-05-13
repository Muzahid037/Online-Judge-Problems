#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,m;
    cin>>n;
    int a[n+5];
    for(int i=0; i<n; i++) cin>>a[i];
    cin>>m;
    int b[m+5];
    for(int i=0; i<m; i++) cin>>b[i];
    int cnt,mx=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int x=b[j]%a[i];
            int y=b[j]/a[i];
            if(x==0)
            {
                if(y>mx)
                {
                    mx=y;
                    cnt=1;
                }
                else if(y==mx) cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
