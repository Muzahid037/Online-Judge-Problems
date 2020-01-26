#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,h1,h2,ans,k;
    string s;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int ctD=0,ctU=0,ctR=0,ctL=0;
        cin>>s;

        for(int j=0; j<s.length(); j++)
        {
            if(s[j]=='D')
            {
                ctD++;
            }
            if(s[j]=='U')
            {
                ctU++;
            }
            if(s[j]=='R')
            {
                ctR++;
            }
            if(s[j]=='L')
            {
                ctL++;
            }
        }

        h1=min(ctD,ctU);
        h2=min(ctR,ctL);

//
//        cout<<"h1="<<h1<<endl;
//        cout<<"h2="<<h2<<endl;

        if(h1!=0 && h2!=0)
        {
            ans=2*(h1+h2);

            ctD=h1;
            ctU=h1;

            ctR=h2;
            ctL=h2;

        }
        else if(h1==0 && h2==0)
        {
            ans=0;
        }
        else if(h1!=0 && h2==0)
        {
            ans=2;

            ctD=1;
            ctU=1;

            ctR=0;
            ctL=0;
        }

        else if(h2!=0 && h1==0)
        {
            ans=2;

            ctR=1;
            ctL=1;

            ctD=0;
            ctU=0;
        }

        cout<<ans<<endl;

        if(ans!=0)
        {
            while(ctU)
            {
                cout<<"U";
                ctU--;
            }
            while(ctR)
            {
                cout<<"R";
                ctR--;
            }
            while(ctD)
            {
                cout<<"D";
                ctD--;
            }
            while(ctL)
            {
                cout<<"L";
                ctL--;
            }
        }

        cout<<endl;
        ctD=0;
        ctU=0;
        ctR=0;
        ctL=0;
    }

    return 0;
}
