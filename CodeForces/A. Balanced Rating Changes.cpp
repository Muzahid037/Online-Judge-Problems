#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,a,j=0,k=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a;

        if(a%2==0)
        {
            cout<<a/2<<endl;
        }
        else if(a%2<0 && j==0)
        {
            cout<<(a/2+a%2)<<endl;
            j++;
        }
        else if(a%2<0 && j!=0)
        {
            cout<<a/2<<endl;
            j--;
        }
        else if(a%2>0 && k==0)
        {
            cout<<(a/2+a%2)<<endl;
            k++;
        }
        else if(a%2>0 && k!=0)
        {
            cout<<a/2<<endl;
            k--;
        }
    }
    j=0;
    k=0;
    return 0;
}
