#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long T,j;
    cin>>T;
    for(j=0; j<T; j++)
    {
        long long n,i,ep=0,op=0,eq=0,oq=0;
        cin>>n;
        long long p[n+5];
        for(i=0; i<n; i++)
        {
            cin>>p[i];
            if(p[i]%2==0)
            {
                ep++;
            }
            else
            {
                op++;
            }
        }
        long long m;
        cin>>m;
        long long q[m+5];
        for(i=0; i<m; i++)
        {
            cin>>q[i];
            if(q[i]%2==0)
            {
                eq++;
            }
            else
            {
                oq++;
            }

        }

        cout<<(long long)(ep*eq)+(op*oq)<<endl;
    }

    return 0;
}
