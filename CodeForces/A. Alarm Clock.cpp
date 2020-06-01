#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a==b || a<b)
        {
           cout<<b<<endl;
           continue;
        }
        else if(a>b)
        {
            if(c==d || c<d)
            {
                cout<<"-1"<<endl;
                continue;
            }
            ll baki=a-b;
            //cout<<"baki: "<<baki<<endl;
            ll time=c-d;
            // cout<<"time: "<<time<<endl;
            ll mul=(double)ceil((double)baki/(double)time);
             //cout<<"mul: "<<mul<<endl;
            ll ans=b+(c*mul);
            cout<<ans<<endl;
        }
    }

    return 0;
}
