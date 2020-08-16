///"--------------------Bismillahir Rahmanir Rahim"-----------------------///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 777777444444;
vector<ll>lucky;
void findLucky(ll x)
{
    if(x>inf) return;
    ll tmp=x,cnt7=0,cnt4=0,cnt=0;
    while(tmp!=0)
    {
        cnt++;
        if(tmp%10==7) cnt7++;
        else if(tmp%10==4) cnt4++;
        tmp/=10;
    }
    if(cnt7==cnt4 && 2LL*cnt7==cnt) lucky.push_back(x);
    findLucky(10LL*x+7LL);
    findLucky(10LL*x+4LL);
}
int main()
{
    findLucky(0);
    sort(lucky.begin(),lucky.end());
    ll n;
    cin>>n;
    ll lb=lower_bound(lucky.begin(),lucky.end(),n)-lucky.begin();
    cout<<lucky[lb]<<endl;
    return 0;
}


