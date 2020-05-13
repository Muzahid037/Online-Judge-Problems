#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+10];
        int all[n+10];
        set<int>st;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            st.insert(a[i]);
            all[i+1]=i+1;
        }
        int diff=st.size();
        if(n==k)
        {
            cout<<n<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
            continue;
        }
        if(diff>k)
        {
            cout<<"-1"<<endl;
            continue;
        }
        else if(diff==k)
        {
            cout<<n*st.size()<<endl;
            for(int i=0; i<n; i++)
            {
                for(set<int>::iterator it=st.begin(); it!=st.end(); it++)
                {
                    cout<<*it<<" ";
                }
            }
            cout<<endl;

        }
        else if(diff<k)
        {
            int sz=st.size();
            int flag=0;
            while(1)
            {
                for(int i=1; i<=n; i++)
                {
                    st.insert(i);
                    if(st.size()>sz)
                    {
                        sz=st.size();
                        diff++;
                        if(diff==k)
                        {
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag==1)
                {
                    break;
                }
            }
            cout<<n*st.size()<<endl;
            for(int i=0; i<n; i++)
            {
                for(set<int>::iterator it=st.begin(); it!=st.end(); it++)
                {
                    cout<<*it<<" ";
                }
            }
            cout<<endl;

        }
    }

    return 0;
}


