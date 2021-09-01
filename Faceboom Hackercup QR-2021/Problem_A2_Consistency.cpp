///"--------------------Bismillahir Rahmanir Rahim"-----------------------///

#include <bits/stdc++.h>
using namespace std;

///_____________________________FAST I/O__________________________________///
#define Boost()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
///-----------------------------------------------------------------------///

///_____________________________DATA TYPE_________________________________///
typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;
///-----------------------------------------------------------------------///

///_______________________________LOOP____________________________________///
#define rep0(i, n) for (i = 0; i < n; i++)
#define rep1(i, n) for (i = 1; i <= n; i++)
///-----------------------------------------------------------------------///

///_________________________________I/O___________________________________///
#define sf scanf
#define pf printf
///-----------------------------------------------------------------------///

///_________________________________OTHERS________________________________///
#define pb push_back
#define all(c) c.begin(), c.end()
#define MK make_pair
#define F first
#define S second
#define endl '\n'
///-----------------------------------------------------------------------///

///____________________________INITIALIZATION_____________________________///
#define mem(a, b) memset(a, b, sizeof(a))
///-----------------------------------------------------------------------///

///____________________________CALCULATE__________________________________///
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define sqr(a) ((a) * (a))
///-----------------------------------------------------------------------///

///_____________________________BIT OPERATION____________________________///
inline bool checkBit(ll n, int i)
{
    return n & (1LL << i);
}
inline ll setBit(ll n, int i)
{
    return n | (1LL << i);
    ;
}
inline ll resetBit(ll n, int i)
{
    return n & (~(1LL << i));
}
///-----------------------------------------------------------------------///

///________________________String/Char Related Functions__________________///
string makeintString(int x)
{
    stringstream ss;
    ss << x;
    string str = ss.str();
    ///cout<<str<<endl;
    return str;
}
string makellString(ll x)
{
    stringstream ss;
    ss << x;
    string str = ss.str();
    ///cout<<str<<endl;
    return str;
}
char cpp(char c)
{
    return static_cast<char>(c + 1);
}
///-----------------------------------------------------------------------///

///__________________________Sorting STL_________________________________///
struct func
{
    //this is a sample overloading function for sorting stl
    bool operator()(pii const &a, pii const &b)
    {
        if (a.F == b.F)
            return (a.S < b.S);
        return (a.F < b.F);
    }
};
///-----------------------------------------------------------------------///

///____________________________CONSTANT___________________________________///
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
///-----------------------------------------------------------------------///


// A BFS based function to check whether d is reachable from s.
bool isReachable(char s, char d)
{
    /*
    // Base case
    if (s == d)
        return true;

    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    // Create a queue for BFS
    list<char> queue;

    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);

    // it will be used to get all adjacent vertices of a vertex
    list<char>::iterator i;

    while (!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        queue.pop_front();

        // Get all adjacent vertices of the dequeued vertex s
        // If a adjacent has not been visited, then mark it visited
        // and enqueue it
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            // If this adjacent node is the destination node, then
            // return true
            if (*i == d)
                return true;

            // Else, continue to do BFS
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }

    // If BFS is complete without visiting d
    */
    return false;
}

int main()
{
    Boost();
/*
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
*/

    int t;
    t = 1;
    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        string s, pr;
        cin >> s;
        int k;
        cin >> k;
        cout<<k<<endl;


        //vector<string> key;
        //map<string, int> mp;
        for (int i = 0; i < k; i++)
        {
            cin >> pr;

            

            //g.addEdge(pr[0], pr[1]);

            //key.pb(pr);
           // mp[pr]++;
        }

        int ans = inf;
        for (int i = 0; i < s.size(); i++)
        {
            char q = s[i];
            int cnt = 0, f = 0;
            //cout<<q<<endl;
            for (int j = 0; j < s.size(); j++)
            {
                if (j == i || s[j] == q)
                {
                    continue;
                }
                string tmp = "";
                tmp += s[j];
                tmp += q;
                //cout<<tmp<<endl;
                //cout<<cnt<<" "<<f<<endl;

/*
                if (g.isReachable(s[j], q))
                {
                    cout << "\n There is a path from " << s[j] << " to " << q;
                }
                */

/*
                if (mp[tmp] > 0)
                {
                    //cnt++;
                }
                else
                {
                    // f = 1;
                    //break;
                }
                */
            }
            //cout<<f<<endl;
            if (f == 0)
            {
                //cout<<"jhsfdvjh";
                ans = min(ans, cnt);
            }
        }

        cout << "Case #" << tc << ": " << ans << endl;
    }
    return 0;
}