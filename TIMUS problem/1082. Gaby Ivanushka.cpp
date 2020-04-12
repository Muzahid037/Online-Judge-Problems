#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    for(int i=2; i<n+2; i++)
    {
        cout<<((i*i)+(3*i)-4)/2<<" ";
    }
    cout<<'\n';
    return 0;
}
