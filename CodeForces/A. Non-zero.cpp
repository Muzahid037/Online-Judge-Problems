#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int x[105],cnt0=0,cntPos=0,cntNeg=0;
        for(int j=0;j<n;j++)
        {
            cin>>x[j];
            if(x[j]==0)
            {
                cnt0++;
                cntPos++;
            }
            else if(x[j]>0)
            {
                cntPos+=x[j];
            }
            else
            {
                cntNeg+=abs(x[j]);
            }
        }
        //cout<<cnt0<<" "<<cntPos<<" "<<cntNeg<<endl;
        if(cntPos==cntNeg)
        {
            cnt0++;
        }
       cout<<cnt0<<endl;
    }




 return 0;
}
