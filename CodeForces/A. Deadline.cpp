#include<bits/stdc++.h>
using namespace std;


int main()
{

    long double t;
    cin>>t;
    long double n,d;

    for(long double i=0; i<t; i++)
    {
        cin>>n>>d;

        if(d<=n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            long double mn=1000000005;
            for(long double j=1; j<=d; j++)
            {
                long double x=j+ceil(d/(j+1));                 ///  if(x+ceil(d*1.0/(x+1))<=n)
               // cout<<x<<endl;
                if(x<=mn)
                {
                    mn=x;
                }
                else
                {
                    break;
                }
            }
            if(mn<=n)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
    }



    return 0;
}
