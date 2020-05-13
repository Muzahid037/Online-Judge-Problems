#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll func(ll n,ll div5)
{
    for(ll i=5; i<=n; i++)
    {
        ll tmp=i;
        while(1)
        {
            if(i%5==0)
            {
                i/=5;
                div5++;
            }
            else
            {
                i=tmp;
                break;
            }
        }
    }
    //cout<<div2<<" "<<div5<<endl;
    return div5;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll trailingZeroes=func(n,0L);
        cout<<trailingZeroes<<endl;
    }

    return 0;
}



/*
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll func(ll n,ll div2,ll div5)
{
    for(ll i=2; i<=n; i++)
    {
        ll tmp=i;
        while(1)
        {
            if(i%2==0)
            {
                i/=2;
                div2++;
            }
            else if(i%5==0)
            {
                i/=5;
                div5++;
            }
            else
            {
                i=tmp;
                break;
            }
        }
    }
    //cout<<div2<<" "<<div5<<endl;
    return min(div2,div5);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll trailingZeroes=func(n,0L,0L);
        cout<<trailingZeroes<<endl;
    }

    return 0;
}
*/
