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
        int s[n+10];
        int mnDiff=2000,flag=0,a,b;
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }
        sort(s,s+n);
//        for(int i=0; i<n; i++)
//        {
//            cout<<s[i]<<" ";
//        }
//        cout<<endl;
        for(int i=1; i<n; i++)
        {
            int tmp=abs(s[i]-s[i-1]);
            //cout<<tmp<<endl;
            if(mnDiff>tmp)
            {
                mnDiff=tmp;
                a=i;
                b=i-1;
            }
            else if(mnDiff==0)
            {
                flag=1;
            }
        }
        if(flag==1) cout<<"0"<<endl;
        else
        {
            cout<<abs(s[a]-s[b])<<endl;
        }
    }

    return 0;
}
