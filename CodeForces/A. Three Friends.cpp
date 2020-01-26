#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,a[3],ans;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);

        if(a[0]==a[1] && a[1]==a[2]){}
        else if(a[0]==a[1] && a[1]!=a[2])
        {
            a[0]++;
            a[1]++;
            if(a[1]!=a[2])
            {
                a[2]--;
            }
        }
        else if(a[0]!=a[1] && a[1]==a[2])
        {
            a[0]++;
            if(a[0]!=a[1])
            {
                a[1]--;
                a[2]--;
            }
        }
        else
        {
            a[0]++;
            a[2]--;
        }

        ans=(a[2]-a[1])+(a[2]-a[0])+(a[1]-a[0]);
        cout<<ans<<endl;

    }

    return 0;
}
