#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],i,k=0;
    while(scanf("%d",&n))
    {
        if(n==0){break;}
        i=0;
        while(n!=0)
        {
            a[i]=n%2;
            n=n/2;
            i++;
        }
        cout<<"The parity of ";
        for(int j=i-1;j>=0;j--)
        {
            cout<<a[j];
            if(a[j]==1){k++;}
        }
        cout<<" is "<<k<<" (mod 2)."<<endl;
        k=0;
    }
    return 0;
}
