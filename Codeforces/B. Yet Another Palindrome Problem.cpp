#include<bits/stdc++.h>
using namespace std;

map<int,int>mp;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        int flag=0;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            //cout<<"mp[a[i] ="<<mp[a[i]]<<endl;
            if(mp[a[i]]==0)
            {
                mp[a[i]]=i;
            }
            else
            {
                if((i-mp[a[i]])>1)
                {
                    flag=1;
                }

            }
        }

        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        mp.clear();
    }


    return 0;
}
