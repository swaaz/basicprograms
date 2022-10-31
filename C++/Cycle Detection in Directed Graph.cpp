#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mod9 998244353
#define raftaar                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define endl "\n"
bool dfs(int node, vector<int> adj[], vector<bool> &vis, vector<int> &check)
{
    vis[node] = 1;
    check[node] = 1;
    for (auto x : adj[node])
    {
        if (!vis[x])
        {
            if (dfs(x, adj, vis, check))
            {
                return true;
            }
        }
        if (check[x])
        {
            return true;
        }
    }
    check[node] = 0;
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    vector<bool> vis(V, 0);
    vector<int> check(V, 0);

    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            if (dfs(i, adj, vis, check))
            {
                return true;
            }
        }
    }

    return false;
}
int main()
{
    raftaar;
    int node, edges;
    cin >> node >> edges;
    vector<int> adj[node];
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    bool ans = isCyclic(node, adj);
    if (ans)
    {
        cout << "The Graph contain cycle" << endl;
    }
    else
    {
        cout << "The Graph does not contain cycle" << endl;
    }
}
