#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll distance(int x1,int y1,int x2,int y2)
{
    ll x=pow((x1-x2),2);
    ll y=pow((y1-y2),2);
    ll dis=sqrt(x+y);
    return dis;

}
int main()
{
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        ll left,right,down,up,x,y,x1,y1,x2,y2;
        cin>>left>>right>>down>>up>>x>>y>>x1>>y1>>x2>>y2;
        ll leftDistance=distance(x1,0,x,0);
        ll rightDistance=distance(x2,0,x,0);
        ll upDistance=distance(0,y2,0,y);
        ll downDistance=distance(0,y1,0,y);
        // cout<<leftDistance<<" "<<rightDistance<<" "<<upDistance<<" "<<downDistance<<endl;
        if( ((leftDistance+rightDistance)==0 && (left+right)!=0) || ((upDistance+downDistance)==0 && (up+down)!=0) )
        {
            cout<<"No"<<endl;
            continue;
        }
        ll goleft=0;
        ll goright=0;
        ll goup=0;
        ll godown=0;
        ll xax=right-left;
        ll yax=up-down;
        if(xax<0)
        {
            goleft=abs(xax);
        }
        else
        {
            goright=xax;
        }
        if(yax<0)
        {
            godown=abs(yax);
        }
        else
        {
            goup=yax;
        }
        if(goleft<=leftDistance && goright<=rightDistance && goup<=upDistance && godown<=downDistance)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }

    return 0;
}



/*

        ll xl=x+x1;
        ll xr=x2+x;

//        cout<<x1<<endl;
//        cout<<x<<endl;
//        cout<<xl<<" "<<xr<<endl;
        //x+=xa;
        ll yd=y+y1;
        ll yu=y2+y;
        //cout<<yd<<" "<<yu<<endl;
        //y+=ya;
        ll a=right-left;
        ll b=up-down;
       //cout<<a<<" "<<b<<endl;
       cout<<xl<<" "<<xr<<endl;
         if( ((a<0 && x1<=a && a<=x) || (a>0 && x2>=a && a>=x) || (a==0)) && ((b<0 && y1<=b && b<=y) || (b>0 && y2>=b && b>=y) || (b==0)) )
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }



*/
