#include<bits/stdc++.h>
using namespace std;
#define ini(n) scanf("%d",&n)
#define outi(n) printf("%d",n)
#define nl printf("\n")
#define pb push_back
#define mp make_pair

vector<int>snow;

int main()
{
    int n,x,d,a;
    ini(n);
    ini(x);
    ini(d);
    for(int i=0; i<n; i++)
    {
        ini(a);
        snow.pb(a);
    }
    int currDay=0;
    int stored=0;
     int ans;
    while(1)
    {
        for(int i=0; i<currDay; i++)
        {
            snow[i]-=d;
            if(snow[i]>0)
            {
                stored+=snow[i];
            }
        }
        stored+=snow[currDay];
        if(stored>=x)
        {
            ans=currDay;
            break;
        }
        stored=0;
        currDay++;
    }
    cout<<ans+1<<endl;
    return 0;
}

