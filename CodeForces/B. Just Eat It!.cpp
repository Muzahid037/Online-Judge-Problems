#include<bits/stdc++.h>
using namespace std;

int a[100005];
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;

        long long x=0,y=0;
        int flag=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<n; i++)
        {
            x+=a[i];
            y+=a[n-1-i];

            if(x<=0||y<=0)
            {
                flag=1;
            }
        }

        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
