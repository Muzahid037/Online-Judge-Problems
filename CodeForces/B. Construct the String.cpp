#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s="abcdefghijklmnopqrstuvwxyz";
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if(a==b)
        {
            for(int i=0; i<n; i++)
            {
                cout<<s[i%26];
            }
            cout<<endl;
            continue;
        }
        else if(b==1)
        {
            for(int i=0; i<n; i++)
            {
                cout<<s[0];
            }
            cout<<endl;
            continue;
        }
        string ans="";
        for(int i=0; i<b; i++)
        {
            ans+=s[i];
        }
        // cout<<ans<<endl;
        //ans.clear();
        int sz=ans.size();
        int k=0;
        for(int i=0; i<n; i++)
        {
            if(k==sz)
            {
                cout<<ans[sz-1];
                k=0;
            }
            else
            {
                cout<<ans[k++];
            }
        }
        cout<<endl;

    }

    return 0;
}

