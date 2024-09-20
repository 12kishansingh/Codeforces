/**
 *    author:  ks888singh
 *    created: 11-09-2024 18:13:43
 **/
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

void solve()
{
    int n;
    cin >> n;
    vector<int> pref(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        pref[i] = pref[i - 1] + x;
    }
    int l = 1, r = n;
    ll ans = -1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        cout << "? " << mid - l + 1 << " ";
        for (int i = l; i <= mid; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        cout.flush();
        int x = 0;
        cin >> x;
        if (x == pref[mid] - pref[l - 1])
        {
            l = mid + 1;
        }
        else
        {
            ans = mid;
            r = mid - 1;
        }
    }
    cout << "! " << ans << endl;
    cout.flush();
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
