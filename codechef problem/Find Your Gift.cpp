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
        int x=0,y=0;
        int flag=0;
        for(int i=0; i<s.size(); i++)
        {
            if(i==0)
            {
                if(s[i]=='L')
                {
                    x--;
                }
                else if(s[i]=='R')
                {
                    x++;
                }
                else if(s[i]=='U')
                {
                    y++;
                }
                else if(s[i]=='D')
                {
                    y--;
                }
            }
            else
            {
                if(s[i]=='L' && s[i-1]!='L' && s[i-1]!='R')
                {
                    x--;
                }
                else if(s[i]=='R' && s[i-1]!='L' && s[i-1]!='R')
                {
                    x++;
                }
                else if(s[i]=='U' && s[i-1]!='U' && s[i-1]!='D')
                {
                    y++;
                }
                else if(s[i]=='D' && s[i-1]!='D' && s[i-1]!='U')
                {
                    y--;
                }
            }
            // cout<<x<<" "<<y<<endl;
        }
        cout<<x<<" "<<y<<endl;
    }
}
