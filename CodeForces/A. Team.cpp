#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p[3],ct=0,bt=0;
    cin>>n;
    for(int i=1;i<=n;i++){
    for(int i=0;i<3;i++)
    {
        cin>>p[i];
        if(p[i]==1){ct++;}
    }
    if(ct>=2){bt++;}
    ct=0;
    }
    cout<<bt<<endl;
    return 0;
}
