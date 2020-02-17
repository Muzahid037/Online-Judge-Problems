#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;

        ll z,flag=0,big=0;
        vector<ll>a;
        for(ll i=0; i<n; i++)
        {
            cin>>z;
            if(z==x)
            {
                flag=1;
            }
            else if(z<x)
            {
                a.push_back(z);
            }
            else
            {
                big++;
            }
        }
        if(flag==1)
        {
            cout<<"1"<<endl;
            continue;
        }
        else if(big>0)
        {
            cout<<"2"<<endl;
            continue;
        }
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());

       // cout<<x<<" "<<a[0]<<endl;

        //double j=ceil((double)x/a[0]);
        ll j;
        j=x/a[0];
        if(x%a[0]!=0)
        {
            j++;
        }

        cout<<j<<endl;

    }



    return 0;
}
