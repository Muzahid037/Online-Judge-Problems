#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int tmp=n;
        int tmp2=n;
        int cntNonZero=0;
        while(tmp2!=0)
        {
            int y=tmp2%10;
            if(y!=0)
            {
                cntNonZero++;
            }
            tmp2/=10;
        }
        cout<<cntNonZero<<endl;

        int zero=0;
        while(tmp!=0)
        {
            int x=tmp%10;
            if(x!=0)
            {
                cout<<x;
                int pos=zero;
                while(pos>0)
                {
                    cout<<"0";
                    pos--;
                }
            }
            cout<<" ";
            tmp/=10;
            zero++;
        }
        cout<<endl;
    }
    return 0;
}
