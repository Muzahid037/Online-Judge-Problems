#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,a,b;
        cin>>x>>y>>a>>b;

        if(x==y){cout<<"0"<<endl;}
        else if(x>y){cout<<"-1"<<endl;}
        else
        {
            ll z=y-x;
            ll m=a+b;

            if(z%m==0)
            {
                cout<<z/m<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }

    }


    return 0;
}
