///"--------------------Bismillahir Rahmanir Rahim"-----------------------///
///"--------------------Bismillahir Rahmanir Rahim"-----------------------///
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m+5][5];
    map<int,int>dressColor;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=3; j++)
        {
            cin>>a[i][j];
            if(i==1) dressColor[a[i][j]]=j;
        }
    }
    for(int i=2; i<=m; i++)
    {
        int one=0,two=0,three=0;
        vector<int>notColored,color;
        for(int j=1; j<=3; j++)
        {
            if(dressColor[a[i][j]]==1) one++;
            else if(dressColor[a[i][j]]==2) two++;
            else if(dressColor[a[i][j]]==3) three++;
            else notColored.pb(a[i][j]);
        }
        if(one==0) color.pb(1);
        if(two==0) color.pb(2);
        if(three==0) color.pb(3);

        for(int j=0; j<notColored.size() && color.size(); j++) dressColor[notColored[j]]=color[j];
    }
    for(int i=1; i<=n; i++)
    {
        if(i==n) cout<<dressColor[i]<<endl;
        else cout<<dressColor[i]<<" ";
    }
    return 0;
}


///Another A/C sol:
/*

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m+5][5];
    map<int,int>dressColor;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=3; j++)
        {
            cin>>a[i][j];
            if(i==1) dressColor[a[i][j]]=j;
        }
    }
    for(int i=2; i<=m; i++)
    {
        int one=0,two=0,three=0;
        vector<int>notColored,color;
        for(int j=1; j<=3; j++)
        {
            if(dressColor[a[i][j]]==1) one++;
            else if(dressColor[a[i][j]]==2) two++;
            else if(dressColor[a[i][j]]==3) three++;
            else notColored.pb(a[i][j]);
        }
        if(one==0) color.pb(1);
        if(two==0) color.pb(2);
        if(three==0) color.pb(3);

        for(int j=0; j<notColored.size() && color.size(); j++) dressColor[notColored[j]]=color[j];
    }
    for(int i=1; i<=n; i++)
    {
        if(i==n) cout<<dressColor[i]<<endl;
        else cout<<dressColor[i]<<" ";
    }
    return 0;
}
*/

