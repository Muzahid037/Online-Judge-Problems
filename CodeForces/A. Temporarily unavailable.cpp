#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a,b,c,r;
        cin>>a>>b>>c>>r;

        int big,small;

        if(a==b){cout<<"0"<<endl;continue;}
        else if(a>b)
        {
            big=a;
            small=b;
        }
        else
        {
            big=b;
            small=a;
        }

        if(c<big && c>small)
        {
            if((big-small)-(2*r)<0){cout<<"0"<<endl;}
            else{cout<<(big-small)-(2*r)<<endl;}
        }
        else if(c==big || c==small)
        {
            if((big-small)-r<0){cout<<"0"<<endl;}
            else {cout<<(big-small)-r<<endl;}
        }
        else if(c>big)
        {
            int y;
            int x=c-big;
            if(r>x)
            {
                y=r-x;
            }
            else
            {
                y=0;
            }
            if(((big-small)-y)<0)
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<(big-small)-y<<endl;
            }
        }
        else if(c<small)
        {
            int y;
            int x=small-c;
            if(r>x)
            {
                y=r-x;
            }
            else
            {
                y=0;
            }
             if(((big-small)-y)<0)
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<(big-small)-y<<endl;
            }
        }
    }


    return 0;
}
