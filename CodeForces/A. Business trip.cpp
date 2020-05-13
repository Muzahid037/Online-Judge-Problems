#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int k,month[12];
    cin>>k;
    for(int i=0; i<12; i++) cin>>month[i];
    sort(month,month+12);
    reverse(month,month+12);
    int ans=0;
    while(k>0 && ans<12) k-=month[ans++];
    if(k>0) cout<<"-1"<<endl;
    else cout<<ans<<endl;
    return 0;
}

