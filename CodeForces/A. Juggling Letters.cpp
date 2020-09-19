///"--------------------Bismillahir Rahmanir Rahim"-----------------------///
#include<bits/stdc++.h>
using namespace std;
int cnt[26];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,f=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            for(int j=0; j<s.size(); j++)
            {
                int tmp=s[j]-'a';
                //cout<<tmp<<endl;
                cnt[tmp]++;
            }
        }
        for(int i=0;i<26;i++)
        {
            //cout<<cnt[i]<<endl;
            if(cnt[i]%n!=0)
            {
                f=1;
                break;
            }
        }
        if(f==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        for(int i=0;i<26;i++)
        {
            cnt[i]=0;
        }
    }
    return 0;
}

