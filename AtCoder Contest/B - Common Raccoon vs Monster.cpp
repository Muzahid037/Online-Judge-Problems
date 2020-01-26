#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

ll h,n,x;
cin>>h>>n;

for(ll i=0;i<n;i++)
{
    cin>>x;
    h-=x;
}
if(h>0)
{
    cout<<"No"<<endl;
}
else
{
    cout<<"Yes"<<endl;
}


    return 0;
}

