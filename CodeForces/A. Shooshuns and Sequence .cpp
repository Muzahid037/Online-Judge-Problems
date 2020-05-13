#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,ans;
    cin>>n>>k;
    int a[n+10];
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=k+1; i<=n; i++)
    {
        if(a[i]!=a[k])
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    ans=k-1;
    while(ans>0 && a[ans]==a[k]) ans--;
    cout<<ans<<endl;
    return 0;
}



/*
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n+10];
    for(int i=1; i<=n; i++) cin>>a[i];
    int kthNum=a[k];
    bool flag=true;
    for(int i=k+1; i<=n; i++)
    {
        if(a[i]!=kthNum)
        {
            flag=false;
            break;
        }
    }
    if(flag==false) cout<<"-1"<<endl;
    else
    {
        int ans=k-1;
        while(a[ans]==kthNum && ans>0)
        {
            ans--;
            if(ans==0)
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
*/
