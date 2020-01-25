#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i%2!=0){s=s+a[i];}
    }
    cout<<s<<endl;
}
