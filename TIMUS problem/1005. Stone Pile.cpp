#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,a[25];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
