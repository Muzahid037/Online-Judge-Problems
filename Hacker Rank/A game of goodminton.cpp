#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,s,g;
        cin>>r>>s>>g;
        int rA=0,sA=0,gA=0,rB=0,sB=0,gB=0;
        string p;
        cin>>p;
        for(int i=0; i<p.size(); i++)
        {
            if(p[i]=='A')
            {
                rA++;
                if(rA==r)
                {
                    rA=0;
                    rB=0;
                    sA++;
                    if(sA==s)
                    {
                        sA=0;
                        sB=0;
                        gA++;
                        if(gA==g)
                        {
                            cout<<"A"<<endl;
                            break;
                        }
                    }
                }
            }
            else
            {
                rB++;
                if(rB==r)
                {
                    rA=0;
                    rB=0;
                    sB++;
                    if(sB==s)
                    {
                        sB=0;
                        sA=0;
                        gB++;
                        if(gB==g)
                        {
                            cout<<"B"<<endl;
                            break;
                        }
                    }
                }
            }
//            cout<<"rA: "<<rA<<" sA: "<<sA<<" gA: "<<gA<<endl;
//            cout<<"rB: "<<rB<<" sB: "<<sB<<" gB: "<<gB<<endl;
        }
    }
    return 0;
}
