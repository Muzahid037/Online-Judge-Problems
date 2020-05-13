#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char a[n+5][m+5];
    string ans="";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='-') ans+="-";
            else if((i+j)%2==0) ans+="B";
            else ans+="W";
        }
        ans+="\n";
    }
    cout<<ans<<endl;
    return 0;
}

///----------------------------///

/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,m;
    cin>>n>>m;
    char a[n+5][m+5];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) cin>>a[i][j];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]=='-') cout<<"-";
            else if((i+j)%2==0) cout<<"B";
            else cout<<"W";
        }
        cout<<"\n";
    }
    return 0;
}
*/
