#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,x,p;
    cin>>n>>x;
    int cntp=0;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        cntp+=p;
    }
    if(cntp>x)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
