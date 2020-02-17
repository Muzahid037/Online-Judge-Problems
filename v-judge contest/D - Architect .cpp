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
        int cntb=0,cntk=0,cntl=0;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            if(s[0]=='b'){cntb++;}
            if(s[0]=='k'){cntk++;}
            if(s[0]=='l'){cntl++;}
        }

        int x=min(cntl,cntk);
        cout<<min(x,cntb/2)<<endl;

    }



    return 0;
}
