#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int c[n+5];

    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }

    int ans=0,cnt=0,mx=0;

    for(int i=0;i<n-1;i++)
    {
         int x=c[i];
        for(int j=i+1;j<n;j++)
        {
            if(x<c[j] && (c[j]-x)==(j-i))
            {
                cout<<"c[i]= "<<x<<" "<<"c[j]= "<<c[j]<<endl;
                ans+=x;
                x=c[j];
                cnt++;
            }
        }
        ans+=x;
        mx=max(mx,ans);
        ans=0;
    }

    cout<<cnt<<" "<<mx<<endl;



    return 0;
}
