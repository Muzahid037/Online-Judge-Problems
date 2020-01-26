#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int cnt1=0,cnt2=0;
        cin>>a>>b>>c;
        int x=a;
        int y=b;
        int z=c;

        while(a>=1  &&  b>=2)
        {
            a--;
            b-=2;
            cnt1++;
        }
        while(b>=1 && c>=2)
        {
            b--;
            c-=2;
            cnt1++;
        }
        while(y>=1 && z>=2)
        {
            y--;
            z-=2;
            cnt2++;
        }
        while(x>=1 && y>=2)
        {
            x--;
            y-=2;
            cnt2++;
        }
        int cnt=max(cnt1,cnt2);
        cout<<cnt*3<<endl;
        cnt=0;
    }


    return 0;
}
