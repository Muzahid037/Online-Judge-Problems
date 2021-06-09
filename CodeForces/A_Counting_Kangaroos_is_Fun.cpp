///"--------------------Bismillahir Rahmanir Rahim"-----------------------///
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(c) c.begin(), c.end()

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));

    int ans = n;

    for (int i = 0, j = n / 2; i < n / 2 && j < n; i++)
    {
        while (1)
        {
            if (a[i] * 2 <= a[j])
            {
                ans--;
                j++;
                break;
            }
            else
            {
                j++;
            }
            if (j == n)
            {
                break;
            }
        }
        if (j == n)
        {
            break;
        }
    }
    cout << ans << endl;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    t = 1;
    //cin >> t;
    while (t--)
        solve();
    return 0;
}