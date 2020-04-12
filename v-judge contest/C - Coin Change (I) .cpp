
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int x;
    vector<int>a;
    int c[51];
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n,k;
        cin>>n>>k;
        for(int j=0; j<n; j++)
        {

            cin>>x;
            a.push_back(x);
        }
        for(int j=0; j<n; j++)
        {
            cin>>x;
            c[a[j]]=x;
        }

        sort(a.begin(),a.end());


         for(int j=0; j<n; j++)
        {

            cout<<a[j]<<" ";
        }
        cout<<endl;

        for(int j=0; j<n; j++)
        {
            cout<<"a["<<a[j]<<"]= "<<c[a[j]]<<" ";
        }
        cout<<endl;

        int ans=0,cnt=0;
        int m=0;
        while(m<=n)
        {
            cout<<"a[m]="<<a[m]<<endl;
            cout<<ans+a[m]<<endl;
            if((ans+a[m])<=k && c[a[m]]>0 && a[m]!=0)
            {
                ans+=a[m];
                a[m]=0;
            cout<<"Ans ="<<ans<<endl;
                c[a[m]]--;
            }
            else{m++;}


            if(ans==k)
            {
                cnt++;
                ans=0;
            }
        }
        cout<<"Cnt= "<<cnt<<endl;

    }
}
