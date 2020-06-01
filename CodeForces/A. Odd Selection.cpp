#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a,e=0,o=0;
        cin>>n>>x;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            if(a%2==0) e++;
        }
        o=n-e;
        if(o==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        o--;
        x--;
        while(x>1 && o>1)
        {
            o-=2;
            x-=2;
        }
        x-=e;
        if(x<=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

///--------------------------------------///

/*

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)
#define sf scanf
#define pf printf
#define pb push_back
#define F first
#define S second
#define dbg(x,y,z) cout<<"x: "<<x<<" y: "<<y<<" z: "<<z<<endl;

int main()
{
    BOOST

    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        ll n,x,a,cntEven=0,f=0,cntOdd=0;
        cin>>n>>x;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            if(a%2==0) cntEven++;
            else cntOdd++;
        }
        if(cntOdd==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cntOdd--;
        x--;
        while(cntOdd>1 && x>1)
        {
            cntOdd-=2;
            x-=2;
        }
        //dbg(cntEven,cntOdd,x);
        while(cntEven>0 && x>0)
        {
            cntEven--;
            x--;
        }
        //dbg(cntEven,cntOdd,x);
        if(x==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
*/
