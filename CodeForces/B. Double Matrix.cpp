#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,q,i,j,n,m,a[55][55],b[55][55];
    cin>>n>>m;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>a[i][j];
        }

    }

    for(p=1; p<=n; p++)
    {
        for(q=1; q<=m; q++)
        {
            cin>>b[p][q];


            if(b[p][q]<a[p][q])
            {
                swap(a[p][q],b[p][q]);
            }
            if((a[p][q]<=a[p-1][q] || a[p][q]<=a[p][q-1] || b[p][q]<=b[p-1][q] || b[p][q]<=b[p][q-1]))
            {
                cout<<"Impossible"<<endl;
                return 0;
            }
        }




    }
    cout<<"Possible"<<endl;




    return 0;
}
