#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

map<int,ll>mp;

int main()
{
    string s;
    cin>>s;

    int mxdgt=10;
    for(int i=0; i<s.size(); i++)
    {
        mxdgt=min(s[i]-'0',mxdgt);
    }
    cout<<max(mxdgt,1)<<endl;

    return 0;
}
