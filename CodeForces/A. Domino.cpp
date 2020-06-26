#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,cntLeft=0,cntRight=0,eo=0,oe=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        cntLeft+=x;
        cntRight+=y;
        if(x%2==0 && y%2==1) eo++;
        else if(x%2==1 && y%2==0) oe++;
    }
    if(cntLeft%2==0 && cntRight%2==0) cout<<"0"<<endl;
    else if((eo+oe==0) || (cntLeft%2)!=(cntRight%2)) cout<<"-1"<<endl;
    else if(eo>0 || oe>0) cout<<"1"<<endl;
    else cout<<"-1"<<endl;

    return 0;
}

