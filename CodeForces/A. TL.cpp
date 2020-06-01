#include<bits/stdc++.h>
using namespace std;
#define f(n) for(int i=0;i<n;i++)
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+10],b[m+10];
    f(n) cin>>a[i];
    sort(a,a+n);
    f(m) cin>>b[i];
    sort(b,b+m);
    int tl=max(2*a[0],a[n-1]);
    if(tl<b[0]) cout<<tl<<endl;
    else cout<<"-1"<<endl;
    return 0;
}


///-------------------------------------------------------///

/*
#include<bits/stdc++.h>
using namespace std;
#define f(n) for(int i=0;i<n;i++)
#define dbg2(x,y) cout<<"#x: "<<x<<" #y: "<<y<<endl
#define dbg1(z) cout<<"#z: "<<z<<endl
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+10],b[m+10];
    f(n)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    f(m)
    {
        cin>>b[i];
    }
    sort(b,b+m);
    if(a[n-1]>=b[0])
    {
        cout<<"-1"<<endl;
        return 0;
    }
    int tl=a[n-1];
    int ini=a[0];
    //dbg2(tl,ini);
    if(2*ini>tl)
    {
        tl+=((2*ini)-tl);
        //dbg1(tl);
    }
    if(tl<b[0]) cout<<tl<<endl;
    else cout<<"-1"<<endl;
    return 0;
}
*/
