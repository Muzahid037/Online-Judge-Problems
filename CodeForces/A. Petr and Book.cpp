#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    int week[10];
    for(int i=0; i<7; i++)cin>>week[i];
    int day=0;
    while(n>0)
    {
        n-=week[day%7];
        day++;
    }
    if(day%7==0)cout<<"7"<<endl;
    else cout<<day%7<<endl;
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    int week[10];
    for(int i=1; i<=7; i++)
    {
        cin>>week[i];
    }
    int cnt=n,ans,flag=0;
    while(1)
    {
        for(int i=1; i<=7; i++)
        {
            cnt-=week[i];
            if(cnt<1)
            {
                ans=i;
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}
*/

