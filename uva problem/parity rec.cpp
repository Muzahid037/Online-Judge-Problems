#include<bits/stdc++.h>
using namespace std;
int bin(int b,int k)
{
    int x;
    if(b!=0)
    {
        x=b%2;
        if(x==1){k++;}
        cout<<x;
        bin(b/2,k);
    }
}
int main()
{
    int n,a;
    cin>>n;
    bin(n,a);
}
