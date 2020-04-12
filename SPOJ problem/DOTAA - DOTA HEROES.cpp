#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,d,health,cnt=0;
        cin>>n>>m>>d;
        while(n--)
        {
            cin>>health;
            if(health>d)
            {
                cnt+=(health%d)==0?((health/d)-1):(health/d);
            }
        }
        cnt<m?cout<<"NO"<<endl:cout<<"YES"<<endl;
    }
    return 0;
}


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,d;
        cin>>n>>m>>d;
        vector<int>healths;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            healths.push_back(x);
        }
        if(n<m)
        {
            cout<<"NO"<<endl;
            continue;
        }
        sort(healths.begin(),healths.end());
        reverse(healths.begin(),healths.end());
        int flag=0,j=0;
        int hit=healths[j];
        for(int i=0; i<m; i++)
        {
            hit-=d;
            if(hit<1)
            {
                flag=1;
                break;
            }
            if(hit<=d)
            {
                hit=healths[++j];
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
*/
