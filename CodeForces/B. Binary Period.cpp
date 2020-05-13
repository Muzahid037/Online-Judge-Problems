#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int sz=s.size();
        string ans="";
        int cnt0=0,cnt1=0;
        for(int i=0; i<sz; i++)
        {
            if(s[i]=='0')
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
        if(cnt0==sz || cnt1==sz)
        {
            cout<<s<<endl;
            continue;
        }
        for(int i=0; i<2*sz; i++)
        {
            if(i%2==0)
            {
                ans+="0";
            }
            else
            {
                ans+="1";
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
