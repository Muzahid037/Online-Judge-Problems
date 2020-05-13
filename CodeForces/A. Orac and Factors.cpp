#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int findlowDiv(int n)
{
    int limit=sqrt(n)+1;
    int ans=-1;
    for(int i=3; i<=limit; i++)
    {
        if(n%i==0)
        {
            ans=i;
            break;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n%2==0)
        {
            cout<<n+k*2<<endl;
        }
        else
        {
            int minDiv=findlowDiv(n);
            if(minDiv==-1)
            {
                cout<<n+n+(k-1)*2<<endl;
            }
            else
            {
                cout<<n+minDiv+(k-1)*2<<endl;
            }
        }
    }
    return 0;
}
