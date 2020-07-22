///-----Bismillahir Rahmanir Rahim-----///

#include<bits/stdc++.h>
using namespace std;

///---FAST I/O---///
#define Boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///---DATA TYPE---///
typedef long long ll;



int main()
{
    Boost();

    int t;
    t=1;
    //cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        for(ll i=1;i<=n;i++)
        {
            ll maxMultipleOf_i_lessThanN=floor((n*1.0)/(i*1.0));///[we have to find :(1 * i)+(2 * i)+(3 * i)+.....+(maxMultipleOf_i_lessThanN * i)]///
                                                                ///                  =(1 + 2 + 3 +....+ maxMultipleOf_i_lessThanN) * i [formula: n*(n+1)/2]

            ll tmp= ((maxMultipleOf_i_lessThanN*(maxMultipleOf_i_lessThanN+1)*i)/2);
            ans+=tmp;
        }
        cout<<ans<<endl;

    }
    return 0;
}

///---hints:----///
/*
For a positive integer j, we define g(j) as the sum of multiples of j that does not exceed N.
Find sum[g(j);j=1...N],This g(X) is a sum of an arithmetic progression,and can be calculated faster than f(X).
Specifically, let Y=floor(N/X)(the maximum integer that does not exceed N/X), then g(X)=X+2X+...+YX=(1+2+...+Y)X=Y(Y+ 1)X/2,
so by using this formula, the problem can be solved in a total of O(N) time.
*/

