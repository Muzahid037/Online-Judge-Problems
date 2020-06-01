#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define READ freopen("input.txt", "r", stdin);
#define WRITE freopen("output.txt", "w", stdout);
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)
#define sfi(a) scanf("%d",&a)
#define sfii(a,b) scanf("%d%d",&a,&b)
#define pfi(a) printf("%d\n",a)
#define pfii(a,b) printf("%d %d\n",a,b)
#define pb push_back
#define F first
#define S second
#define mp make_pair


int main()
{
    BOOST
    READ
    WRITE

    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        int n,x;
        cin>>n;
        int sz=2*n;
        map<int,int>pos,cnt;
        vector<int>v;
        bool flag=false;
        for(int i=0; i<sz; i++)
        {
            cin>>x;
            cnt[x]++;
            if(cnt[x]%2==1)
            {
                pos[x]=i+1;
                flag=false;
            }
            else
            {
                v.pb(pos[x]);
                v.pb(i+1);
                flag=true;
            }
        }
       if(v.empty() || v.size()!=sz) cout<<"-1"<<endl;
        else
        {
            for(int i=0; i<sz-1; i+=2)
            {
                cout<<v[i]<<" "<<v[i+1]<<endl;
            }
        }
    }
    return 0;
}

///-----------------------------------///

/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define READ freopen("input.txt", "r", stdin);
#define WRITE freopen("output.txt", "w", stdout);
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)
#define sfi(a) scanf("%d",&a)
#define sfii(a,b) scanf("%d%d",&a,&b)
#define pfi(a) printf("%d\n",a)
#define pfii(a,b) printf("%d %d\n",a,b)
#define pb push_back
#define F first
#define S second
#define mp make_pair


int main()
{
    BOOST
    READ
    WRITE

    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        int n,x;
        cin>>n;
        int sz=2*n;
        set<int>st;
        vector<int>v[1000000];
        for(int i=0; i<sz; i++)
        {
            cin>>x;
            v[x].pb(i+1);
            st.insert(x);
        }
        for(set<int>::iterator it=st.begin(); it!=st.end(); it++)
        {
            if((v[*it].size())%2!=0)
            {
                cout<<"-1"<<endl;
                return 0;
            }
        }
        for(set<int>::iterator it=st.begin(); it!=st.end(); it++)
        {
            for(int i=0; i<v[*it].size()-1; i+=2)
            {
                cout<<v[*it][i]<<" "<<v[*it][i+1]<<endl;
            }
        }
    }
    return 0;
}

*/
