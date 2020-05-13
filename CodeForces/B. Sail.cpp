#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,sx,sy,ex,ey;
ll xdiff,ydiff;
void plusMinusXaxis(char c)
{
    if(xdiff>0 && c=='E')
    {
        xdiff--;
        sx++;
    }
    else if(xdiff<0 && c=='W')
    {
        xdiff++;
        sx--;
    }
}
void plusMinusYaxis(char c)
{
    //cout<<sy<<" ";
    if(ydiff>0 && c=='N')
    {
        ydiff--;
        sy++;
    }
    else if(ydiff<0 && c=='S')
    {
        ydiff++;
        sy--;
    }
}

int main()
{
    cin>>t>>sx>>sy>>ex>>ey;
    xdiff=ex-sx;
    ydiff=ey-sy;
   // cout<<xdiff<<" "<<ydiff<<endl;
    string s;
    cin>>s;
    ll ans=0,flag=0;
    for(ll i=0; i<t; i++)
    {
        if(s[i]=='E' || s[i]=='W')
        {
            plusMinusXaxis(s[i]);
        }
        else
        {
            plusMinusYaxis(s[i]);
        }
        ans++;
         if(sx==ex && sy==ey)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }

    return 0;
}
