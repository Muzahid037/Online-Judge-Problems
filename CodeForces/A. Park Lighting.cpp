#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define pb push_back

int main()
{
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int evRow=n-(n%2);
        int odRow=n%2;
        int evRowCol=(evRow/2)*m;
        if(odRow!=0)
        {
            int odRowCol=ceil(m/2.0);
            evRowCol+=odRowCol;
        }
        cout<<evRowCol<<endl;
    }
    return  0;
}

/*
 int cnt=0;
        for(int i=1; i<=n;)
        {
            for(int j=1; j<=m;)
            {
                cnt++;
                cout<<i<<" "<<j<<endl;
                if(i==n && j==m-1)
                {
                    j+=2;
                }
                else
                {
                    j++;
                }
                cout<<i<<" "<<j<<endl;
                cout<<"------------------------"<<endl;
            }
            if(i==n-1)
            {
                i++;
            }
            else
            {
                i+=2;
            }
        }

        cout<<cnt<<endl;
*/
