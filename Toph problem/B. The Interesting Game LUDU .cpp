#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll point[n+5];
        for(ll i=0; i<n; i++)
        {
            cin>>point[i];
        }
        ll mina=0,raju=0;
        bool flag=true;
        for(ll i=0; i<n; i++)
        {
            if(i%2==0) mina+=point[i];
            else raju+=point[i];
            if(mina>=k)
            {
                cout<<"Mina Win"<<endl;
                flag=false;
                break;
            }
            else if(raju>=k)
            {
                cout<<"Raju Win"<<endl;
                flag=false;
                break;
            }
        }
        if(flag==true) cout<<"Mithu Win"<<endl;
    }



    return 0;
}
