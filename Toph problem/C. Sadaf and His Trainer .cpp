#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod=1000000007;
int main()
{
    int n;
    cin>>n;
    string s,pre,ans="";
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(i==0)
        {
            pre=s;
            ans+=s;
        }
        else
        {
            int flag=0;
            for(int j=0;j<s.size();j++)
            {
                if(pre[j]==s[j] &&flag==0) continue;
                else
                {
                    ans+=s[j];
                    flag=1;
                }
            }
        }
    }
    cout<<ans.size()<<endl;
    //cout<<<<ans<<endl;
    return 0;
}

