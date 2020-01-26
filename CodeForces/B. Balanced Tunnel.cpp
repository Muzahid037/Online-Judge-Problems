#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[100005],b[100005],pos[100005],cnt=0,x=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        pos[a[i]]=i;
    }
    for(int k=1; k<=n; k++)
    {
        cin>>b[k];
        if(pos[b[k]]<k)
        {
            cnt++;
        }
        else if(pos[b[k]]==k)
        {
            x++;
        }
    }
    if(x==n)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<n-cnt<<endl;
    }
    return 0;
}
