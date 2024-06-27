#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pii pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    set<int> idx;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        idx.insert(x);
    }
    string t;
    cin >> t;
    sort(t.begin(), t.end());
    int i = 0;
    map<int, char> mp;
    for (int x : idx)
    {
        mp[x] = t[i++];
    }
    for (auto [x, y] : mp)
    {
        s[x - 1] = y;
    }
    cout << s << "\n";
}

int32_t main()
{
    fastread();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}