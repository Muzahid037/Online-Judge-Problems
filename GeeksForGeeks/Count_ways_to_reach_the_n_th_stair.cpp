// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution
{
public:
    int dp[10005];
    int recursion(int n)
    {
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;
        if (dp[n] != 0)
            return dp[n];
        return dp[n] = (recursion(n - 1) + recursion(n - 2)) % 1000000007;
    }
    int countWays(int n)
    {
        recursion(n);

        // Another solution
        /*
        int a = 0, b = 1, c = 0, mod = 1e9+7;
        for(int i=0; i<n; i++){
            c = (a + b)%mod;
            a = b;
            b = c;
        }
        return c;
        */
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while (t--)
    {
        //taking stair count
        int m;
        cin >> m;
        Solution ob;
        cout << ob.countWays(m) << endl; // Print the output from our pre computed array
    }
    return 0;
}
// } Driver Code Ends