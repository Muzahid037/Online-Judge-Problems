///"--------------------Bismillahir Rahmanir Rahim"-----------------------///
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s,ans="";
    cin>>s;
    int n=s.size(),len=0;
    for(int i=0; i<n; i++)
    {
        if(len>=2)
        {
            if(ans[len-1]==ans[len-2] && s[i]!=ans[len-1])
            {
                ans+=s[i];
                len++;
            }
            else if(ans[len-1]!=ans[len-2])
            {
                ans+=s[i];
                len++;
            }
            if(ans.size()>=4)
            {
                if(ans[len-1]==ans[len-2] && ans[len-3]==ans[len-4])
                {
                    ans.pop_back();
                    len--;
                }
            }
        }
        else
        {
            ans+=s[i];
            len++;
        }
    }
    if(len>=4)
    {
        if(ans[len-1]==ans[len-2] && ans[len-3]==ans[len-4])
        {
            ans.pop_back();
            len--;
        }
    }
    cout<<ans<<endl;
    return 0;
}
