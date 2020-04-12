#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a;
    int total=0;
    for(int i=1; i<=n; i++)
    {
        total+=5*i;
        a.push_back(total);
    }
    int key=240-k;
    if(key>a[n-1])
    {
        cout<<n<<endl;
    }
    else
    {
    vector<int>::iterator upper;
    upper=upper_bound(a.begin(),a.end(),key);
    cout<<upper-a.begin()<<endl;

    }
    return 0;
}
