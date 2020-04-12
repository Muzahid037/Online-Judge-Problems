/*#include<bits/stdc++.h>
using namespace std
int main()
{
    int n,x,ttl=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        ttl+=x;
    }
    int tmp=0;
    for(int i=0; i<n-1; i++)
    {
        cin>>x;
        tmp+=x;
    }
    int first=ttl-tmp;
    ttl-=first;
    tmp=0;
    for(int i=0; i<n-2; i++)
    {
        cin>>x;
        tmp+=x;
    }
    int second=ttl-tmp;
    cout<<first<<"\n"<<second<<endl;
    return 0;
}

/*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+10],b[n+10],c[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        cin>>b[i];
    }
    for(int i=0; i<n-2; i++)
    {
        cin>>c[i];
    }
    sort(a,a+n);
    sort(b,b+(n-1));
    sort(c,c+(n-2));
    int idx=0;

        while(a[idx]==b[idx])
        {
            idx++;
        }
        cout<<a[idx]<<endl;
        idx=0;
    while(b[idx]==c[idx])
        {
            idx++;
        }
         cout<<b[idx]<<endl;
    return 0;
}













