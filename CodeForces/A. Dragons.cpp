#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct dragons
{
    int dStrength;
    int bonousPoint;
};
bool cmp(dragons x,dragons y)
{
    return x.dStrength<y.dStrength;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int  kStrength,n;
    cin>>kStrength>>n;
    dragons drg[n+5];
    for(int i=0; i<n; i++) cin>>drg[i].dStrength>>drg[i].bonousPoint;
    sort(drg,drg+n,cmp);
    int flag=0;
    for(int i=0; i<n; i++)
    {
        //cout<<kStrength<<" "<<drg[i].dStrength<<endl;
        if(kStrength<=drg[i].dStrength)
        {
            flag=1;
            break;
        }
        else kStrength+=drg[i].bonousPoint;
    }
    if(flag==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
