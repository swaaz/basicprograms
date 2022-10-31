//Name-Avnish Kumar
//Github id-Avnish010
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 100000000
#define M 0
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define endl "\n"
#define mp make_pair
#define pb push_back
#define pf push_front
#define ub upper_bound
#define lb lower_bound
#define mod1 1000000009
#define mem(a, val) memset(a, val, sizeof(a))
#define vi vector<int>
#define vvl vector<vector<long>>
#define vl vector<ll>
#define vpl vector<pair<ll, ll>>
#define vpi vector<pair<int, int>>
#define msi map<string, int>
vi adj[100005];
vi adjt[100005];
int vis[100005];
vi order; // for first dfs having increasing outtime order
vi scc;
void dfs(int v)
{
    vis[v] = 1;
    for (auto x : adj[v])
    {
        if (!vis[x])
        {
            dfs(x);
        }
    }
    order.pb(v);
}
void dfst(int v)
{
    vis[v] = 1;
    for (auto x : adjt[v])
    {
        if (!vis[x])
        {
            dfst(x);
        }
    }
    scc.pb(v);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, u, v;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            adj[i].clear(), adjt[i].clear(), vis[i] = 0;
        }
        order.clear();
        for (int i = 1; i <= m; i++)
        {
            cin >> u >> v;
            adj[u].pb(v);
            adjt[v].pb(u);
        }
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
                dfs(i);
        }
        for (int i = 1; i <= n; i++)
        {
            vis[i] = 0;
        }
        for (int i = 1; i <= n; i++)
        {
            if (!vis[order[n - i]])
            {
                scc.clear();
                dfst(order[n - i]);
                cout << "dfst is called for" << order[n - i] << " " << endl;

                for (int i : scc)
                    cout << i << " ";
                cout << endl;
            }
        }
    }
}
