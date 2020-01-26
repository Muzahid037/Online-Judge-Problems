#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        string s;
        cin>>s;

        int flag=0;

        for(int j=1; j<s.length(); j++)
        {
            if(s[j-1]==s[j] && s[j-1]!='?')
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(int j=0; j<s.length(); j++)
            {
                if(s[j]=='?')
                {
                    if(s[j-1]!='a' && s[j+1]!='a')
                    {
                        s[j]='a';
                        cout<<"a";
                    }
                    else if(s[j-1]!='b' && s[j+1]!='b')
                    {
                        s[j]='b';
                        cout<<"b";
                    }
                    else if(s[j-1]!='c' && s[j+1]!='c')
                    {
                        s[j]='c';
                        cout<<"c";
                    }
                }
                else
                {
                    cout<<s[j];
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
