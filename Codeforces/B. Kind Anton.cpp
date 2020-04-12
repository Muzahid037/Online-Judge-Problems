#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+10],b[n+10];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int flag=1,cntPlusOne=0,cntMinusOne=0;
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            if(i==0 && a[i]!=b[i])
            {
                flag=0;
            }
            else if(b[i]>a[i] && cntPlusOne==0)
            {
                flag=0;
            }
            else if(b[i]<a[i] && cntMinusOne==0)
            {
                flag=0;
            }
            if(a[i]==1)
            {
                cntPlusOne=1;
            }
            else if(a[i]==-1)
            {
                cntMinusOne=1;
            }

        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

