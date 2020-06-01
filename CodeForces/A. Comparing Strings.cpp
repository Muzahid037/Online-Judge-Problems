#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string a,b;
    cin>>a>>b;
    int lna=a.size(),lnb=b.size(),cnt=0,flag=0;
    char toa='?',tob='?';
    if(lna!=lnb)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0; i<lna; i++)
    {
        if(a[i]==b[i]) continue;
        if(a[i]!=b[i])
        {
            if(toa=='?')
            {
                tob=a[i];
                toa=b[i];
            }
            else
            {
                if(a[i]!=toa || b[i]!=tob)
                {
                    flag=1;
                }
            }
            cnt++;
        }
    }
    if(flag==1 || cnt!=2) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;
}
