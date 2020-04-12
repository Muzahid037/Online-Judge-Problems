#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int n,a[25];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
//    for(int i=0; i<n; i++)
//    {
//        cout<<a[i]<<" ";
//    }

    int i=0,left=0,right=0,flag=0,j=n-1;
    while(1)
    {
        sort(a,a+n-2*i);

        left+=(a[i]+a[j]);
        i++;
        j--;
        if(i==j)
        {
            flag=1;
            break;
        }
        right+=(a[i]+a[j]);
        i++;
        j--;
        if(i==j)
        {
            flag=1;
            break;
        }
    }

    if(left>=right && flag==1)
    {
        right+=a[i];
    }
    else if(flag==1)
    {
        left+=a[i];
    }
    cout<<abs(left-right)<<endl;

    return 0;
}
