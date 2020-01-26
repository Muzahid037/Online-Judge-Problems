#include<bits/stdc++.h>
using namespace std;

char a[200005];

int main()
{
    int n,x,y,cnt=0;
    cin>>n>>x>>y;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];

    }
    if(a[n-y]=='0')
    {
        cnt++;
    }
//    cout<<a[n-y]<<endl;
//
//   cout<<"cnt= "<<cnt<<endl;

    for(int i=n; i>n-x; i--)
    {

        if(i!=n-y && a[i]=='1')
        {
            cnt++;
        }

    }


    cout<<cnt<<endl;
    return 0;
}
