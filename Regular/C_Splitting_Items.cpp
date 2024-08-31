#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) begin(x), end(x)

template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v)
        cin >> it;
    return istream;
}

template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    cin >> a;

    sort(all(a), greater<int>());

    ll ans = a[0];
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            ans += a[i];
        }
        else
        {
            ll need = min(k, a[i - 1] - a[i]);
            a[i] += need;
            k -= need;
            ans -= a[i];
        }
    }
    cout << ans << endl;
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
