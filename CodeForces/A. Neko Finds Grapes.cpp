#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m,ne=0,no=0,me=0,mo=0,x,y;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x%2==0)
        {
            ne++;
        }
        else
        {
            no++;
        }
    }
    for(int i=0; i<m; i++)
    {
        cin>>x;
        if(x%2==0)
        {
            me++;
        }
        else
        {
            mo++;
        }
    }
     x=min(ne,mo);
     y=min(no,me);
    cout<<x+y<<endl;
    return 0;
}
