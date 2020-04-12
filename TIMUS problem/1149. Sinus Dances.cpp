#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

map<int,int>mp;

int main()
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        while(flag==0)
        {
            cin>>x;
            if(x==-1)
            {
                flag=1;
            }
            else
            {
                if(mp[x]==0)
                {
                    mp[x]=1;
                }
                else
                {
                     mp[x]=0;
                }
            }
        }
    }

    return 0;
}

