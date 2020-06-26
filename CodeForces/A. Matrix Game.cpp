///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)
#define sf scanf
#define pf printf
#define pb push_back
#define F first
#define S second

int main()
{
    BOOST

    int t;
    t=1;
    cin>>t;
    while(t--)
    {
        int n,m,cnt=0;
        cin>>n>>m;
        int a[n+5][m+5];
        map<int,int>r,c;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
                if(a[i][j]==1)
                {
                    r[i]=1;
                    c[j]=1;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(r[i]==0 && c[j]==0)
                {
                    cnt++;
                    r[i]=1;
                    c[j]=1;
                }
            }
        }
        //cout<<cnt<<endl;
        if(cnt%2==0) cout<<"Vivek"<<endl;
        else cout<<"Ashish"<<endl;

        c.clear();
        r.clear();
    }
    return 0;
}
