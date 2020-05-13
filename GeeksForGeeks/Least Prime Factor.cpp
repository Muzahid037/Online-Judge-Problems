#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>num;
int leastPrimeFact(int n)
{
    num[1]=1;
    for(int i=2;i<=n;i+=2)
    {
        num[i]=2;
    }
    for(int i=3;i<=n;i+=2)
    {

    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int lpf=leastPrimeFact(n);

    }




    return 0;
}
