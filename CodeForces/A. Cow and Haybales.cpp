#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        int a[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int tm=0,ans=0;
        for(int i=1; i<n; i++)
        {
            if((tm+(a[i]*i))<=d)
            {
                ans+=a[i];
                tm+=(a[i]*i);
                //cout<<ans<<" "<<tm<<endl;
            }
            else
            {
                d-=tm;
                int x=a[i];
                while(x*i>d)
                {
                    x--;
                }
                // cout<<"x= "<<x<<endl;
                if(x>0)
                {
                    ans+=x;
                }
                break;
            }
        }
        cout<<a[0]+ans<<endl;
    }




    return 0;
}
