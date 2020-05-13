#include<bits/stdc++.h>
using namespace std;
typedef long double ll;
ll two=2;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        ll a,b;
        cin>>a>>b;
        cout<<fixed<<setprecision(1)<<(a+b)/two<<endl;
    }
    return 0;
}
