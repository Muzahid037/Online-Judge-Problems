    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
            int n;
            cin >> n;
            vector<int> idx(n + 1);
            for (int i = 1; i <= n; i++) {
                int x;
                cin >> x;
                idx[x] = i;
            }
            vector<int> b(n + 1);
            for (int i = 1; i <= n; i++) {
                int x;
                cin >> x;
                b[i] = idx[x];
                //dbg(b[i]);
            }

            int mn = INT_MAX, ans = 0;
            for (int i = n; i >= 0; i--) {
                mn = min(mn, b[i]);
               // dbg(mn, b[i]);
                if (b[i] > mn) ans++;
            }
            cout << ans << endl;


        return 0;
    }
