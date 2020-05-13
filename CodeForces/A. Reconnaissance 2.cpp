#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    int x[n+5];
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
    }
    int mn=1009;
    int ft=0,sd=1;
    for(int i=0; i<n; i++)
    {
        int tmp=abs(x[i]-x[(i+1)%n]);
        if(tmp<mn)
        {
            mn=tmp;
            ft=i;
            sd=(i+1)%n;
        }
    }
    cout<<ft+1<<" "<<sd+1<<endl;
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    int x[n+5];
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
    }
    int mn=1009;
    int ft=0,sd=1;
    for(int i=1; i<n+1; i++)
    {
        int tmp=abs(x[(i-1)%n]-x[i%n]);
        if(tmp<mn)
        {
            mn=tmp;
            ft=i-1;
            sd=i;
        }
    }
    cout<<ft+1<<" "<<(sd%n)+1<<endl;
    return 0;
}

*/
