#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,a[105],b;
    cin>>n;
    int chka=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        chka+=a[i];
    }
    int cnt=0,suma=0,sumb=0;
    for(int i=0; i<n; i++)
    {
        cin>>b;
        sumb+=b;
        if(b==0 && a[i]==1)
        {
            cnt++;
        }
        else if(b==1 && a[i]==1)
        {
            suma++;
        }
    }

    // cout<<suma<<" "<<sumb<<" "<<cnt<<endl;

    if(chka==0 || sumb==n || suma==chka)
    {
        cout<<-1<<endl;
        return 0;
    }

    int x=1;
    while(1)
    {
        if((suma+(cnt*x))>sumb)
        {
            break;
        }
        x++;
    }

    cout<<x<<endl;


    return 0;

}
