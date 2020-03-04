#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,m,x;
        cin>>n>>m;

        int a[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int pos[m+5];
        memset(pos,0,sizeof(pos));
       // cout<<pos[2]<<" "<<pos[5]<<endl;
        for(int i=0; i<m; i++)
        {
            cin>>x;
            pos[x-1]=1;
        }


        while(1)
        {
            int flag=0;
        for(int i=0; i<n-1; i++)
        {
            if(pos[i]==1 && a[i]>a[i+1])
            {
                swap(a[i],a[i+1]);
                flag=1;
            }

        }
        if(flag==0){break;}
        }

        int bal=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                bal=1;
            }
        }
        if(bal==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }



    return 0;
}
