#include <bits/stdc++.h>
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
using namespace std;
using lint = long long;
using pi = pair<int, int>;

vector<pi> pr;

int main()
{
    int n;
    scanf("%d",&n);
    lint ans = 1ll * n * n;
    for(int i=0; i<n; i++)
    {
        int m;
        scanf("%d",&m);
        vector<int> v(m);
        for(int i=0; i<m; i++) scanf("%d",&v[i]);
        reverse(all(v));
        if(is_sorted(all(v)))
        {
            pr.emplace_back(v[0], v.back());
            cout<<v[0]<<" "<<v.back()<<endl;
        }
    }
    sort(all(pr));

    int p=0;

    for(p=0; p<sz(pr)-1; p++)
    {


    cout<<p<<" "<<pr[p].second<<" "<<pr[p].first<<endl;;
        if(pr[p].second==pr[p].first)
        {
            ans--;
        }

    cout<<p<<" "<<pr[p].second<<" "<<pr[p+1].first<<endl;
        if(pr[p].second>=pr[p+1].first)
        {
            ans--;
        }
         cout<<p<<" "<<pr[p+1].second<<" "<<pr[p].first<<endl;
        if(pr[p+1].second>=pr[p].first)
        {
            ans--;
        }



//    		ans -= pr.end() - lower_bound(all(pr), pi(pr[i].second, -1));
    }
     cout<<p<<" "<<pr[p].second<<" "<<pr[p].first<<endl;
     if(pr[p].second==pr[p].first)
        {
            ans--;
        }


    cout << ans << endl;
}
