#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i;
    char s[1000];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s[i];
    }
    s[i]='\0';
    if(n==1)
    {
        if(s[0]=='0')
        {
            cout<<"No"<<endl;
            return 0;
        }
        else
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    else
    {
        t=s[0];
        for(int i=1; i<n; i++)
        {
            if(t==s[i])
            {
                cout<<"No"<<endl;
                return 0;
            }
            else
            {
                t=s[i];
            }
        }
        cout<<"Yes"<<endl;
    }
    return 0;
}
