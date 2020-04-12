#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,z;
        cin>>n;
        int p[n+10],c[n+10];
        for(int i=0; i<n; i++)
        {
            cin>>p[i]>>c[i];
        }

        int flag=1;
        for(int i=0; i<n-1; i++)
        {
            int a=p[i+1]-p[i];
            int b=c[i+1]-c[i];
            //cout<<"a: "<<a<<" b: "<<b<<endl;
            if(a<0 || b<0 || a<b)
            {
                flag=0;
            }
        }
        if(flag==1 && p[0]>=c[0])
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
