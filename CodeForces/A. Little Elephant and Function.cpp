#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n+5];
    for(int i=1; i<=n; i++)
    {
        x[i]=i;
    }
    for(int i=n; i>1; i--)
    {
        swap(x[i],x[i-1]);
    }
     for(int i=1; i<=n; i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    return 0;
}

