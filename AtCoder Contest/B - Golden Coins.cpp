///*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*///
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int ans1,ans2;
    ans1=x/500;
    ans1*=1000;
    x=x%500;
    ans2=x/5;
    ans2*=5;
    cout<<ans1+ans2<<endl;
    return 0;
}
