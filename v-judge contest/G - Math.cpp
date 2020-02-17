#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        double x=b*log(a);
        double y=d*log(c);

        if(x>y)
        {
            cout<<">"<<endl;
        }
        else
        {
            cout<<"<"<<endl;
        }
    }

    return 0;
}
