#include<bits/stdc++.h>
using namespace std;
long long a[200005];
vector<long long>pos;
int main()
{
    long long q,n,k,x;
    cin>>q;
    for(long long i=0; i<q; i++)
    {
        cin>>n>>k;
        x=0;
        for(long long j=1; j<=n; j++)
        {
            cin>>a[j];
            if((x+a[j])%2!=0)
            {
                pos.push_back(j);
                x=0;
            }
            else if((x+a[j])%2==0)
            {
                x+=a[j];
            }
        }
        if(pos.size()==k)
        {
            cout<<"YES"<<endl;
            for(long long m=0; m<k-1; m++)
            {
             cout<<pos[m]<<" ";
            }
            cout<<pos[k-1]<<endl;
        }
        else if(pos.size()>k)
        {
            if((pos.size()-(k-1))%2!=0)
            { cout<<"YES"<<endl;
                for(long long m=0; m<k-1; m++)
            {
             cout<<pos[m]<<" ";
            }
            cout<<n<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
        pos.clear();
    }

    return 0;
}
