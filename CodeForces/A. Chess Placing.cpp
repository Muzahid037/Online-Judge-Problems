#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],t,cto=0,cte=0,even=2,odd=1,tmp,x
    ,y;
    cin>>n;
    for(int i=0; i<n/2; i++)
    {
        cin>>a[i];
    }
    if(n==2)
    {
        cout<<"0"<<endl;
        return 0;
    }
    for(int i=0; i<n/2-1; i++)
    {
        for(int j=i+1; j<n/2; j++)
        {
            if(a[i]>a[j])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(int i=0; i<n/2; i++)
    {
        x=even-a[i];
        if(x<0)
        {
            x=(-1)*x;
        }
        cte=cte+x;
             if(cte<0)
        {
            cte=(-1)*cte;
        }
        y=odd-a[i];
        if(y<0)
        {
            y=(-1)*y;
        }
        cto=cto+y;
          if(cto<0)
        {
            cto=(-1)*cto;
        }
        even+=2;
        odd+=2;
    }
    if(cte<cto)
    {
        cout<<cte<<endl;
    }
    else
    {
        cout<<cto<<endl;
    }
}
