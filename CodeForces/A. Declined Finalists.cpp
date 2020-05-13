#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,x;
    cin>>k;
    int mx=0;
    for(int i=1; i<=k; i++)
    {
        cin>>x;
        mx=max(mx,x);
    }
    mx=max(0,mx-25);
    cout<<mx<<endl;
    return 0;
}

