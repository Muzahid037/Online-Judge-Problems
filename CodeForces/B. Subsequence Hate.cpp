#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ln=s.size(),cnt0=0,cnt1=0;
        if(ln<=2)
        {
            cout<<"0"<<endl;
            continue;
        }

        for(int i=0; i<ln; i++)
        {
            if(s[i]=='0') cnt0++;
            else cnt1++;
        }
        if(cnt0==ln || cnt1==ln)
        {
            cout<<"0"<<endl;
            continue;
        }
        int ans1=0,ans0=0;
        if(s[0]=='1' && s[ln-1]=='1') ans1++;
        if(s[0]=='0' && s[ln-1]=='0') ans0++;
        for(int i=1;i<ln-1;i++)
        {
            if(s[i]=='0')ans0++;
            else ans1++;
        }
        cout<<min(ans0,ans1)<<endl;
    }
    return 0;
}

