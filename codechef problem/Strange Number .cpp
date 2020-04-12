#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

int t;
cin>>t;
while(t--)
{
    int x,k;
    cin>>x>>k;
    if(x==1 && k==0)
    {
        cout<<"1"<<endl;
    }
    else if(x==2 && k==1)
    {
        cout<<"1"<<endl;
    }
    else if(x<101 && x>2 && (k==1 || k==2))
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
}
 return 0;
}
