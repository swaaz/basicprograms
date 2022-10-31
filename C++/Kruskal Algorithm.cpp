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

struct edge
{
    int u;
    int v;
    int w;
};
edge adj[100005];
edge adj1[200005];
int par[100005];
bool comp(edge u, edge v)
{
    return u.w < v.w;
}
int find(int i)
{
    if (par[i] == -1)
        return i;
    return par[i] = find(par[i]);
}
void set_union(int a, int b)
{
    par[b] = a;
}

int main()
{
    int n, m, u, v, w;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> adj[i].u >> adj[i].v >> adj[i].w;
    }
    sort(adj, adj + m, comp);
    ll ans = 0;
    for (int i = 0; i < m; i++)
    {
        u = find(adj[i].u);
        v = find(adj[i].v);
        if (u != v)
        {
            ans += adj[i].w;
            set_union(u, v);
        }
    }
    cout << ans << endl;
}
