#include<bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
int main()
{
    BOOST
    int a,b;
    cin>>a>>b;
    vector<string>v;
    if(a%2==0)
    {
        while(b%2!=0 || (b/2)%2!=0)
        {
            ///---------T-------///
            b++;
            v.pb("T");
        }
        while(b!=0)
        {
            ///------TT-----///
            b-=2;
            a++;
            v.pb("TT");
        }
        while(a!=0)
        {
            ///-------HH--------///
            a-=2;
            v.pb("HH");
        }
    }
    else if(a%2==1)
    {
        if(b<2)
        {
            ///---------T-------///
            b++;
            v.pb("T");
        }
        ///------TT-----///
        b-=2;
        a++;
        v.pb("TT");

        while(b%2!=0 || (b/2)%2!=0)
        {
            ///---------T-------///
            b++;
            v.pb("T");
        }
        while(b!=0)
        {
            ///------TT-----///
            b-=2;
            a++;
            v.pb("TT");
        }

        while(a!=0)
        {
            ///-------HH--------///
            a-=2;
            v.pb("HH");
        }

    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}
