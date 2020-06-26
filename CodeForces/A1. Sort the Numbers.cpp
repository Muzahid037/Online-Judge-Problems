///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif

    ll n,x;
    cin>>n;
    vector<ll>a;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    cout<<"ans:"<<endl;
    for(ll i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}

