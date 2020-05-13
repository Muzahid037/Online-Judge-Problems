#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(k>n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(k==n)
        {
            cout<<"YES"<<endl;
            for(int i=0; i<k; i++)
            {
                cout<<"1 ";
            }
            cout<<endl;
            continue;
        }
        ll ev=n-(2*(k-1));
        ll od=n-(k-1);
        //cout<<ev<<" "<<od<<endl;
        if((ev<1 || ev%2==1) && od%2==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(ev%2==0 && ev>0)
        {
            cout<<"YES"<<endl;
            cout<<ev;
            for(int i=0;i<k-1;i++)
            {
                cout<<" 2";
            }
            cout<<endl;
            continue;

        }
        else if(od%2==1 && od>0)
        {
            cout<<"YES"<<endl;
            cout<<od;
            for(int i=0;i<k-1;i++)
            {
                cout<<" 1";
            }
            cout<<endl;
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}

