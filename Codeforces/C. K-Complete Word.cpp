#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string,int>mp;
int main()
{
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int div=n/k;
        vector< string > s,stmp;
        string temp="";
        int p=1;
        for(int i=0; i<n; i++)
        {
            temp+=str[i];
            if(i+1==k*p)
            {
                p++;
                s.push_back(temp);
                temp="";
            }
        }

        int mxcnt=0;
        for(int i=0; i<div; i++)
        {
            int m=0,n=k-1,cnt=0;
            while(m!=n)
            {
                if(s[i][m]==s[i][n])
                {
                    cnt++;
                }
                m++;
                n--;
            }
            mp[s[i]]=cnt;
            mxcnt=max(mxcnt,cnt);
        }
        int diff=(k/2)-mxcnt;
        for(int i=0; i<div; i++)
        {
            if(mp[s[i]]==mxcnt)
            {
                string tmp2=s[i];
               // cout<<tmp2<<endl;
                for(int j=0;j<div;j++)
                {
                    for(int z=0;z<k;z++)
                    {

                    }
                }

            }
        }
    }


    return 0;
}

