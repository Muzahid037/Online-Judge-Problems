///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
int preSum[1000000];
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1]) preSum[i+1]=1;
    }
    for(int i=1; i<=n; i++) preSum[i]+=preSum[i-1];
    // for(int i=0; i<=n; i++) cout<<preSum[i]<<"  ";
    int m,l,r;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>l>>r;
        cout<<preSum[r-1]-preSum[l-1]<<endl;
    }
    return 0;
}

