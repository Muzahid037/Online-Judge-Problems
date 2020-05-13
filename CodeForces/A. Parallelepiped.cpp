#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll s1,s2,s3;
    cin>>s1>>s2>>s3;
    ll a=sqrt((s1*s3)/s2);
    ll c=s3/a;
    ll b=s2/c;
    cout<<4*(a+b+c)<<endl;
    return 0;
}


