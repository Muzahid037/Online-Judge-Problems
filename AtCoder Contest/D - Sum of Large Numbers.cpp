#include<bits/stdc++.h>
using namespace std;

long long int MOD = 1000000007;
long double EPS = 1e-8;

long long int N, M, K, L, R, H, W;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> K;
    long long int ans = 0;
    for (long long int i = K; i <= N + 1; i++)
    {
        L = i * (i - 1) / 2;
        R = N * i - L;
        ans += R - L+1;
        cout<<L<<" "<<R<<" "<<ans<<endl;
    }
    cout << ans % MOD << endl;
}
