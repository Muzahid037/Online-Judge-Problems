#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flag=0;
        string s1="1",s2="1";
        for(int i=1; i<n; i++)
        {
            if(s[i]=='0')
            {
                s1+=s[i];
                s2+=s[i];
            }
            else if(s[i]=='1' && flag==0)
            {
                s1+="0";
                s2+=s[i];
                flag=1;
            }
            else if(s[i]=='1' && flag==1)
            {
                s1+=s[i];
                s2+="0";
            }
            else if(s[i]=='2' && flag==0)
            {
                s1+="1";
                s2+="1";
            }
            else if(s[i]=='2' && flag==1)
            {
                s1+=s[i];
                s2+="0";
            }
        }
        cout<<s1<<"\n"<<s2<<endl;
    }
    return 0;
}
