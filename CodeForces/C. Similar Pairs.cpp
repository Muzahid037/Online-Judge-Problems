#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+10];
        int cntEven=0,cntOdd=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0) cntEven++;
            else cntOdd++;
        }
        if(cntEven%2==0 && cntOdd%2==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        sort(a,a+n);
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(abs(a[i+1]-a[i])==1)
            {
               flag=1;
               break;
            }
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

