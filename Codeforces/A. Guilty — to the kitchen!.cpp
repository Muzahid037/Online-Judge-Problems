#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,V;
    cin>>n>>V;
    int a[25];
    int x=0.0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        x+=a[i];
    }
    double b[25];
    double mn=1001.0;
    for(int i=1; i<=n; i++)
    {
        cin>>b[i];
        mn=min(mn,(b[i]/a[i]));
    }
    cout<<fixed<<setprecision(4)<<min(x*mn,V)<<endl;
    return 0;
}
