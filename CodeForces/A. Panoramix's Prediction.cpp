#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
    if(x%2==0){return false;}
    for(int i=3;i*i<=x;i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int x=n+1;
    while(isPrime(x)==false)
    {
        x++;
    }
    if(x==m){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}


