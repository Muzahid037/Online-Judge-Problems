#include<bits/stdc++.h>
using namespace std;

int aa[105];
int bb[105];

int main()

{
    int n,a,x,b,y;
    cin>>n>>a>>x>>b>>y;
    memset(aa,0,sizeof(aa));
    memset(bb,0,sizeof(bb));


    if(a<=x)
    {
        for(int i=a-1; i<x; i++)
        {
            aa[i]=1;
        }
    }
    else
    {
        for(int i=x-1; i<a; i++)
        {
            bb[i]=1;
        }
    }

    if(b<y)
    {
        for(int i=b-1; i<y; i++)
        {
            aa[i]=1;
        }
    }
    else
    {
        for(int i=y-1; i<b; i++)
        {
            bb[i]=1;
        }
    }


//    for(int i=0;i<n;i++)
//    {
//        cout<<"aa["<<i<<"]= "<<aa[i]<<" "<<"bb["<<i<<"]= "<<bb[i]<<endl;
//    }







    int flag=0;

    if(a<x)
    {
        //if(aa[0]==1 && bb[n-1]==1){flag=1;}
        for(int i=a-1; i<x; i++)
        {
            if(aa[i]==1 && bb[i]==1)
            {
                flag=1;
            }
        }
    }
    else
    {
        for(int i=y-1; i<b; i++)
        {
            if(aa[i]==1 && bb[i]==1)
            {
                flag=1;
            }
        }
    }


    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }


    return 0;
}
