#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[10][10];
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++) cin>>a[i][j];
    }
    int mx=0,pos[]= {1,2,3,4,5};
    do
    {
        int x=0,y=0,z=0,m=0;
        x=a[pos[0]][pos[1]]+a[pos[1]][pos[0]]+a[pos[2]][pos[3]]+a[pos[3]][pos[2]];
        y=a[pos[1]][pos[2]]+a[pos[2]][pos[1]]+a[pos[3]][pos[4]]+a[pos[4]][pos[3]];
        z=a[pos[2]][pos[3]]+a[pos[3]][pos[2]];
        m=a[pos[3]][pos[4]]+a[pos[4]][pos[3]];
//        cout<<"pos: "<<pos[0]<<" "<<pos[1]<<" "<<pos[2]<<" "<<pos[3]<<" "<<pos[4]<<endl;
//        cout<<"xyzm: "<<x<<" "<<y<<" "<<z<<" "<<m<<endl;
        mx=max(mx,(x+y+z+m));
//        cout<<"mx : "<<mx<<endl;
    }
    while (next_permutation(pos,pos+5));
    cout<<mx<<endl;
    return 0;
}
