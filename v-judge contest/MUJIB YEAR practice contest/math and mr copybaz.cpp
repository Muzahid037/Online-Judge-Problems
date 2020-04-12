#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        ll x;
        cin>>x;
        ll a=x;
        ll mx=x;
        while(1)
        {
            //cout<<"x before: "<<x;
            if(x%4==0)
            {
                x=x/4;
            }
            else if(x%2==0)
            {
                x=x/2;
            }
            else
            {
                x=x*3;
                x++;
            }
            //cout<<" x after: "<<x<<endl;
            mx=max(mx,x);
            if(x==1)
            {
                break;
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
