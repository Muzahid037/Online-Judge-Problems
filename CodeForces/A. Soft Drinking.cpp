#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink=(k*l)/nl;
    int lime=(c*d);
    int salt=(p/np);
    int ans1=min(drink,lime);
    int ans2=min(ans1,salt);
    cout<<ans2/n<<endl;
    return 0;
}
