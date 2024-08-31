#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll>a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    vector<ll> prefix(n), suffix(n);
    prefix[0] = a[0];
    suffix[n - 1] = a[n - 1];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] + a[i];
    }
    reverse(suffix.begin(), suffix.end());
    ll x = lower_bound(prefix.begin(), prefix.end(), (k + 1) / 2) - prefix.begin();
    ll y = lower_bound(suffix.begin(), suffix.end(), k / 2) - suffix.begin();
    reverse(suffix.begin(), suffix.end());
    y = n - y - 1;
    if (x > y)
    {
        cout << n << endl;
    }
    else if (x < y)
    {
        ll ans = 0;
        if (prefix[x] > ((k + 1) / 2))
        {
            ans += x;
        }
        else
        {
            ans += (x + 1);
        }
        if (suffix[y] > (k / 2))
        {
            ans += (n - y - 1);
        }
        else
        {
            ans += (n - y);
        }
        cout << ans << endl;
    }
    else
    {
        if (sum > k)
        {
            cout << n - 1 << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}