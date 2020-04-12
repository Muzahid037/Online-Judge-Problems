#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1000000007;
vector<int>a;
set<int> st1;
bool isPossible(int st,int ed,int mx3)
{
    int flag=1,mymx=mx3;
    cout<<"mx3: "<<mx3<<endl;
    for(int i=st; i<=ed; i++)
    {
        // cout<<"a[st] : "<<a[st]<<endl;
        int x=a[i];
        st1.insert(x);
        mymx-=a[i];
        if(mymx<0)
        {
            flag=0;
            break;
        }
    }
    int ln=st1.size();
     cout<<"flag: "<<flag<<" mymx: "<<mymx<<"mx3: "<<mx3<<" ln: "<<ln<<endl;
    if(flag==1 && mymx==0 && mx3==ln)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        int mx[n+10];
        memset(mx,0,sizeof(mx));
        for(int i=0; i<n; i++)
        {
            // cout<<"bal"<<endl;
            cin>>x;
            a.push_back(x);
        }

        mx[n-1]=a[n-1];
        for(int i=n-2; i>=0; i--)
        {
            mx[i]=max(mx[i+1],a[i]);
        }

        int mx1=0,mx2=0;
        for(int i=0; i<n-1; i++)
        {
            mx1=max(mx1,a[i]);
            mx2=mx[i+1];
            cout<<"mx1: "<<mx1<<" mx2: "<<mx2<<endl;
            cout<<isPossible(0,i,mx1)<<" "<<isPossible(i+1,n-1,mx2)<<endl;
            if(isPossible(0,i,mx1)==true)
            {
                if(isPossible(i+1,n-1,mx2)==true)
                {
                    //cout<<mx1<<" "<<mx2<<endl;
                }
            }

        }

    }

    return 0;
}

