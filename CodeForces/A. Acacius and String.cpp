///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
char ch[7]= {'a','b','a','c','a','b','a'};
void printPlz(string s,int n)
{
    cout<<"YES"<<endl;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='?') cout<<"z";
        else cout<<s[i];
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n-6; i++)
        {
            int same=0;
            for(int j=0; j<=6; j++) same+=(s[i+j]==ch[j]?1:0);
            if(same==7) cnt++;
        }
        if(cnt>1) cout<<"NO"<<endl;
        else if(cnt==1) printPlz(s,n);
        else
        {
            int flag=0;
            for(int i=0; i<n-6; i++)
            {
                int tmp=0;
                for(int j=0; j<=6; j++)
                {
                    if(s[i+j]==ch[j] || s[i+j]=='?') tmp++;
                }
                if(tmp==7)
                {
                    char store[7];
                    for(int j=0; j<=6; j++)
                    {
                        store[j]=s[i+j];
                        if(s[i+j]=='?') s[i+j]=ch[j];
                    }
                    int occur=0;
                    for(int j=0; j<n-6; j++)
                    {
                        int same=0;
                        for(int k=0; k<=6; k++)
                        {
                            if(s[j+k]==ch[k]) same++;
                        }
                        if(same==7) occur++;
                    }
                    if(occur==1)
                    {
                        flag=1;
                        break;
                    }
                    else
                    {
                        for(int j=0; j<=6; j++) s[i+j]=store[j];
                    }
                }
            }
            if(flag==1) printPlz(s,n);
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}

