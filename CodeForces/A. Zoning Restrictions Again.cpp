
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,H,m,l[55],r[55],h[55],realH[55];
    cin>>n>>H>>m;
    for(int i=1; i<=m; i++)
    {
        cin>>l[i]>>r[i]>>h[i];
    }
    for(int x=1; x<=n; x++)
    {
        realH[x]=H;
    }


//    for(int y=1; y<=n; y++)
//    {
//        cout<<"Real H Before="<<realH[y]<<" ";
//    }
//    cout<<endl;


    for(int p=1; p<=m; p++)
    {
        for(int k=l[p]; k<=r[p]; k++)
        {
            //cout<<"Change "<<realH[k];
            if(realH[k]>h[p])
            {realH[k]=h[p];}

           // cout<<" "<<realH[k]<<" ";
        }
       // cout<<endl;
    }

//
//      for(int q=1; q<=n; q++)
//    {
//        cout<<"Real H After="<<realH[q]<<" ";
//    }
//    cout<<endl;


    int res=0;
    for(int j=1; j<=n; j++)
    {
        int r=realH[j]*realH[j];
         res+=r;
    }

    cout<<res<<endl;




    return 0;
}
