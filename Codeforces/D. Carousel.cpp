#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        set<int>st;
        int x[n+10];
        int adjsame=0,cntx=0;
        for(int i=0; i<n; i++)
        {
            cin>>x[i];
            st.insert(x[i]);
            cntx++;
            if(i!=0 && x[i-1]==x[i])
            {
                adjsame++;
            }
        }
        int col;
        string s="";
        if(st.size()<2)
        {
            col=1;
            for(int i=0; i<n; i++)
            {
                s+="1";
            }
        }
        else if(cntx%2==0)
        {
            col=2;
            for(int i=0; i<n; i++)
            {
                if(i%2==0)
                {
                    s+="1";
                }
                else
                {
                    s+="2";
                }
            }
        }
        else
        {
            if(adjsame>0)
            {
                col=2;
                int flag=0;
                for(int i=0; i<n; i++)
                {
                    if(i==0)
                    {
                        s+="1";
                    }
                    if( i!=0 && x[i]==x[i-1] && s[i-1]=='1' && flag==0)
                    {
                        flag=1;
                        s+="1";
                    }
                    else if(i!=0 && x[i]==x[i-1] && s[i-1]=='2' && flag==0)
                    {
                        flag=1;
                        s+="2";
                    }
                    else if(s[i-1]=='2')
                    {
                        s+="1";
                    }
                    else if(s[i-1]=='1')
                    {
                        s+="2";
                    }
                }
            }
            else
            {
                col=2;
                for(int i=0; i<n; i++)
                {
                    if(i%2==0)
                    {
                        s+="1";
                    }
                    else
                    {
                        s+="2";
                    }
                }
               if(x[0]!=x[n-1] && s[0]==s[n-1]){col++; s[n-1]='3';}
            }
        }
        cout<<col<<endl;
        for(int i=0; i<s.size(); i++)
        {
            cout<<s[i]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
