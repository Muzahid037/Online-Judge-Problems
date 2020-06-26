///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
#define Boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    Boost();
    int n;
    cin>>n;
    int a[n+5],s[n+5];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s[i]=a[i];
    }
    sort(s+1,s+1+n);
    int l=1,r=1;
    for(int i=1; i<=n; i++)
    {
        if(a[i]!=s[i])
        {
            l=i;
            break;
        }
    }
    for(int i=n; i>0; i--)
    {
        if(a[i]!=s[i])
        {
            r=i;
            break;
        }
    }
    reverse(a+l,a+r+1);
    for(int i=1; i<=n; i++)
    {
        if(a[i]!=s[i])
        {
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes\n"<<l<<" "<<r<<endl;
return 0;
}
