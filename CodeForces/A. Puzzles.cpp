///Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a[55];
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }

    sort(a,a+m);



    int idx=m-n;

    int dif[idx+5];

    if(!idx>0)
    {
        cout<<a[n-1]-a[0]<<endl;
    }

    else
    {

        for(int i=0; i<=idx; i++)
        {
            dif[i]=a[i+n-1]-a[i];
          //  cout<<i<<"= "<<dif[i]<<endl;
        }
        sort(dif,dif+(idx+1));
        cout<<dif[0]<<endl;

    }

    return 0;
}
