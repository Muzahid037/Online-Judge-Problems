#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x,cnt1=0,cnt2=0,cnt3=0,cnt4=0,tx;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x==1)
        {
            cnt1++;
        }
        if(x==2)
        {
            cnt2++;
        }
        if(x==3)
        {
            cnt3++;
        }
        if(x==4)
        {
            cnt4++;
        }
    }
    tx=cnt4+cnt3+cnt2/2;
    cnt2%=2;
    cnt1-=cnt3;

    if(cnt2==1)
    {
        tx++;
        cnt1-=2;
    }
    if(cnt1>0)
    {
        tx+=cnt1/4;
        cnt1%=4;
        if(cnt1!=0)
        {
            tx++;
            cnt1=0;
        }
    }

    cout<<tx<<endl;


    return 0;
}
