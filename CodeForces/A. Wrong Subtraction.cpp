#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k;
    int n;
    cin>>k>>n;
    for(int i=0;i<n;i++){
        if(k%10==0){k=k/10;}
        else if(k%10>0&&k>0){k=k-1;}
    }
    cout<<k<<endl;
}
