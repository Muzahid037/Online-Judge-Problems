///Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

map <int, int> mp;
int a[1005];

int main()
{
    int t;
    cin>>t;

   for(int i=0;i<t;i++)
    {
        int n,s,k;

        cin>>n>>s>>k;

        for(int i=0;i<k;i++)
        {
            cin>>a[i];

            mp[a[i]]=1;
        }

        int s1=s;
        int step1=-1;
        int cnt = 0;
        int flag1 = 0;

        while(1)
        {
            if(mp[s1]==0)
            {
                step1 = cnt;
                break;
            }
            s1++;
            cnt++;
            if(s1>n)
            {
                flag1 = 1;
                break;
            }
        }

         cnt = 0;

        int s2 = s;
        int step2 = -1;

        while(1)
        {
            if(mp[s2]==0)
            {
                step2 = cnt;
                break;
            }
            s2--;
            cnt++;
            if(s2==0)
            {
                break;
            }
        }

        if(step1==-1)
        {
            cout<<step2<<endl;
        }
        else if(step2==-1)
        {
            cout<<step1<<endl;
        }
        else
        {
            cout<<min(step1,step2)<<endl;
        }
        mp.clear();
    }



    return 0;
}
