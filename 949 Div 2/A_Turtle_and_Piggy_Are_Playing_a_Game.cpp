#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pii pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int l, r;
    cin >> l >> r;
    int num = 1;
    while (num * 2 <= r)
        num *= 2;
    int ans = 0;
    for (int i = 2; i * i <= num; i++)
    {
        while (num % i == 0)
        {
            ans++;
            num /= i;
        }
    }
    if (num > 1)
        ans++;
    cout << ans << "\n";
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