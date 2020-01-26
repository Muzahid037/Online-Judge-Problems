#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x,y;
    cin>>a>>b;

    a=(a*10);
    b=(b*10);
    x=a;
    y=b;
    int i,j;
    for(j=0; j<9; j++)
    {
        a++;
        if((a+1)==b)
        {
            cout<<a<<" "<<b<<endl;
            return 0;
        }

    }
    for(j=0; j<9; j++)
    {

        y++;
        if((x+1)==y)
        {
            cout<<x<<" "<<y<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;

    return 0;
}
