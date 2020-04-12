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
        int a[n+5];


        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int mx=a[n-1];
        //cout<<mx<<endl;

        int flag=0;
         for(int i=0;i<n;i++)
        {
            if((mx-a[i])%2!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
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
