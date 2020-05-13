#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b,c,k;
    cin>>a>>b>>c>>k;
    if(a==k)
    {
       cout<<a<<endl;
       return 0;
    }
    else if(a>k)
    {
        cout<<k<<endl;
        return 0;
    }
    else if(a<k)
    {
        ll maxSum=a;
        ll baki=k-a;
        if(baki<=b)
        {
            cout<<maxSum<<endl;
            return 0;
        }
        else if(baki>b)
        {
            ll minusKoro=baki-b;
            cout<<maxSum-minusKoro<<endl;
        }
    }


    return 0;
}
