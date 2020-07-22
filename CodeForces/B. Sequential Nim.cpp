///"--------------------Bismillahir Rahmanir Rahim"-----------------------///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0,idx=0;
        cin>>n;
        ll a[n+5];
        for(ll i=0LL; i<n; i++)
        {
            cin>>a[i];
        }
        while(a[idx]==1LL)
        {
            idx++;
            cnt++;
        }
        //cout<<cnt<<endl;
        if(cnt==0)
        {
            cout<<"First"<<endl;
        }
        else if(cnt==n)
        {
            if(n%2==0)
            {
                cout<<"Second"<<endl;
            }
            else
            {
                cout<<"First"<<endl;
            }
        }
        else
        {
            if(cnt%2==0)
            {
                cout<<"First"<<endl;
            }
            else
            {
                 cout<<"Second"<<endl;
            }
        }
    }
    return 0;
}
