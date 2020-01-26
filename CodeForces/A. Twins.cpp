#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,x=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    p=a[0];
    for(int i=1;i<n;i++){
        if(p==a[i]){x++;}
    }
    if(x==n&&x>=2){cout<<n<<endl;}
    else
    {
        cout<<n-1<<endl;
    }
}
