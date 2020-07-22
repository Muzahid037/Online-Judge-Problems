///-----Bismillahir Rahmanir Rahim-----///
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
        int n=s.size(),cntR=0,cntP=0,cntS=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='P') cntP++;
            else if(s[i]=='R') cntR++;
            else if(s[i]=='S') cntS++;
        }
        if(cntP>=cntR && cntP>=cntS){ for(int i=0; i<n; i++) cout<<"S";}
        else if(cntR>=cntP && cntR>=cntS) { for(int i=0; i<n; i++) cout<<"P";}
        else for(int i=0; i<n; i++) {cout<<"R";}
        cout<<endl;
    }
    return 0;
}


