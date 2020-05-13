#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll g,l;
        cin>>g>>l;
        if(g>l || l%g!=0)
        {
            cout<<"-1"<<endl;
            continue;
        }
        cout<<g<<" "<<l<<endl;

    }


    return 0;
}
