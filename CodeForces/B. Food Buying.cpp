#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int y=n;
        int cnt=1,xt=0;
        while(n>9)
        {
            xt++;
            //cnt*=2;
            n=(n%10);
            n++;
           // cout<<n<<endl;
        }
        cout<<xt+y<<endl;
    }




  return 0;
}
