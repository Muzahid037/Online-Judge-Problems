#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        string s;
        cin>>s;
        int n=s.size();
        string ans="";
        int x=s[0]-'0';
        while(x--)
        {
            ans+="(";
        }
        ans+=s[0];
        //cout<<ans<<endl;
        for(int i=1; i<=n-1; i++)
        {
            int a=s[i-1]-'0';
            int b=s[i]-'0';
            // cout<<"a: "<<a<<" b: "<<b<<endl;
            if(a>b)
            {
                x=a-b;
                while(x--)
                {
                    ans+=")";
                }
            }
            else if(a<b)
            {
                x=b-a;
                while(x--)
                {
                    ans+="(";
                }
            }
            ans+=s[i];
        }
        // ans+=s[n-1];
        x=s[n-1]-'0';
        while(x--)
        {
            ans+=")";
        }
        cout<<"Case #"<<k<<": "<<ans<<endl;
    }

    return 0;
}


