#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,x;
    cin>>n;
    vector<ll>powerOfSoldier;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        powerOfSoldier.push_back(x);
    }
    sort(powerOfSoldier.begin(),powerOfSoldier.end());
    ll round;
    cin>>round;
    for(ll i=0; i<round; i++)
    {
        ll powerOfBishu;
        cin>>powerOfBishu;
        ll low=0,high=n-1,mid,ansIdx=-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(powerOfSoldier[mid]==powerOfBishu)
            {
                ansIdx=mid;
                low=mid+1;  ///paisi tarporo r8 a jaite hobe
            }
            else if(powerOfSoldier[mid]<powerOfBishu)
            {
                ansIdx=mid;
                low=mid+1;
            }
            else if(powerOfSoldier[mid]>powerOfBishu)
            {
                high=mid-1;
            }
        }
        //cout<<ansIdx<<endl;
        if(ansIdx==-1)
        {
            cout<<"0 0"<<endl;
        }
        else
        {
            ll sumOfPowers=0;
            for(ll i=0; i<=ansIdx; i++)
            {
                sumOfPowers+=powerOfSoldier[i];
            }
            cout<<ansIdx+1<<" "<<sumOfPowers<<endl;
        }
    }

    return 0;
}
