///"--------------------Bismillahir Rahmanir Rahim"-----------------------///
#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, x, ans = 0;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    while (a[((n + 1) / 2) - 1] != x)
    {
        ans++;
        n++;
        a.push_back(x);
        sort(a.begin(), a.end());
    }
    cout << ans << endl;
    return 0;
}