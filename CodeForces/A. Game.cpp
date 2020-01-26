#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,a[1000],t;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    if(n%2==0){cout<<a[(n/2)-1]<<endl;}
    else{cout<<a[n/2]<<endl;}
}
