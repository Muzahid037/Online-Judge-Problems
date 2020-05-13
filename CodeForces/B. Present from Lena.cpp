#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    int i,j,k;
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=2*(n-i)-1; j++)
        {
            cout<<" ";
        }
        cout<<"0";
        for(k=1; k<=i; k++)
        {
            cout<<" "<<k;
        }
        for(k=i-1; k>=0; k--)
        {
            cout<<" "<<k;
        }
        cout<<endl;
    }
    for(i=n-1; i>=0; i--)
    {
        for(j=0; j<=2*(n-i)-1; j++)
        {
            cout<<" ";
        }
        cout<<"0";
        for(k=1; k<=i; k++)
        {
            cout<<" "<<k;
        }
        for(k=i-1; k>=0; k--)
        {
            cout<<" "<<k;
        }
        cout<<endl;
    }

    return 0;
}


