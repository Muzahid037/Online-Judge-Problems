#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x,k;
//vector<int>pf;
//map<int,int>pfPower;
void primeFact()
{
    ll div=0;
    ll limit=sqrt(x+1);
    int cnt;
    if(x%2==0)
    {
        cnt=0;
        while(x%2==0)
        {
            cnt++;
            x/=2;
        }
        div+=cnt;
       // pf.push_back(2);
        //pfPower[2]=cnt;
    }

    for(ll i=3; i<=limit; i+=2)
    {
        if(x%i==0)
        {
            cnt=0;
            while(x%i==0)
            {
                cnt++;
                x/=i;
            }
            div+=cnt;
            //pf.push_back(i);
           // pfPower[i]=cnt;
        }
    }
    if(x>1)
    {
       // pf.push_back(x);
       // pfPower[x]=1;
        div++;
    }
    //int pfSize=pf.size();
    //cout<<div<<endl;
    if(div<k)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<"1"<<endl;
    }
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>x>>k;
        primeFact();
    }

    return 0;
}
