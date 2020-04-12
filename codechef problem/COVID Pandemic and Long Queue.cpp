#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+10];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int idx1st=0;
        while(a[idx1st]!=1)
        {
            idx1st++;
        }
        int idx2nd=n-1;
         while(a[idx1st]!=1)
        {
            idx2nd--;
        }
        int cntZero=0,mn=10005,flag=0;
        for(int i=idx1st;i<=idx2nd-1;i++)
        {
            if(a[i]==1 && a[i+1]==1)
            {
                flag=1;
                break;
            }
            else if(a[i]==1 && a[i+1]==0)
            {
                continue;
            }
            else if(a[i]==0 && a[i+1]==1)
            {
                cntZero++;
                if(mn>cntZero && cntZero!=0)
                {
                    mn=cntZero;
                }
                cntZero=0;
            }
            else if(a[i]==0 && a[i+1]==0)
            {
                cntZero++;
            }
        }
       // cout<<flag<<" "<<mn<<endl;
        if(flag==1 || mn<5)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
