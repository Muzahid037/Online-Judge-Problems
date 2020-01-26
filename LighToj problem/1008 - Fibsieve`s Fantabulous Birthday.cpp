#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
ll t;
cin>>t;
for(ll i=1;i<=t;i++)
{
    ll s,row,col;
    cin>>s;
    cout<<"Case "<<i<<": ";

    ll sqt=ceil(sqrt(double(s)));
    //cout<<sqt<<endl;
    ll ext=(sqt*sqt)-s;
    if(ext<sqt)
    {
        row=ext+1;
        col=sqt;
    }
    else
    {
        row=sqt;
        col=s-((sqt-1)*(sqt-1));
    }

    if(sqt%2==0){swap(row,col);}
    cout<<row<<" "<<col<<endl;

}



    return 0;
}

