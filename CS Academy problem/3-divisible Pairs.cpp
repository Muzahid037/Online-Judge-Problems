
#include<bits/stdc++.h>
using namespace std;

#define MX 100005

int main()
{
    long long int n,z;
    cin>>n;
    long long int cnt3=0,cnt2=0,cnt1=0;
    for(long long int i=0; i<n; i++)
    {
        cin>>z;
        if(z%3==0)
        {
            cnt3++;
        }
        else if(z%3==2)
        {
            cnt2++;
        }
        else if(z%3==1)
        {
            cnt1++;
        }
    }

//    if(cnt1!=0 && cnt2!=0)
//    {
//        x=max(cnt2,cnt1);
//    }
    //int y=x+cnt3;

    cout<< ((cnt3*(cnt3-1))/2) + (cnt1*cnt2)<<endl;


    return 0;
}
