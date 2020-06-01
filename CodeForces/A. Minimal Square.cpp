#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int mn=min(a,b);
        int mx=max(a,b);
//        if(a==b) cout<<a*b<<endl;
//        else
//        {
            if(2*mn>=mx) cout<<4*mn*mn<<endl;
            else cout<<mx*mx<<endl;
        //}

    }

    return 0;
}


