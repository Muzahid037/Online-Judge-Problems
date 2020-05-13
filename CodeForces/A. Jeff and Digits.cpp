#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int cnt5=0,cnt0=0;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x==5) cnt5++;
        else cnt0++;
    }
    if(cnt0<1) cout<<"-1"<<endl;
    else if(cnt5<9) cout<<0<<endl;
    else
    {
       string s="";
        int five=cnt5-(cnt5%9);
        for(int i=1; i<=five; i++) s+="5";
        for(int i=1; i<=cnt0; i++) s+="0";
        cout<<s<<endl;
    }
    return 0;
}
