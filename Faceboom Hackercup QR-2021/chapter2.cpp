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

/*
class Graph
{
    int V;          // No. of vertices
    vector<int> *adj; // Pointer to an array containing adjacency lists
public:
    Graph(int V);               // Constructor
    void addEdge(int v, int w); // function to add an edge to graph
    int isReachable(int s, int d);
    void showGraph();
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new vector<int>[V];
}
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

// A BFS based function to check whether d is reachable from s.
int Graph::isReachable(int s, int d)
{
    int cnt = 0;
    //cout << s << " " << d << endl;
    // Base case
    if (s == d)
        return cnt;

    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    // Create a queue for BFS
    list<int> queue;

    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);

    // it will be used to get all adjacent vertices of a vertex
    list<int>::iterator i;

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
            {
                cnt++;
                return cnt;
            }

            // Else, continue to do BFS
            if (!visited[*i])
            {
                cnt++;
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }

    // If BFS is complete without visiting d
    return -1;
}

void Graph::showGraph()
{
    //cout<<"x";
    for (int j = 0; j < 26; j++)
    {
        cout << j << "->";
        for (list<int>::iterator i = adj[j].begin(); i != adj[j].end(); ++i)
        {
            cout << *i << ",";
        }
        cout << endl;
    }
}
*/

vector<int> adj[26];
vector<bool> visited(26);
vector<int> dp(26), p(26);

int isReachable(int s, int d)
{
    int cnt = 0, copyS = s;

    for (int i = 65; i <=90; i++)
        dp[i] = 0;

    dp[s] = 0;
    //p[s]=-1;
    //cout << s << " " << d << endl;
    // Base case

    if (s == d)
    {
        return cnt;
    }

    for (int i = 65; i <=90; i++)
        visited[i] = false;
    // Create a queue for BFS
    queue<int> q;

    // Mark the current node as visited and enqueue it
    visited[s] = true;
    q.push(s);

    // it will be used to get all adjacent vertices of a vertex

    while (!q.empty())
    {
        // Dequeue a vertex from queue and print it
        s = q.front();
        q.pop();

        // Get all adjacent vertices of the dequeued vertex s
        // If a adjacent has not been visited, then mark it visited
        // and enqueue it
        for (vector<int>::iterator i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            // If this adjacent node is the destination node, then
            // return true
            if (d == 'W')
            {
                //cout << *i << ",";
            }
            if (*i == d)
            {
                dp[*i]=dp[s]+1;
                cnt++;
                //return cnt;
                return dp[d];
            }

            // Else, continue to do BFS
            if (!visited[*i])
            {
                cnt++;

                dp[*i]=dp[s]+1;
                //p[*i]=s;
                visited[*i] = true;
                if (d == 'W')
                {
                    //cout << *i << ",";
                }
                q.push(*i);
            }
        }
    }

    // If BFS is complete without visiting d
    return -1;
    //return dp[copyS];
}

int main()
{
    Boost();

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    t = 1;
    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        string s;
        cin >> s;
        //cout << s << endl;

        set<char> ch;
        for (int i = 0; i < s.size(); i++)
        {
            ch.insert(s[i]);
            //cout << s[i] - 'A' << endl;
        }
        int n = ch.size();
        //cout << "n:" << n << endl;

        int k;
        cin >> k;
        string pr;
        //cout << "k:" << k << endl;

        vector<string> prV;
        for (int i = 0; i < k; i++)
        {
            cin >> pr;
            prV.pb(pr);
            adj[pr[0]].push_back(pr[1]);
        }

        /*
        for (int j = 65; j <= 90; j++)
        {
            int f = 0;
            for (vector<int>::iterator i = adj[j].begin(); i != adj[j].end(); ++i)
            {
               // cout << *i << ",";
                f = 1;
            }
            if (f == 1)
            {
                cout<<j << endl;
                f = 0;
            }
        }
        */

        int ans = INT_MAX, f = 0;
        for (char j = 'A'; j <= 'Z'; j++)
        {
            int cnt = 0, f = 0;
            string newString = s;
            // if (j == 'W')
            //cout << "j:" << j << "-";
            for (int i = 0; i < newString.size(); i++)
            {
                //cout << newString[i] << " " << j << "-";
                int reachableCount = isReachable(newString[i], j);
                //cout << reachableCount << endl;
                if (reachableCount >= 0)
                {
                    cnt += reachableCount;
                    newString[i] = j;
                    //if (j == 'W')
                    //cout << newString << endl;
                }
                else
                {
                    f = 1;
                    break;
                }
            }
            //cout<<endl;
            //if (j == 'W')
            //cout << "cnt: " << cnt << endl;
            if (f == 0)
            {
                ans = min(ans, cnt);
                cnt = 0;
            }
        }

        if (ans != INT_MAX)
        {
            // cout << ans << endl;
            cout << "Case #" << tc << ": " << ans << endl;
        }
        else
        {
            //cout << "-1" << endl;
            cout << "Case #" << tc << ": " << -1 << endl;
        }

        for (int i = 65; i <= 90; i++)
        {
            adj[i].clear();
            visited[i] = false;
        }
        
    }
    return 0;
}