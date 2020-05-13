#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    cin>>s;
    ll len=s.size();
    ll num=0,ans=0;
    for(ll i=0; i<len; i++)
    {
        if(i==0)
        {
            num=s[i]-'0';
        }
        else
        {
            num=num*10+s[i]-'0';
        }
        cout<<num<<endl;
        if(num%2019==0)
        {
            ans++;
            i--;
            num=0;
        }
    }
    cout<<ans<<endl;

    return 0;
}





