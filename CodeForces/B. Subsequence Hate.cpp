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
        int ln=s.size(),left0=0,left1=0,right0=0,right1=0,ans;
        for(int i=0; i<ln; i++)
        {
            if(s[i]=='0') right0++;
            else right1++;
        }
        ans=min(right0,right1);
        for(int i=0; i<ln; i++)
        {
            if(s[i]=='1') {
                right1--;
                left1++;
            }
            else
            {
                right0--;
                left0++;
            }
            ans=min(ans,min(right1+left0,right0+left1));
        }
        cout<<ans<<endl;
    }
    return 0;
}




/*
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
        int ln=s.size(),cnt0=0,cnt1=0,ans=INT_MAX;
        for(int i=0; i<ln; i++)
        {
            int left0=0,left1=0,right0=0,right1=0;
            for(int j=0; j<ln; j++)
            {
                if(j<i)
                {
                    if(s[j]=='0') left0++;
                    else left1++;

                }
                else
                {
                    if(s[j]=='0') right0++;
                    else right1++;
                }
            }
            //cout<<left1<<" "<<right0<<" "<<left0<<" "<<right1<<endl;
            ans=min(min(ans,left1+right0),left0+right1);    ///000...111 ///111....000
        }
        cout<<ans<<endl;
    }
    return 0;
}
*/
