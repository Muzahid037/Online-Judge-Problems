#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ans="";
    cin>>s;
    int sz=s.size(),flag=0;
    for(int i=0; i<sz-1; i++)
    {
        if(s[i]=='0' && flag==0)
        {
            flag=1;
            continue;
        }
        ans+=s[i];
    }
    if(flag==1) ans+=s[sz-1];
    cout<<ans<<endl;
    return 0;
}
