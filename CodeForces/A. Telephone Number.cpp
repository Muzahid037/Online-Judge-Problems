#include<bits/stdc++.h>
using namespace std;

char str[105];

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int flag=0,in;
        for(int j=1; j<=n; j++)
        {
            cin>>str[j];

        }
        for(int j=1; j<=n; j++)
        {
            if(str[j]=='8')
            {
                flag=1;
                in=j;
                break;
            }
        }
       cout<<"in= "<<n-in<<endl;




        if((n==11 && flag==1 && in==1) || (n>11 && flag==1 && n-in>=10))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
