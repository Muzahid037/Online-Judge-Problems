#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n,cntft=0,cntsc=0;
    cin>>n;
    string s;
    cin>>s;
    vector<int>ft,sc;
    for(int i=0; i<n; i++) ft.pb(s[i]-'0');
    for(int i=n; i<2*n; i++) sc.pb(s[i]-'0');
    sort(ft.begin(),ft.end());
    sort(sc.begin(),sc.end());
    for(int i=0; i<n; i++)
    {
        if(ft[i]>sc[i]) cntft++;
        else if(ft[i]<sc[i]) cntsc++;
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(cntft==n || cntsc==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
