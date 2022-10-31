//Name-Avnish Kumar
//Github id-Avnish010
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define endl "\n"
#define mp make_pair
#define pb push_back
#define pf push_front
#define lb lower_bound
#define ub upper_bound
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define mi map<int>
#define msi map<string, int>
#define mii map<int, int>
#define spi set<pair<int, int>>
const int limit = 1e18;
const int sz = 1000005;
const int LOG = 17;
int prelog[sz];
int st[sz][LOG];
int query(int l, int r) // O(1) tc
{
    int len = r - l + 1;
    int k = prelog[len];
    return min(st[l][k], st[r - (1 << k) + 1][k]);
}

void solve()
{
    int n;
    cin >> n;
    prelog[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        prelog[i] = prelog[i / 2] + 1;
    }
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        st[i][0] = a[i];
    }
    // preprocessing st[i][k]=startin at idx= i store min of(i,i+(1<<k))
    // tc =nlog(n)
    for (int k = 1; k < LOG; k++)
    {
        for (int i = 0; i + (1 << k) - 1 < n; i++)
        {
            st[i][k] = min(st[i][k - 1], st[i + (1 << (k - 1))][k - 1]);
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << query(l, r) << endl;
    }
}
signed main()
{
    fastIO;

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
