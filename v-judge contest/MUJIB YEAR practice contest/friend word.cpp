#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int isPl(string s)
{
    int n=s.size();
    int x=0,y=n-1;
    int flag=1;
    while(1)
    {
        if(s[x]!=s[y])
        {
            flag=0;
            break;
        }
        x++;
        y--;
        if(x==y || x>y)
        {
            break;
        }
    }
    return flag;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {

        int a;
        cin>>a;
        int cnt=0;
        for(int j=1; j<=a; j++)
        {
            string s;
            cin>>s;
            if(isPl(s)==1)
            {
                cnt++;
            }
            //cout<<cnt<<endl;
        }
        cout<<"Operation "<<i<<": #"<<cnt<<endl;

    }

    return 0;
}
