#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
   // char c;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cin>>c;
        int n;
        cin>>n;
        int x,ans=0;
        for(int j=0;j<n;j++)
        {
            cin>>x;
            if(x>0)
           {
            ans+=x;
           }
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }




    return 0;
}
